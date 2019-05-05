// images.h
// contains image buffers for simple space invaders
// Jonathan Valvano, March 5, 2018
// Capture image dimensions from BMP files

#ifndef __images_h
#define __images_h
#include <stdint.h>


// *************************** Images ***************************
// Images for Judgement Spots and Moving Notes (Arrows: Static, Arrow)
const unsigned short Static_Left[] = {
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x6B4D, 0xFFFF, 0x6B6D, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0xB596, 0xFFFF, 0xDEFB, 0xFFDF, 0xBDF7, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xBDF7, 0xFFDF, 0xCE99, 0xB5F7, 0xBDF7, 0xF7BE, 0x9CF3,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0xBDF7, 0xFFDF, 0xCE99, 0xB617, 0xADD6, 0xADB6, 0xBE18, 0xFFFF, 0x10A2, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xB5B6, 0xFFDF, 0xCE79, 0xB617, 0xB617, 0xB5F7, 0xADB6, 0xB5F7, 0xFFFF,
 0x2945, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xDEDB, 0xFFDF,
 0xCE99, 0xADF7, 0xB617, 0xB617, 0xADB6, 0xB5F7, 0xE73C, 0xDEFB, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xE71C, 0xFFDF, 0xC679, 0xADD6, 0xADF7, 0xB638, 0xADD6, 0xB5D6, 0xEF5D, 0xF7BE, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xDEFB, 0xFFDF, 0xC679, 0xADD6,
 0xADF7, 0xB617, 0xADF7, 0xB5D7, 0xE73C, 0xC618, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0xDEDB, 0xFFDF, 0xC679, 0xADB6, 0xADD6, 0xB617, 0xADF7, 0xBE58, 0xFFDF, 0xFFFF, 0x8C71, 0xA514, 0xAD75,
 0xAD75, 0xAD75, 0xAD75, 0xB596, 0x94B2, 0x10A2, 0x0000, 0x0000, 0x0000, 0x0000, 0xD69A, 0xFFDF, 0xC679, 0xA595, 0xADD6, 0xB5F7,
 0xADF7, 0xBE37, 0xD6DB, 0xEF5D, 0xDF1C, 0xDEFB, 0xDEFB, 0xDEFB, 0xDEFB, 0xDEFB, 0xDEFB, 0xDEFB, 0xE73C, 0xFFDF, 0x18C3, 0x0000,
 0x0000, 0x8C51, 0xFFDF, 0xC679, 0xA595, 0xA5B6, 0xADF6, 0xB5F7, 0xB5F7, 0xB638, 0xB5F7, 0xADB6, 0xB5D6, 0xB5D6, 0xB5D7, 0xB5F7,
 0xB5F7, 0xBE17, 0xBE18, 0xBE38, 0xC658, 0xE71C, 0xDEFB, 0x0000, 0x0000, 0xF7BE, 0xD6DA, 0xADD6, 0xA595, 0xADD6, 0xADF6, 0xB5F7,
 0xB617, 0xB617, 0xB5D6, 0xB5B6, 0xB5D6, 0xB5D7, 0xB5F7, 0xBE17, 0xBE18, 0xBE38, 0xBE38, 0xBE58, 0xC679, 0xD6BA, 0xF7BE, 0x0000,
 0x0000, 0xF7BE, 0xD6BA, 0xADB6, 0xA595, 0xADD6, 0xADF6, 0xB5F7, 0xB617, 0xB617, 0xB5D6, 0xB5D6, 0xB5D7, 0xB5F7, 0xB5F7, 0xBE17,
 0xBE18, 0xBE38, 0xBE38, 0xC658, 0xC679, 0xD6BA, 0xF79E, 0x0000, 0x0000, 0xAD75, 0xF7BE, 0xC658, 0xA595, 0xADD6, 0xADF6, 0xB5F7,
 0xB617, 0xB637, 0xADD6, 0xAD96, 0xADB6, 0xADB6, 0xB5D6, 0xB5D7, 0xB5F7, 0xB5F7, 0xBE17, 0xBE38, 0xC658, 0xDEFB, 0xEF7D, 0x0000,
 0x0000, 0x0000, 0xEF7D, 0xF79D, 0xBE38, 0xA595, 0xADD6, 0xB5F7, 0xADF7, 0xB637, 0xD6BA, 0xD6DB, 0xD6BA, 0xCE79, 0xCE99, 0xCE9A,
 0xCE9A, 0xCE9A, 0xCEBA, 0xD6BA, 0xDEDB, 0xFFDF, 0x4208, 0x0000, 0x0000, 0x0000, 0x0000, 0xF7BE, 0xF79E, 0xBE58, 0xA5B5, 0xADF6,
 0xB5F7, 0xB5F7, 0xC699, 0xFFFF, 0xFFFF, 0xD69A, 0xE71C, 0xE73C, 0xE73C, 0xE73C, 0xE73C, 0xE73C, 0xC618, 0x4A49, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0xF7BE, 0xEF7D, 0xC658, 0xA5B6, 0xB5F7, 0xB617, 0xADF7, 0xBE17, 0xF7BE, 0x8410, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xF7BE, 0xF79E, 0xC658,
 0xADD6, 0xB617, 0xB638, 0xADD6, 0xBDF7, 0xF79E, 0xE71C, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xF7BE, 0xF7BE, 0xC658, 0xADF6, 0xB637, 0xB617, 0xADB6, 0xBDF7, 0xF79E, 0xCE59,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xEF7D,
 0xF79E, 0xC658, 0xADF7, 0xB617, 0xB5F7, 0xADB6, 0xBDF7, 0xFFFF, 0x2104, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xDEFB, 0xF79E, 0xC679, 0xB5F7, 0xB5F7, 0xADB6, 0xBDF7, 0xFFFF,
 0x18E3, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0xE71C, 0xF79E, 0xC679, 0xADD6, 0xB5F7, 0xEF5D, 0xCE59, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xD6BA, 0xF79E, 0xCE79, 0xEF5D, 0xE71C, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0xA514, 0xFFFF, 0xA514, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
};

