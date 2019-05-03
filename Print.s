; Print.s
; Student names: Franklin Mao and Ronak Patel
; Last modification date: change this to the last modification date or look very silly
; Runs on LM4F120 or TM4C123
; EE319K lab 7 device driver for any LCD
;
; As part of Lab 7, students need to implement these LCD_OutDec and LCD_OutFix
; This driver assumes two low-level LCD functions
; ST7735_OutChar   outputs a single 8-bit ASCII character
; ST7735_OutString outputs a null-terminated string 
	PRESERVE8
		
    IMPORT   ST7735_OutChar
    IMPORT   ST7735_OutString
    EXPORT   LCD_OutDec
    EXPORT   LCD_OutFix

    AREA    |.text|, CODE, READONLY, ALIGN=2
    THUMB

  
remainder EQU 0
;-----------------------LCD_OutDec-----------------------
; Output a 32-bit number in unsigned decimal format
; Input: R0 (call by value) 32-bit unsigned number
; Output: none
; Invariables: This function must not permanently modify registers R4 to R11
LCD_OutDec
    ; copy/paste Lab 7 solution here
			PUSH {R4, R5, R6, LR}
			SUB SP, #4
			MOV R2, #10
			CMP R0, R2
			BLO printDigit
			UDIV R1, R0, R2
			MUL R3, R1, R2			; R3 = quotient
			SUB R4, R0, R3			; R4 = remainder
			MOV R0, R1				; R0 is the new input
			STR R4, [SP, #remainder] ; allocate
			BL LCD_OutDec
			LDR R0, [SP, #remainder] ; Recursive call
			BL printDigit
done		ADD SP, #4
			POP {R4, R5, R6, LR}
			BX  LR
		
printDigit
			ADD R0, R0, #0x30		; Converts digit to ASCII
			PUSH{R1, R2, R3, LR}
			BL ST7735_OutChar
			POP{R1, R2, R3, LR}
			B done
;* * * * * * * * End of LCD_OutDec * * * * * * * *

; -----------------------LCD _OutFix----------------------
; Output characters to LCD display in fixed-point format
; unsigned decimal, resolution 0.001, range 0.000 to 9.999
; Inputs:  R0 is an unsigned 32-bit number
; Outputs: none
; E.g., R0=0,    then output "0.000 "
;       R0=3,    then output "0.003 "
;       R0=89,   then output "0.089 "
;       R0=123,  then output "0.123 "
;       R0=9999, then output "9.999 "
;       R0>9999, then output "*.*** "
; Invariables: This function must not permanently modify registers R4 to R11
LCD_OutFix
    ; copy/paste Lab 7 solution here
			PUSH{R4, R5, R6, LR}
			LDR R1, =9999
			CMP R1, R0
			BLO printStars
			LDR R1, =1000
			MOV R2, #5			; Iterations
			MOV R3, R0			; R3 = original input
			MOV R5, #10
printLoop	
		
			CMP R2, #4
			BNE noDP
			MOV R0, #46
			PUSH{R1, R2, R3, LR}
			BL ST7735_OutChar
			POP{R1, R2, R3, LR}
			B skip
noDP
			UDIV R0, R3, R1
			UDIV R4, R0, R5
			MUL R4, R4, R5
			SUB R0, R0, R4
			ADD R0, R0, #0x30
			PUSH{R1, R2, R3, LR}
			BL ST7735_OutChar
			POP{R1, R2, R3, LR}
			UDIV R1, R1, R5
skip		SUBS R2, R2, #1
			BNE printLoop
fin
			POP{R4, R5, R6, LR}
			BX   LR
			
printStars
			MOV R0, #42
			BL ST7735_OutChar
			MOV R0, #46
			BL ST7735_OutChar
			MOV R0, #42
			BL ST7735_OutChar
			MOV R0, #42
			BL ST7735_OutChar
			MOV R0, #42
			BL ST7735_OutChar
			B fin
 
     
;* * * * * * * * End of LCD_OutFix * * * * * * * *

     ALIGN                           ; make sure the end of this section is aligned
     END                             ; end of file
