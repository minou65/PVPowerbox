// favicon.h

#ifndef _FAVICON_h
#define _FAVICON_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

#define favicon_width 16
#define favicon_height 16
const static char favicon[] PROGMEM = { // solarhaus.png
0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x10, 0x10, 0x00, 0x00, 0x01, 0x00, 0x20, 0x00, 0x68, 0x04,
0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x20, 0x00,
0x00, 0x00, 0x01, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0xEC, 0x00,
0x00, 0x00, 0xEC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2A, 0x2D,
0x30, 0x9A, 0x59, 0x60, 0x67, 0xCC, 0x32, 0x37, 0x3E, 0xCB, 0x1A, 0x24, 0x3C, 0xCB, 0x1A, 0x21,
0x2F, 0xCB, 0x53, 0x59, 0x60, 0xCB, 0x45, 0x4B, 0x51, 0xCB, 0x47, 0x4D, 0x53, 0xCB, 0x62, 0x6A,
0x72, 0xCB, 0x62, 0x69, 0x72, 0xCB, 0x62, 0x6A, 0x72, 0xCB, 0x62, 0x69, 0x72, 0xCB, 0x62, 0x6A,
0x72, 0xCC, 0x47, 0x4C, 0x52, 0xC0, 0x0F, 0x10, 0x12, 0x39, 0x1C, 0x1E, 0x21, 0x00, 0x55, 0x5C,
0x63, 0xC8, 0xBB, 0xCA, 0xDA, 0xFF, 0x6A, 0x74, 0x82, 0xFF, 0x37, 0x4D, 0x7E, 0xFF, 0x37, 0x45,
0x62, 0xFF, 0xAE, 0xBC, 0xCA, 0xFF, 0x92, 0x9E, 0xAA, 0xFF, 0x97, 0xA3, 0xB0, 0xFF, 0xCC, 0xDC,
0xED, 0xFF, 0xC2, 0xD1, 0xE1, 0xFF, 0xC1, 0xD0, 0xE0, 0xFF, 0xC2, 0xD1, 0xE1, 0xFF, 0xCC, 0xDC,
0xED, 0xFF, 0x95, 0xA1, 0xAD, 0xF4, 0x1E, 0x20, 0x23, 0x4E, 0x39, 0x3D, 0x42, 0x00, 0x5A, 0x62,
0x69, 0xC7, 0xC6, 0xD6, 0xE6, 0xFF, 0x70, 0x7B, 0x8A, 0xFF, 0x3B, 0x52, 0x86, 0xFF, 0x3A, 0x49,
0x69, 0xFF, 0xB9, 0xC8, 0xD6, 0xFF, 0x9B, 0xA8, 0xB5, 0xFF, 0xA2, 0xAE, 0xBC, 0xFF, 0xB0, 0xBE,
0xCE, 0xFF, 0x56, 0x61, 0x73, 0xFF, 0x4E, 0x58, 0x69, 0xFF, 0x56, 0x61, 0x73, 0xFF, 0xB0, 0xBE,
0xCE, 0xFF, 0xA0, 0xAC, 0xB9, 0xF4, 0x20, 0x22, 0x25, 0x4D, 0x3C, 0x41, 0x46, 0x00, 0x5A, 0x61,
0x69, 0xC7, 0xC6, 0xD6, 0xE6, 0xFF, 0x73, 0x7E, 0x8B, 0xFF, 0x31, 0x42, 0x66, 0xFF, 0x38, 0x44,
0x5A, 0xFF, 0xBA, 0xC9, 0xD8, 0xFF, 0x9A, 0xA7, 0xB4, 0xFF, 0xA3, 0xAF, 0xBD, 0xFF, 0x9E, 0xAB,
0xBA, 0xFF, 0x2F, 0x3B, 0x54, 0xFF, 0x27, 0x32, 0x4A, 0xFF, 0x2F, 0x3B, 0x54, 0xFF, 0x9E, 0xAB,
0xBA, 0xFF, 0xA1, 0xAD, 0xBA, 0xF4, 0x20, 0x22, 0x25, 0x4D, 0x3C, 0x41, 0x46, 0x00, 0x59, 0x60,
0x67, 0xC8, 0xC4, 0xD4, 0xE4, 0xFF, 0xB2, 0xC1, 0xCF, 0xFF, 0x8C, 0x98, 0xA5, 0xFF, 0x9B, 0xA8,
0xB6, 0xFF, 0xCA, 0xDB, 0xEC, 0xFF, 0x99, 0xA6, 0xB3, 0xFF, 0x96, 0xA3, 0xB1, 0xFF, 0xBC, 0xCC,
0xDD, 0xFF, 0x92, 0x9F, 0xAD, 0xFF, 0x8D, 0x9A, 0xA9, 0xFF, 0x92, 0x9F, 0xAD, 0xFF, 0xBB, 0xCB,
0xDD, 0xFF, 0x95, 0xA1, 0xAE, 0xF4, 0x1E, 0x20, 0x22, 0x4E, 0x39, 0x3D, 0x41, 0x00, 0x3B, 0x40,
0x45, 0x9D, 0xAC, 0xBA, 0xC8, 0xFD, 0xCC, 0xDD, 0xEE, 0xFF, 0x7E, 0x88, 0x93, 0xFF, 0xAB, 0xB9,
0xC7, 0xFF, 0xD1, 0xE2, 0xF4, 0xFF, 0x85, 0x8B, 0x8F, 0xFF, 0x74, 0x60, 0x46, 0xFF, 0x7B, 0x6B,
0x57, 0xFF, 0x70, 0x65, 0x56, 0xFF, 0x85, 0x73, 0x5B, 0xFF, 0x6A, 0x61, 0x55, 0xFF, 0x87, 0x73,
0x5A, 0xFF, 0x4E, 0x47, 0x3E, 0xEB, 0x08, 0x0A, 0x0D, 0x3D, 0x15, 0x17, 0x18, 0x00, 0x00, 0x00,
0x00, 0x2A, 0x63, 0x6B, 0x73, 0xCA, 0xBA, 0xC9, 0xD8, 0xFF, 0x54, 0x5B, 0x62, 0xFF, 0x95, 0xA1,
0xAD, 0xFF, 0xA9, 0xB7, 0xC5, 0xFF, 0x5E, 0x4B, 0x33, 0xFF, 0x96, 0x60, 0x1E, 0xFF, 0x64, 0x40,
0x13, 0xFF, 0x78, 0x4D, 0x18, 0xFF, 0x78, 0x4D, 0x18, 0xFF, 0x64, 0x40, 0x13, 0xFF, 0x88, 0x57,
0x1B, 0xFD, 0x35, 0x21, 0x09, 0x91, 0x00, 0x00, 0x00, 0x09, 0x03, 0x00, 0x00, 0x00, 0x9A, 0xA6,
0xB3, 0x00, 0x1D, 0x1F, 0x21, 0x54, 0x86, 0x91, 0x9D, 0xEE, 0xAE, 0xBD, 0xCB, 0xFF, 0xAA, 0xB9,
0xC8, 0xFF, 0x6F, 0x65, 0x57, 0xFF, 0x95, 0x60, 0x1F, 0xFF, 0x6D, 0x47, 0x18, 0xFF, 0x72, 0x4A,
0x19, 0xFF, 0x81, 0x54, 0x1C, 0xFF, 0x5F, 0x3E, 0x15, 0xFF, 0x90, 0x5E, 0x20, 0xFF, 0x3A, 0x25,
0x0D, 0xBF, 0x00, 0x00, 0x00, 0x1E, 0x0C, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x3A, 0x3F, 0x44, 0x8F, 0xA5, 0xB3, 0xC1, 0xFD, 0x82, 0x83,
0x83, 0xFF, 0x6F, 0x4A, 0x1C, 0xFF, 0x77, 0x4D, 0x1A, 0xFF, 0x5D, 0x3C, 0x14, 0xFF, 0x7A, 0x50,
0x1B, 0xFF, 0x5B, 0x3B, 0x14, 0xFF, 0x77, 0x4D, 0x1A, 0xFF, 0x56, 0x38, 0x12, 0xE2, 0x1A, 0x10,
0x04, 0x44, 0x54, 0x35, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x12, 0x14, 0x15, 0x00, 0x07, 0x08, 0x08, 0x20, 0x38, 0x3C, 0x41, 0xBF, 0x5A, 0x42,
0x25, 0xF4, 0x95, 0x61, 0x20, 0xF2, 0x57, 0x39, 0x13, 0xF2, 0x80, 0x53, 0x1C, 0xF2, 0x69, 0x44,
0x17, 0xF3, 0x6B, 0x46, 0x17, 0xF1, 0x7C, 0x51, 0x1C, 0xF5, 0x15, 0x15, 0x15, 0xBA, 0x00, 0x14,
0x2F, 0x86, 0x01, 0x11, 0x25, 0x5B, 0x00, 0x08, 0x11, 0x20, 0x01, 0x0B, 0x19, 0x00, 0x00, 0x00,
0x00, 0x02, 0x00, 0x00, 0x00, 0x0D, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0x34, 0x16, 0x0E,
0x04, 0x4C, 0x21, 0x16, 0x07, 0x4A, 0x11, 0x0B, 0x04, 0x4A, 0x22, 0x16, 0x08, 0x4A, 0x15, 0x0D,
0x04, 0x49, 0x17, 0x11, 0x09, 0x69, 0x09, 0x1B, 0x33, 0xD2, 0x05, 0x3E, 0x87, 0xF7, 0x07, 0x43,
0x8E, 0xFB, 0x05, 0x3E, 0x88, 0xF6, 0x03, 0x1E, 0x42, 0xA2, 0x00, 0x07, 0x0E, 0x22, 0x28, 0x22,
0x1A, 0x64, 0x62, 0x54, 0x40, 0xB3, 0x7E, 0x6C, 0x53, 0xD6, 0x63, 0x55, 0x41, 0xB2, 0x2B, 0x26,
0x1D, 0x50, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x02, 0x21,
0x49, 0x00, 0x01, 0x11, 0x26, 0x58, 0x05, 0x3E, 0x89, 0xF4, 0x13, 0x5E, 0x93, 0xFF, 0x25, 0x8B,
0xB1, 0xFF, 0x13, 0x5C, 0x90, 0xFF, 0x05, 0x3E, 0x88, 0xF4, 0x01, 0x11, 0x25, 0x66, 0x3A, 0x32,
0x26, 0xA5, 0xAE, 0x95, 0x73, 0xFD, 0xF0, 0xCE, 0x9F, 0xFF, 0xAC, 0x94, 0x72, 0xFF, 0x3B, 0x33,
0x27, 0xD2, 0x48, 0x3E, 0x2F, 0x99, 0x4D, 0x42, 0x32, 0x96, 0x2D, 0x27, 0x1E, 0x66, 0x0C, 0x01,
0x00, 0x12, 0x02, 0x16, 0x31, 0x84, 0x07, 0x43, 0x8E, 0xFE, 0x25, 0x8C, 0xB1, 0xFF, 0x3D, 0xDC,
0xFF, 0xFF, 0x25, 0x8C, 0xB1, 0xFF, 0x07, 0x44, 0x90, 0xFC, 0x02, 0x16, 0x30, 0x95, 0x01, 0x01,
0x01, 0x21, 0x48, 0x3E, 0x30, 0x8D, 0x7C, 0x6A, 0x52, 0xD9, 0x39, 0x31, 0x26, 0xBA, 0x77, 0x66,
0x4F, 0xEF, 0xD9, 0xBB, 0x90, 0xFF, 0xD9, 0xBA, 0x8F, 0xFF, 0x7C, 0x6A, 0x52, 0xE6, 0x0D, 0x09,
0x05, 0x35, 0x00, 0x11, 0x26, 0x59, 0x05, 0x3E, 0x88, 0xF6, 0x13, 0x5D, 0x92, 0xFF, 0x25, 0x8D,
0xB2, 0xFF, 0x14, 0x5F, 0x95, 0xFF, 0x05, 0x3F, 0x89, 0xF4, 0x01, 0x11, 0x25, 0x66, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x18, 0x04, 0x04, 0x03, 0x16, 0x36, 0x2F,
0x24, 0x79, 0x8D, 0x79, 0x5D, 0xE1, 0x8D, 0x7A, 0x5D, 0xE0, 0x36, 0x2E, 0x24, 0x7A, 0x07, 0x04,
0x01, 0x0D, 0x00, 0x06, 0x0E, 0x1D, 0x03, 0x1E, 0x43, 0xA2, 0x05, 0x3E, 0x88, 0xF4, 0x07, 0x44,
0x8F, 0xFB, 0x05, 0x3F, 0x89, 0xF4, 0x03, 0x1E, 0x43, 0xA1, 0x00, 0x07, 0x0F, 0x21, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x05, 0x13, 0x10, 0x0C, 0x39, 0x13, 0x10, 0x0C, 0x38, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00,
0x00, 0x00, 0x01, 0x0B, 0x19, 0x00, 0x00, 0x08, 0x11, 0x24, 0x01, 0x11, 0x25, 0x67, 0x02, 0x16,
0x30, 0x95, 0x01, 0x11, 0x25, 0x66, 0x00, 0x08, 0x11, 0x24, 0x01, 0x0B, 0x19, 0x00, 0x00, 0x01,
0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01,
0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x80, 0x03, 0x00, 0x00, 0x80, 0x07,
0x00, 0x00, 0xC0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0xF0, 0xC1, 0x00, 0x00,
};


#endif