const unsigned short Static_Down[] = {
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x8C51, 0xF7BE, 0xF7BE, 0xAD75, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xD69A, 0xFFDF, 0xD6DA, 0xD6BA, 0xF7BE, 0xEF7D, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0xDEDB, 0xFFDF, 0xC679, 0xADD6, 0xADB6, 0xC658, 0xF79D, 0xF7BE, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xDEFB, 0xFFDF, 0xC679, 0xA595, 0xA595, 0xA595, 0xA595, 0xBE38, 0xF79E,
 0xF7BE, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xE71C, 0xFFDF,
 0xC679, 0xA595, 0xA5B6, 0xADD6, 0xADD6, 0xADD6, 0xA595, 0xBE58, 0xEF7D, 0xF7BE, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xDEDB, 0xFFDF, 0xC679, 0xADB6, 0xADD6, 0xADF6, 0xADF6, 0xADF6, 0xADF6, 0xADD6, 0xA5B5,
 0xC658, 0xF79E, 0xF7BE, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xB5B6, 0xFFDF, 0xC679, 0xADD6,
 0xADD6, 0xB5F7, 0xB5F7, 0xB5F7, 0xB5F7, 0xB5F7, 0xB5F7, 0xADF6, 0xA5B6, 0xC658, 0xF7BE, 0xEF7D, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0xBDF7, 0xFFDF, 0xCE99, 0xADD6, 0xADF7, 0xB617, 0xADF7, 0xB5F7, 0xB617, 0xB617, 0xB617, 0xADF7, 0xB5F7,
 0xB5F7, 0xADD6, 0xC658, 0xF79E, 0xDEFB, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xBDF7, 0xFFDF, 0xCE79, 0xADF7, 0xADF7, 0xB617,
 0xADF7, 0xBE37, 0xB638, 0xB617, 0xB617, 0xB637, 0xB637, 0xB5F7, 0xB617, 0xB617, 0xADF6, 0xC658, 0xF79E, 0xE71C, 0x0000, 0x0000,
 0x0000, 0xB596, 0xFFDF, 0xCE99, 0xB617, 0xB617, 0xB638, 0xADF7, 0xBE58, 0xD6DB, 0xB5F7, 0xB5D6, 0xB5D6, 0xADD6, 0xD6BA, 0xC699,
 0xADF7, 0xB638, 0xB637, 0xADF7, 0xC679, 0xF79E, 0xD6BA, 0x0000, 0x6B4D, 0xFFFF, 0xCE99, 0xB617, 0xB617, 0xB617, 0xADD6, 0xB5D7,
 0xFFDF, 0xEF5D, 0xADB6, 0xB5B6, 0xB5D6, 0xAD96, 0xD6DB, 0xFFFF, 0xBE17, 0xADD6, 0xB617, 0xB617, 0xB5F7, 0xC679, 0xF79E, 0xA514,
 0xFFFF, 0xDEFB, 0xB5F7, 0xADD6, 0xB5F7, 0xADB6, 0xB5D6, 0xE73C, 0xFFFF, 0xDF1C, 0xB5D6, 0xB5D6, 0xB5D7, 0xADB6, 0xD6BA, 0xFFFF,
 0xF7BE, 0xBDF7, 0xADB6, 0xB5F7, 0xB5F7, 0xADD6, 0xCE79, 0xFFFF, 0x6B6D, 0xFFDF, 0xBDF7, 0xADB6, 0xADB6, 0xB5F7, 0xEF5D, 0xC618,
 0x8C71, 0xDEFB, 0xB5D6, 0xB5D7, 0xB5F7, 0xADB6, 0xCE79, 0xD69A, 0x8410, 0xF79E, 0xBDF7, 0xADB6, 0xADB6, 0xB5F7, 0xEF5D, 0xA514,
 0x0000, 0xBDF7, 0xF7BE, 0xBE18, 0xB5F7, 0xE73C, 0xF7BE, 0x0000, 0xA514, 0xDEFB, 0xB5D7, 0xB5F7, 0xB5F7, 0xB5D6, 0xCE99, 0xE71C,
 0x0000, 0xE71C, 0xF79E, 0xBDF7, 0xBDF7, 0xEF5D, 0xE71C, 0x0000, 0x0000, 0x0000, 0x9CF3, 0xFFFF, 0xFFFF, 0xDEFB, 0x0000, 0x0000,
 0xAD75, 0xDEFB, 0xB5F7, 0xBE17, 0xBE17, 0xB5D7, 0xCE9A, 0xE73C, 0x0000, 0x0000, 0xCE59, 0xFFFF, 0xFFFF, 0xCE59, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x10A2, 0x2945, 0x0000, 0x0000, 0x0000, 0xAD75, 0xDEFB, 0xB5F7, 0xBE18, 0xBE18, 0xB5F7, 0xCE9A, 0xE73C,
 0x0000, 0x0000, 0x0000, 0x2104, 0x18E3, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0xAD75, 0xDEFB, 0xBE17, 0xBE38, 0xBE38, 0xB5F7, 0xCE9A, 0xE73C, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xAD75, 0xDEFB, 0xBE18, 0xBE38, 0xBE38, 0xBE17, 0xCEBA, 0xE73C,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0xB596, 0xDEFB, 0xBE38, 0xBE58, 0xC658, 0xBE38, 0xD6BA, 0xE73C, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x94B2, 0xE73C, 0xC658, 0xC679, 0xC679, 0xC658, 0xDEDB, 0xC618,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x10A2, 0xFFDF, 0xE71C, 0xD6BA, 0xD6BA, 0xDEFB, 0xFFDF, 0x4A49, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x18C3, 0xDEFB, 0xF7BE, 0xF79E, 0xEF7D, 0x4208, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
};

const unsigned short Static_Up[] = {
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x4208, 0xEF7D, 0xF79E, 0xF7BE, 0xDEFB, 0x18C3, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x4A49, 0xFFDF, 0xDEFB, 0xD6BA, 0xD6BA, 0xE71C, 0xFFDF, 0x10A2,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0xC618, 0xDEDB, 0xC658, 0xC679, 0xC679, 0xC658, 0xE73C, 0x94B2, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xE73C, 0xD6BA, 0xBE38, 0xC658, 0xBE58, 0xBE38, 0xDEFB, 0xB596,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0xE73C, 0xCEBA, 0xBE17, 0xBE38, 0xBE38, 0xBE18, 0xDEFB, 0xAD75, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xE73C, 0xCE9A, 0xB5F7, 0xBE38, 0xBE38, 0xBE17, 0xDEFB, 0xAD75,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x18E3, 0x2104, 0x0000, 0x0000, 0x0000,
 0xE73C, 0xCE9A, 0xB5F7, 0xBE18, 0xBE18, 0xB5F7, 0xDEFB, 0xAD75, 0x0000, 0x0000, 0x0000, 0x2945, 0x10A2, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0xCE59, 0xFFFF, 0xFFFF, 0xCE59, 0x0000, 0x0000, 0xE73C, 0xCE9A, 0xB5D7, 0xBE17, 0xBE17, 0xB5F7, 0xDEFB, 0xAD75,
 0x0000, 0x0000, 0xDEFB, 0xFFFF, 0xFFFF, 0x9CF3, 0x0000, 0x0000, 0x0000, 0xE71C, 0xEF5D, 0xBDF7, 0xBDF7, 0xF79E, 0xE71C, 0x0000,
 0xE71C, 0xCE99, 0xB5D6, 0xB5F7, 0xB5F7, 0xB5D7, 0xDEFB, 0xA514, 0x0000, 0xF7BE, 0xE73C, 0xB5F7, 0xBE18, 0xF7BE, 0xBDF7, 0x0000,
 0xA514, 0xEF5D, 0xB5F7, 0xADB6, 0xADB6, 0xBDF7, 0xF79E, 0x8410, 0xD69A, 0xCE79, 0xADB6, 0xB5F7, 0xB5D7, 0xB5D6, 0xDEFB, 0x8C71,
 0xC618, 0xEF5D, 0xB5F7, 0xADB6, 0xADB6, 0xBDF7, 0xFFDF, 0x6B6D, 0xFFFF, 0xCE79, 0xADD6, 0xB5F7, 0xB5F7, 0xADB6, 0xBDF7, 0xF7BE,
 0xFFFF, 0xD6BA, 0xADB6, 0xB5D7, 0xB5D6, 0xB5D6, 0xDF1C, 0xFFFF, 0xE73C, 0xB5D6, 0xADB6, 0xB5F7, 0xADD6, 0xB5F7, 0xDEFB, 0xFFFF,
 0xA514, 0xF79E, 0xC679, 0xB5F7, 0xB617, 0xB617, 0xADD6, 0xBE17, 0xFFFF, 0xD6DB, 0xAD96, 0xB5D6, 0xB5B6, 0xADB6, 0xEF5D, 0xFFDF,
 0xB5D7, 0xADD6, 0xB617, 0xB617, 0xB617, 0xCE99, 0xFFFF, 0x6B4D, 0x0000, 0xD6BA, 0xF79E, 0xC679, 0xADF7, 0xB637, 0xB638, 0xADF7,
 0xC699, 0xD6BA, 0xADD6, 0xB5D6, 0xB5D6, 0xB5F7, 0xD6DB, 0xBE58, 0xADF7, 0xB638, 0xB617, 0xB617, 0xCE99, 0xFFDF, 0xB596, 0x0000,
 0x0000, 0x0000, 0xE71C, 0xF79E, 0xC658, 0xADF6, 0xB617, 0xB617, 0xB5F7, 0xB637, 0xB637, 0xB617, 0xB617, 0xB638, 0xBE37, 0xADF7,
 0xB617, 0xADF7, 0xADF7, 0xCE79, 0xFFDF, 0xBDF7, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xDEFB, 0xF79E, 0xC658, 0xADD6, 0xB5F7,
 0xB5F7, 0xADF7, 0xB617, 0xB617, 0xB617, 0xB5F7, 0xADF7, 0xB617, 0xADF7, 0xADD6, 0xCE99, 0xFFDF, 0xBDF7, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0xEF7D, 0xF7BE, 0xC658, 0xA5B6, 0xADF6, 0xB5F7, 0xB5F7, 0xB5F7, 0xB5F7, 0xB5F7, 0xB5F7, 0xADD6,
 0xADD6, 0xC679, 0xFFDF, 0xB5B6, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xF7BE, 0xF79E, 0xC658,
 0xA5B5, 0xADD6, 0xADF6, 0xADF6, 0xADF6, 0xADF6, 0xADD6, 0xADB6, 0xC679, 0xFFDF, 0xDEDB, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xF7BE, 0xEF7D, 0xBE58, 0xA595, 0xADD6, 0xADD6, 0xADD6, 0xA5B6, 0xA595, 0xC679,
 0xFFDF, 0xE71C, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xF7BE,
 0xF79E, 0xBE38, 0xA595, 0xA595, 0xA595, 0xA595, 0xC679, 0xFFDF, 0xDEFB, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xF7BE, 0xF79D, 0xC658, 0xADB6, 0xADD6, 0xC679, 0xFFDF, 0xDEDB,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0xEF7D, 0xF7BE, 0xD6BA, 0xD6DA, 0xFFDF, 0xD69A, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xAD75, 0xF7BE, 0xF7BE, 0x8C51, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
};

const unsigned short Static_Right[] = {
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x6B6D, 0xFFFF, 0x6B4D, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0xBDF7, 0xFFDF, 0xDEFB, 0xFFFF, 0xB596, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x9CF3, 0xF7BE, 0xBDF7, 0xB5F7, 0xCE99, 0xFFDF, 0xBDF7, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x10A2,
 0xFFFF, 0xBE18, 0xADB6, 0xADD6, 0xB617, 0xCE99, 0xFFDF, 0xBDF7, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x2945, 0xFFFF, 0xB5F7, 0xADB6, 0xB5F7, 0xB617, 0xB617, 0xCE79, 0xFFDF,
 0xB5B6, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0xDEFB, 0xE73C, 0xB5F7, 0xADB6, 0xB617, 0xB617, 0xADF7, 0xCE99, 0xFFDF, 0xDEDB, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xF7BE, 0xEF5D, 0xB5D6, 0xADD6, 0xB638, 0xADF7, 0xADD6,
 0xC679, 0xFFDF, 0xE71C, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0xC618, 0xE73C, 0xB5D7, 0xADF7, 0xB617, 0xADF7, 0xADD6, 0xC679, 0xFFDF, 0xDEFB, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x10A2, 0x94B2, 0xB596, 0xAD75, 0xAD75, 0xAD75, 0xAD75, 0xA514, 0x8C71, 0xFFFF, 0xFFDF, 0xBE58, 0xADF7, 0xB617,
 0xADD6, 0xADB6, 0xC679, 0xFFDF, 0xDEDB, 0x0000, 0x0000, 0x0000, 0x0000, 0x18C3, 0xFFDF, 0xE73C, 0xDEFB, 0xDEFB, 0xDEFB, 0xDEFB,
 0xDEFB, 0xDEFB, 0xDEFB, 0xDF1C, 0xEF5D, 0xD6DB, 0xBE37, 0xADF7, 0xB5F7, 0xADD6, 0xA595, 0xC679, 0xFFDF, 0xD69A, 0x0000, 0x0000,
 0x0000, 0xDEFB, 0xE71C, 0xC658, 0xBE38, 0xBE18, 0xBE17, 0xB5F7, 0xB5F7, 0xB5D7, 0xB5D6, 0xB5D6, 0xADB6, 0xB5F7, 0xB638, 0xB5F7,
 0xB5F7, 0xADF6, 0xA5B6, 0xA595, 0xC679, 0xFFDF, 0x8C51, 0x0000, 0x0000, 0xF7BE, 0xD6BA, 0xC679, 0xBE58, 0xBE38, 0xBE38, 0xBE18,
 0xBE17, 0xB5F7, 0xB5D7, 0xB5D6, 0xB5B6, 0xB5D6, 0xB617, 0xB617, 0xB5F7, 0xADF6, 0xADD6, 0xA595, 0xADD6, 0xD6DA, 0xF7BE, 0x0000,
 0x0000, 0xF79E, 0xD6BA, 0xC679, 0xC658, 0xBE38, 0xBE38, 0xBE18, 0xBE17, 0xB5F7, 0xB5F7, 0xB5D7, 0xB5D6, 0xB5D6, 0xB617, 0xB617,
 0xB5F7, 0xADF6, 0xADD6, 0xA595, 0xADB6, 0xD6BA, 0xF7BE, 0x0000, 0x0000, 0xEF7D, 0xDEFB, 0xC658, 0xBE38, 0xBE17, 0xB5F7, 0xB5F7,
 0xB5D7, 0xB5D6, 0xADB6, 0xADB6, 0xAD96, 0xADD6, 0xB637, 0xB617, 0xB5F7, 0xADF6, 0xADD6, 0xA595, 0xC658, 0xF7BE, 0xAD75, 0x0000,
 0x0000, 0x4208, 0xFFDF, 0xDEDB, 0xD6BA, 0xCEBA, 0xCE9A, 0xCE9A, 0xCE9A, 0xCE99, 0xCE79, 0xD6BA, 0xD6DB, 0xD6BA, 0xB637, 0xADF7,
 0xB5F7, 0xADD6, 0xA595, 0xBE38, 0xF79D, 0xEF7D, 0x0000, 0x0000, 0x0000, 0x0000, 0x4A49, 0xC618, 0xE73C, 0xE73C, 0xE73C, 0xE73C,
 0xE73C, 0xE71C, 0xD69A, 0xFFFF, 0xFFFF, 0xC699, 0xB5F7, 0xB5F7, 0xADF6, 0xA5B5, 0xBE58, 0xF79E, 0xF7BE, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8410, 0xF7BE, 0xBE17, 0xADF7, 0xB617, 0xB5F7,
 0xA5B6, 0xC658, 0xEF7D, 0xF7BE, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0xE71C, 0xF79E, 0xBDF7, 0xADD6, 0xB638, 0xB617, 0xADD6, 0xC658, 0xF79E, 0xF7BE, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xCE59, 0xF79E, 0xBDF7, 0xADB6, 0xB617, 0xB637, 0xADF6, 0xC658,
 0xF7BE, 0xF7BE, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x2104,
 0xFFFF, 0xBDF7, 0xADB6, 0xB5F7, 0xB617, 0xADF7, 0xC658, 0xF79E, 0xEF7D, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x18E3, 0xFFFF, 0xBDF7, 0xADB6, 0xB5F7, 0xB5F7, 0xC679, 0xF79E, 0xDEFB,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0xCE59, 0xEF5D, 0xB5F7, 0xADD6, 0xC679, 0xF79E, 0xE71C, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xE71C, 0xEF5D, 0xCE79, 0xF79E, 0xD6BA, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0xA514, 0xFFFF, 0xA514, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
};

const unsigned short Arrow_Left[] = {
 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x4B2C, 0x6F9E, 0x43CF, 0x0F0F, 0x0F0F,
 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F,
 0x0F0F, 0x0F0F, 0x4B8D, 0x5FFF, 0x06FF, 0x2FFF, 0x340F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F,
 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x540F, 0x57FF, 0x065E, 0x063D, 0x067E, 0x47FF, 0x2185,
 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F,
 0x5C2F, 0x57FF, 0x065E, 0x065D, 0x0E7D, 0x065E, 0x4FFF, 0x21C6, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F,
 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x6470, 0x47FF, 0x065E, 0x065D, 0x0E7D, 0x065E, 0x37FF, 0x3BCE, 0x0F0F,
 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x64B1, 0x4FFF,
 0x065E, 0x063D, 0x065D, 0x067E, 0x2FFF, 0x3B8D, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F,
 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x64F2, 0x4FFF, 0x061D, 0x063D, 0x065D, 0x067E, 0x27FF, 0x3B6D, 0x0F0F, 0x0F0F, 0x0F0F,
 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x6D13, 0x4FFF, 0x05FD, 0x063D,
 0x065D, 0x065E, 0x27BF, 0x3B6D, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F,
 0x0F0F, 0x0F0F, 0x0F0F, 0x7553, 0x47FF, 0x05FD, 0x061D, 0x065D, 0x063D, 0x2F9F, 0x3268, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F,
 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x6D33, 0x4FFF, 0x05DD, 0x05FC, 0x063D, 0x063D,
 0x065D, 0x2EFE, 0x1BD0, 0x0B4E, 0x1C53, 0x1C32, 0x1C32, 0x2432, 0x2432, 0x2452, 0x2452, 0x2452, 0x3493, 0x4D13, 0x08A2, 0x0F0F,
 0x0F0F, 0x4B4C, 0x6FFF, 0x05BD, 0x05FC, 0x061D, 0x063D, 0x063D, 0x063D, 0x061D, 0x06FF, 0x079F, 0x0F7F, 0x0F7F, 0x179F, 0x1F9F,
 0x1F9F, 0x27BF, 0x2FBF, 0x2FDF, 0x2FFF, 0x77FF, 0x43CF, 0x0F0F, 0x0F0F, 0x7E79, 0x1F1F, 0x05BC, 0x061C, 0x061D, 0x063D, 0x063D,
 0x065D, 0x065D, 0x065D, 0x067D, 0x0E7D, 0x0E7D, 0x169D, 0x1E9D, 0x1E9D, 0x26BD, 0x26BE, 0x2EDE, 0x26DE, 0x67FF, 0x3B4C, 0x0F0F,
 0x0F0F, 0x8679, 0x2F5F, 0x05BC, 0x061C, 0x061D, 0x063D, 0x063D, 0x065D, 0x065D, 0x065D, 0x067D, 0x0E7D, 0x0E7D, 0x169D, 0x169D,
 0x1E9D, 0x26BD, 0x26BE, 0x2EDE, 0x26DE, 0x67FF, 0x3B6C, 0x0F0F, 0x0F0F, 0x29E7, 0x7FFF, 0x061E, 0x05DC, 0x061D, 0x063D, 0x063D,
 0x065D, 0x061D, 0x06FF, 0x0FBF, 0x0F9F, 0x179F, 0x1FBF, 0x1FBF, 0x27BF, 0x27DF, 0x2FFF, 0x2FFF, 0x37FF, 0x7FFF, 0x3B8D, 0x0F0F,
 0x0F0F, 0x0F0F, 0x4B2C, 0x6FFF, 0x061E, 0x05DC, 0x063D, 0x063D, 0x063D, 0x373F, 0x236E, 0x01E8, 0x1B2E, 0x130D, 0x1B0D, 0x1B0D,
 0x1B0D, 0x1B2D, 0x1B2D, 0x1B2D, 0x236E, 0x3BAE, 0x0020, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x536C, 0x67FF, 0x063E, 0x05FC, 0x065D,
 0x063D, 0x1F7F, 0x3B2C, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F,
 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x4B2B, 0x67FF, 0x065E, 0x061D, 0x065D, 0x063D, 0x175F, 0x44F3, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F,
 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x4AEB, 0x67FF, 0x067E,
 0x061D, 0x065D, 0x065E, 0x17DF, 0x4534, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F,
 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x42AA, 0x67FF, 0x069F, 0x061D, 0x067D, 0x063D, 0x1FFF, 0x4D75, 0x0F0F, 0x0F0F,
 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x4289,
 0x67FF, 0x069F, 0x063D, 0x0E7D, 0x063D, 0x27FF, 0x4D95, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F,
 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x3A48, 0x6FFF, 0x06BF, 0x063D, 0x0E7D, 0x063D, 0x47FF, 0x2A28,
 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F,
 0x0F0F, 0x3207, 0x6FFF, 0x06DF, 0x061D, 0x06DF, 0x4FFF, 0x10C2, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F,
 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x2186, 0x6FFF, 0x27FF, 0x3FFF, 0x2228, 0x0F0F,
 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F,
 0x0F0F, 0x0F0F, 0x0F0F, 0x2144, 0x7EDA, 0x2A08, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F
};

const unsigned short Arrow_Down[] = {
 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F,
 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F,
 0x0F0F, 0x0F0F, 0x2967, 0x9419, 0x9BFA, 0x4A4C, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F,
 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x4A4B, 0xB3FF, 0x815F, 0x78FF, 0xB37F, 0x7353, 0x0F0F,
 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F,
 0x528C, 0xAB5F, 0x581E, 0x581C, 0x601C, 0x501C, 0x9A7F, 0x7B93, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F,
 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x4A4B, 0xA33F, 0x601D, 0x601C, 0x601C, 0x601C, 0x601C, 0x581D, 0x923F,
 0x7352, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x422A, 0xA31F,
 0x581E, 0x601C, 0x601D, 0x601D, 0x601D, 0x601D, 0x601C, 0x581D, 0x9A7F, 0x6B32, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F,
 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x39EA, 0xA33F, 0x581E, 0x601C, 0x601D, 0x601D, 0x601D, 0x601D, 0x601D, 0x601D, 0x601D,
 0x501D, 0x9A5F, 0x6311, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x39E9, 0xA33F, 0x581E, 0x581D,
 0x601D, 0x601D, 0x601D, 0x601D, 0x601D, 0x601D, 0x601D, 0x601D, 0x601D, 0x581D, 0x925F, 0x62F0, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F,
 0x0F0F, 0x0F0F, 0x0F0F, 0x31A8, 0x9B3F, 0x601F, 0x581D, 0x601D, 0x601D, 0x601D, 0x601D, 0x601D, 0x601D, 0x601D, 0x601D, 0x601D,
 0x601D, 0x601D, 0x581E, 0x923F, 0x5ACF, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x3187, 0xA35F, 0x601F, 0x601D, 0x601D, 0x581D,
 0x78DF, 0x799F, 0x581D, 0x601D, 0x601D, 0x581D, 0x715E, 0x795F, 0x601E, 0x601D, 0x601D, 0x601E, 0x9A9F, 0x5AAF, 0x0F0F, 0x0F0F,
 0x0F0F, 0x2126, 0xA35F, 0x601F, 0x601D, 0x603D, 0x601E, 0x78BF, 0x39CC, 0x414E, 0x681F, 0x601D, 0x603D, 0x681F, 0x40F0, 0x3188,
 0x811F, 0x601E, 0x603D, 0x601D, 0x581E, 0x9A9F, 0x4A4D, 0x0F0F, 0x18E4, 0x9B5F, 0x681F, 0x601D, 0x605D, 0x601D, 0x80BF, 0x6234,
 0x0F0F, 0x2028, 0x785F, 0x603D, 0x603D, 0x783F, 0x386F, 0x0F0F, 0x41CC, 0x813F, 0x601E, 0x605D, 0x603D, 0x581E, 0x9ADF, 0x4A2C,
 0x8BDB, 0x893F, 0x601D, 0x687D, 0x601D, 0x80FF, 0x6234, 0x0F0F, 0x0F0F, 0x38CE, 0x787F, 0x605D, 0x605D, 0x705F, 0x48F3, 0x0F0F,
 0x0F0F, 0x41CD, 0x897F, 0x601E, 0x687D, 0x603D, 0x681F, 0x935F, 0x2948, 0x89DF, 0x681F, 0x601D, 0x891F, 0x6A55, 0x0F0F, 0x0F0F,
 0x0F0F, 0x30AD, 0x789F, 0x687D, 0x687D, 0x787F, 0x48F2, 0x0F0F, 0x0F0F, 0x0F0F, 0x41CD, 0x899F, 0x601E, 0x601E, 0x897F, 0x520F,
 0x0F0F, 0x2909, 0x927F, 0x9A3F, 0x6A55, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x30CD, 0x78DF, 0x689D, 0x68BD, 0x78BF, 0x48F2, 0x0F0F,
 0x0F0F, 0x0F0F, 0x0F0F, 0x49EF, 0x925F, 0x923F, 0x49B0, 0x0F0F, 0x0F0F, 0x0F0F, 0x0882, 0x2947, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F,
 0x0F0F, 0x38CD, 0x80FF, 0x68BD, 0x68DD, 0x78DF, 0x4912, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x2106, 0x18E5, 0x0F0F, 0x0F0F,
 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x38ED, 0x811F, 0x70FD, 0x70FD, 0x80FF, 0x5112, 0x0F0F,
 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F,
 0x0F0F, 0x38ED, 0x813F, 0x711D, 0x711D, 0x813F, 0x5132, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F,
 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x38ED, 0x897F, 0x713E, 0x713E, 0x895F, 0x5132, 0x0F0F,
 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F,
 0x0F0F, 0x38ED, 0x897F, 0x795E, 0x795E, 0x897F, 0x5133, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F,
 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x392E, 0x899F, 0x791E, 0x793E, 0x895F, 0x5193, 0x0F0F,
 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F,
 0x0F0F, 0x41CE, 0xB3FF, 0x931F, 0x931F, 0xB3BF, 0x6274, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F,
 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x41EE, 0x41CD, 0x39AC, 0x4A0F, 0x0842, 0x0F0F,
 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F,
 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F
};

const unsigned short Arrow_Up[] = {
 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F,
 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F,
 0x0F0F, 0x10A1, 0x94EA, 0x8489, 0x8469, 0x9D2B, 0x2122, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F,
 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x7407, 0xFFEE, 0xCFEA, 0xCFEA, 0xF7ED, 0x9569, 0x0F0F,
 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F,
 0x0F0F, 0x5384, 0xBFE5, 0x9FA4, 0x9FA4, 0xB7E4, 0x74C5, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F,
 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x5383, 0xBFE5, 0xA785, 0xA785, 0xBFE5, 0x6CA5, 0x0F0F,
 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F,
 0x0F0F, 0x5363, 0xBFE5, 0x9F84, 0x9F84, 0xB7E5, 0x6CA4, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F,
 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x4B43, 0xB7E4, 0x9F63, 0x9F64, 0xB7E4, 0x6CA4, 0x0F0F,
 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F,
 0x0F0F, 0x4B43, 0xAFE4, 0x9763, 0x9763, 0xAFE3, 0x6CA4, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F,
 0x0F0F, 0x0F0F, 0x4A66, 0x8449, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x4B43, 0xAFE3, 0x9762, 0x9762, 0xAFE3, 0x64A4, 0x0F0F,
 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x73C8, 0x6B88, 0x0F0F, 0x0F0F, 0x0F0F, 0x6C26, 0xCFE8, 0xCFE6, 0xBF0A, 0x0020, 0x0F0F, 0x0F0F,
 0x0F0F, 0x4B43, 0xAFE2, 0x9762, 0x9762, 0xAFE2, 0x6483, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x9DA9, 0xCFE6, 0xCFE7, 0x9DC8, 0x0F0F,
 0x6348, 0xC7E6, 0x8780, 0x8740, 0xAFE2, 0xAEA9, 0x0020, 0x0F0F, 0x0F0F, 0x4B42, 0xAFE2, 0x9741, 0x9741, 0xA7E1, 0x6483, 0x0F0F,
 0x0F0F, 0x0F0F, 0x8D49, 0xBFE3, 0x8760, 0x8760, 0xBFE3, 0xA60B, 0xC68F, 0xBFE5, 0x7F40, 0x9741, 0x8740, 0xAFE1, 0xAEA9, 0x0F0F,
 0x0F0F, 0x4B82, 0xA7E1, 0x8F41, 0x8F61, 0xA7E1, 0x6CC3, 0x0F0F, 0x0F0F, 0x8D08, 0xBFE3, 0x8740, 0x9761, 0x8740, 0x9FE1, 0xCF8E,
 0x1061, 0xD7AE, 0xA7E2, 0x7F40, 0x8F61, 0x8740, 0xA7E1, 0x9E48, 0x0F0F, 0x21C0, 0xAFE1, 0x8F60, 0x8F60, 0xA7E0, 0x4341, 0x0F0F,
 0x84E8, 0xAFE2, 0x8760, 0x8F61, 0x8740, 0x8FE0, 0xDFED, 0x3185, 0x0F0F, 0x1061, 0xDFAF, 0xA7E1, 0x7F60, 0x8F60, 0x8760, 0xA7E1,
 0x95A9, 0x8566, 0x8FA0, 0x8F60, 0x8F60, 0x8FA0, 0x85A5, 0x8CEA, 0xA7E2, 0x8780, 0x8F60, 0x7F40, 0x8FE0, 0xDFED, 0x3185, 0x0F0F,
 0x0F0F, 0x0F0F, 0x18A2, 0xDFCE, 0x97E1, 0x7F60, 0x8F60, 0x7F40, 0x9FE1, 0xAFE4, 0x8740, 0x8760, 0x8760, 0x7F40, 0xA7E4, 0xAFE3,
 0x7F60, 0x8F60, 0x7F40, 0x8FC0, 0xE7ED, 0x39E6, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x18C3, 0xEFEF, 0x97E0, 0x7F40, 0x8F40,
 0x8740, 0x7F60, 0x8740, 0x8740, 0x8740, 0x8740, 0x8740, 0x8760, 0x8F60, 0x7F40, 0x87A0, 0xE7EC, 0x4227, 0x0F0F, 0x0F0F, 0x0F0F,
 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x20E3, 0xDFEE, 0x97E0, 0x7720, 0x8F40, 0x8740, 0x8740, 0x8740, 0x8740, 0x8740, 0x8740, 0x8740,
 0x7F40, 0x87A0, 0xDFEC, 0x4A47, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x2103, 0xE7EE, 0x97E0,
 0x7720, 0x8740, 0x8740, 0x8740, 0x8740, 0x8740, 0x8740, 0x7F20, 0x7F80, 0xE7EC, 0x5288, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F,
 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x2124, 0xE7EE, 0x8FA0, 0x7720, 0x8720, 0x8740, 0x8720, 0x8740, 0x7720, 0x7F80,
 0xE7EC, 0x5AC8, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x2944,
 0xEFEF, 0x87C0, 0x6F00, 0x8720, 0x8720, 0x7700, 0x7760, 0xE7EC, 0x630A, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F,
 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x3165, 0xE7EF, 0x97E1, 0x6700, 0x6F20, 0x7F80, 0xE7ED, 0x6309,
 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F,
 0x0F0F, 0x2944, 0xEFF0, 0xCFEA, 0xC7E9, 0xEFF0, 0x5AC8, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F,
 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x1081, 0x94AD, 0x9CED, 0x2964, 0x0F0F, 0x0F0F,
 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F,
 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F
};

const unsigned short Arrow_Right[] = {
 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x7A0C, 0xE398, 0x5A4B, 0x0F0F, 0x0F0F, 0x0F0F,
 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F,
 0x0F0F, 0x798B, 0xF975, 0xF82F, 0xFAD9, 0x6A4C, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F,
 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x20C4, 0xFA37, 0xF00D, 0xE82E, 0xF00C, 0xFAB8, 0x7AAE, 0x0F0F,
 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F,
 0x3105, 0xFA37, 0xF00D, 0xE86F, 0xE82E, 0xF00C, 0xFA98, 0x7ACE, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F,
 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x79CC, 0xF995, 0xF00D, 0xE84F, 0xE80E, 0xF00C, 0xFA37,
 0x830F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F,
 0x0F0F, 0x0F0F, 0x71CC, 0xF955, 0xF00D, 0xE82E, 0xE80D, 0xF00C, 0xFA78, 0x8B10, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F,
 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x69CB, 0xF933, 0xF00D, 0xE80E, 0xE80D,
 0xE80B, 0xFA77, 0x9331, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F,
 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x69CB, 0xF913, 0xF00C, 0xE80E, 0xE80D, 0xE80A, 0xFA57, 0x9372, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F,
 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x4988, 0xF974, 0xE80D,
 0xE80E, 0xE80D, 0xE80B, 0xFA36, 0x9B92, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x1042, 0x9A70, 0x998D, 0x912C, 0x912C, 0x912B, 0x910B,
 0x910B, 0x90EB, 0x90EB, 0x90CA, 0x8889, 0x80EA, 0xF152, 0xE80D, 0xE80D, 0xE80D, 0xE00C, 0xE80B, 0xFA98, 0x9B31, 0x0F0F, 0x0F0F,
 0x0F0F, 0x7A0D, 0xFBDD, 0xF953, 0xF974, 0xF953, 0xF933, 0xF912, 0xF8D2, 0xF8B2, 0xF871, 0xF851, 0xF830, 0xF80F, 0xE80C, 0xE80E,
 0xE80D, 0xE80D, 0xE80D, 0xE00C, 0xE809, 0xFB7A, 0x5A0A, 0x0F0F, 0x0F0F, 0x61AB, 0xFB18, 0xF111, 0xF151, 0xF131, 0xE910, 0xE8F0,
 0xE8D0, 0xE88F, 0xE86F, 0xE84F, 0xE82E, 0xE82E, 0xE80E, 0xE80E, 0xE80D, 0xE80D, 0xE00D, 0xE00D, 0xE00B, 0xF890, 0xE438, 0x0F0F,
 0x0F0F, 0x61CB, 0xFB18, 0xF111, 0xF151, 0xF131, 0xE910, 0xE8F0, 0xE8D0, 0xE88F, 0xE86F, 0xE84F, 0xE82E, 0xE80E, 0xE80E, 0xE80E,
 0xE80D, 0xE80D, 0xE80D, 0xE00D, 0xE00A, 0xF8F2, 0xDC37, 0x0F0F, 0x0F0F, 0x71EC, 0xFBFE, 0xF994, 0xF974, 0xF974, 0xF933, 0xF913,
 0xF8F2, 0xF8D2, 0xF892, 0xF871, 0xF851, 0xF80F, 0xE80D, 0xE80E, 0xE80D, 0xE80D, 0xE80D, 0xE00B, 0xE80B, 0xFBFB, 0x3146, 0x0F0F,
 0x0F0F, 0x0F0F, 0x69CC, 0x712A, 0x70E9, 0x68E9, 0x68E8, 0x68C8, 0x68C8, 0x68C8, 0x68A8, 0x68A8, 0x5866, 0x712A, 0xF173, 0xE80D,
 0xE80D, 0xE80D, 0xE00C, 0xE80C, 0xFB5A, 0x624B, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F,
 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x61CB, 0xF912, 0xE80D, 0xE80E, 0xE00C, 0xF00C, 0xFB19, 0x628C, 0x0F0F, 0x0F0F, 0x0F0F,
 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x9A2F, 0xF891, 0xE80C, 0xE80E,
 0xE00C, 0xF00C, 0xFB19, 0x5A4B, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F,
 0x0F0F, 0x0F0F, 0x0F0F, 0xA230, 0xF8B2, 0xF00D, 0xE80E, 0xE80C, 0xF00C, 0xFB19, 0x522A, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F,
 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0xA250, 0xF8F3, 0xE80D, 0xE82E, 0xE80C, 0xF80D,
 0xFB19, 0x51E9, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F,
 0x0F0F, 0xAA30, 0xF914, 0xE80D, 0xE84F, 0xE80D, 0xF80D, 0xFB19, 0x49E9, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F,
 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x3947, 0xFA37, 0xE80C, 0xE88F, 0xE80D, 0xF80E, 0xFB39, 0x41A8,
 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F,
 0x1082, 0xFA56, 0xF80E, 0xE80C, 0xF80E, 0xFB59, 0x3987, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F,
 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x40E6, 0xF9D6, 0xF934, 0xFB5A, 0x3146, 0x0F0F, 0x0F0F,
 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F,
 0x0F0F, 0x0F0F, 0x4147, 0xCBF7, 0x20E4, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F, 0x0F0F
};
  

#endif /* __images_h */
