/*
 * Font.h
 *
 *  Created on: 17 Sep 2016
 *      Author: Ralim
 *
 *      ... This file contains the font...
 */

#ifndef FONT_H_
#define FONT_H_

#define FONT_WIDTH 12 /*How many pixels wide the font is*/
const uint8_t FONT[]={
		0x00,0xF0,0xFC,0x0E,0x82,0xC2,0x62,0x1E,0xFC,0xF0,0x00,0x00,
		0x00,0x03,0x0F,0x1F,0x11,0x10,0x10,0x1C,0x0F,0x03,0x00,0x00,/*0*/
		0x00,0x08,0x04,0x02,0xFE,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x10,0x10,0x10,0x1F,0x1F,0x10,0x10,0x10,0x00,0x00,0x00,/*1*/
		0x00,0x04,0x02,0x02,0x02,0xC6,0xFC,0x78,0x00,0x00,0x00,0x00,
		0x00,0x18,0x1C,0x16,0x13,0x11,0x10,0x10,0x10,0x00,0x00,0x00,/*2*/
		0x00,0x02,0x02,0x42,0x42,0x66,0xFE,0x9C,0x00,0x00,0x00,0x00,
		0x00,0x10,0x10,0x10,0x10,0x10,0x08,0x0F,0x07,0x00,0x00,0x00,/*3*/
		0x00,0x00,0x80,0xE0,0x30,0x1C,0x06,0xFE,0xFE,0x00,0x00,0x00,
		0x00,0x03,0x03,0x02,0x02,0x02,0x02,0x1F,0x1F,0x02,0x02,0x00,/*4*/
		0x00,0x7E,0x7E,0x42,0x42,0x42,0xC2,0x82,0x00,0x00,0x00,0x00,
		0x00,0x10,0x10,0x10,0x10,0x10,0x08,0x0F,0x07,0x00,0x00,0x00,/*5*/
		0x00,0xE0,0xF8,0x8C,0x44,0x42,0x42,0xC2,0x82,0x80,0x00,0x00,
		0x00,0x07,0x0F,0x18,0x10,0x10,0x10,0x18,0x0F,0x07,0x00,0x00,/*6*/
		0x00,0x02,0x02,0x02,0x02,0xC2,0xF2,0x1E,0x06,0x00,0x00,0x00,
		0x00,0x00,0x10,0x1C,0x0F,0x03,0x00,0x00,0x00,0x00,0x00,0x00,/*7*/
		0x00,0x38,0x7C,0x66,0xC2,0x82,0xC2,0x66,0x7C,0x3C,0x00,0x00,
		0x00,0x0E,0x0F,0x19,0x10,0x10,0x10,0x19,0x0F,0x0E,0x00,0x00,/*8*/
		0x00,0x78,0x7C,0xC6,0x82,0x82,0x82,0x46,0xFC,0xF8,0x00,0x00,
		0x00,0x00,0x10,0x10,0x10,0x10,0x08,0x0C,0x07,0x03,0x00,0x00,/*9*/

		0x00,0x00,0x80,0xF0,0x1E,0x02,0x1E,0xF0,0x80,0x00,0x00,0x00,
		0x00,0x1C,0x0F,0x03,0x02,0x02,0x02,0x03,0x0F,0x1C,0x00,0x00,/*A*/
		0x00,0xFE,0xFE,0x42,0x42,0x42,0xE6,0xBE,0x9C,0x00,0x00,0x00,
		0x00,0x1F,0x1F,0x10,0x10,0x10,0x18,0x0F,0x07,0x00,0x00,0x00,/*B*/
		0x00,0xF0,0xF8,0x0C,0x06,0x02,0x02,0x02,0x04,0x00,0x00,0x00,
		0x00,0x03,0x0F,0x0C,0x18,0x10,0x10,0x10,0x08,0x00,0x00,0x00,/*C*/
		0x00,0xFE,0xFE,0x02,0x02,0x02,0x06,0x0C,0xFC,0xF0,0x00,0x00,
		0x00,0x1F,0x1F,0x10,0x10,0x10,0x18,0x0C,0x07,0x03,0x00,0x00,/*D*/
		0x00,0xFE,0xFE,0x42,0x42,0x42,0x42,0x42,0x00,0x00,0x00,0x00,
		0x00,0x1F,0x1F,0x10,0x10,0x10,0x10,0x10,0x00,0x00,0x00,0x00,/*E*/
		0x00,0xFE,0xFE,0x82,0x82,0x82,0x82,0x82,0x00,0x00,0x00,0x00,
		0x00,0x1F,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*F*/
		0x00,0xF0,0xF8,0x0C,0x06,0x02,0x82,0x82,0x82,0x84,0x00,0x00,
		0x00,0x03,0x0F,0x0C,0x18,0x10,0x10,0x10,0x1F,0x1F,0x00,0x00,/*G*/
		0x00,0xFE,0xFE,0x40,0x40,0x40,0x40,0xFE,0xFE,0x00,0x00,0x00,
		0x00,0x1F,0x1F,0x00,0x00,0x00,0x00,0x1F,0x1F,0x00,0x00,0x00,/*H*/
		0x00,0x02,0x02,0x02,0xFE,0xFE,0x02,0x02,0x02,0x00,0x00,0x00,
		0x00,0x10,0x10,0x10,0x1F,0x1F,0x10,0x10,0x10,0x00,0x00,0x00,/*I*/
		0x00,0x02,0x02,0x02,0x02,0x02,0xFE,0xFE,0x00,0x00,0x00,0x00,
		0x00,0x08,0x10,0x10,0x10,0x18,0x0F,0x07,0x00,0x00,0x00,0x00,/*J*/
		0x00,0xFE,0xFE,0xC0,0xE0,0x30,0x18,0x0C,0x06,0x02,0x00,0x00,
		0x00,0x1F,0x1F,0x00,0x01,0x03,0x06,0x0C,0x18,0x10,0x00,0x00,/*K*/
		0x00,0xFE,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x1F,0x1F,0x10,0x10,0x10,0x10,0x10,0x00,0x00,0x00,0x00,/*L*/
		0x00,0x00,0xFE,0x06,0x3C,0xC0,0xC0,0x3C,0x06,0xFE,0x00,0x00,
		0x00,0x10,0x1F,0x00,0x00,0x01,0x01,0x00,0x00,0x1F,0x18,0x00,/*M*/
		0x00,0xFE,0xFE,0x1E,0x70,0x80,0x00,0xFE,0xFE,0x00,0x00,0x00,
		0x00,0x1F,0x1F,0x00,0x00,0x03,0x1C,0x1F,0x1F,0x00,0x00,0x00,/*N*/
		0x00,0xF0,0xFC,0x0C,0x02,0x02,0x02,0x0E,0xFC,0xF0,0x00,0x00,
		0x00,0x03,0x0F,0x1C,0x10,0x10,0x10,0x0C,0x0F,0x03,0x00,0x00,/*O*/
		0x00,0xFE,0xFE,0x02,0x02,0x02,0x86,0xFC,0x78,0x00,0x00,0x00,
		0x00,0x1F,0x1F,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,/*P*/
		0x00,0xF0,0xF8,0x0C,0x02,0x02,0x02,0x02,0x0C,0xFC,0xF0,0x00,
		0x00,0x03,0x0F,0x1C,0x10,0x30,0x70,0xD8,0x8C,0x8F,0x83,0x40,/*Q*/
		0x00,0xFE,0xFE,0x42,0x42,0xC2,0xE6,0x3C,0x1C,0x00,0x00,0x00,
		0x00,0x1F,0x1F,0x00,0x00,0x00,0x01,0x0F,0x1C,0x10,0x00,0x00,/*R*/
		0x00,0x38,0x7C,0x66,0xC2,0xC2,0x82,0x84,0x00,0x00,0x00,0x00,
		0x00,0x08,0x10,0x10,0x10,0x10,0x19,0x0F,0x07,0x00,0x00,0x00,/*S*/
		0x00,0x02,0x02,0x02,0x02,0xFE,0xFE,0x02,0x02,0x02,0x02,0x00,
		0x00,0x00,0x00,0x00,0x00,0x1F,0x1F,0x00,0x00,0x00,0x00,0x00,/*T*/
		0x00,0xFE,0xFE,0x00,0x00,0x00,0x00,0x00,0xFE,0xFE,0x00,0x00,
		0x00,0x07,0x0F,0x18,0x10,0x10,0x10,0x18,0x0F,0x07,0x00,0x00,/*U*/
		0x00,0x0E,0x7E,0xE0,0x00,0x00,0x00,0xE0,0x7C,0x0E,0x00,0x00,
		0x00,0x00,0x00,0x03,0x1F,0x18,0x1F,0x03,0x00,0x00,0x00,0x00,/*V*/
		0x00,0x7E,0xFE,0x00,0x00,0xE0,0xE0,0x00,0x00,0xFE,0x7E,0x00,
		0x00,0x00,0x1F,0x18,0x0F,0x01,0x01,0x0F,0x18,0x1F,0x00,0x00,/*W*/
		0x00,0x02,0x06,0x1C,0x38,0xE0,0xE0,0x38,0x1C,0x06,0x02,0x00,
		0x00,0x10,0x18,0x0E,0x07,0x01,0x01,0x07,0x0E,0x18,0x10,0x00,/*X*/
		0x00,0x02,0x0E,0x3C,0xF0,0xC0,0xC0,0xF0,0x3C,0x0E,0x02,0x00,
		0x00,0x00,0x00,0x00,0x00,0x1F,0x1F,0x00,0x00,0x00,0x00,0x00,/*Y*/
		0x00,0x02,0x02,0x02,0xC2,0xE2,0x3A,0x0E,0x02,0x00,0x00,0x00,
		0x00,0x10,0x1C,0x17,0x11,0x10,0x10,0x10,0x10,0x00,0x00,0x00,/*Z*/
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/* */

		0x00,0x60,0xF0,0x98,0x0C,0x06,0x02,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x01,0x03,0x06,0x04,0x00,0x00,0x00,0x00,0x00,/*<*/
		0x00,0x02,0x06,0x0C,0x98,0xF0,0x60,0x00,0x00,0x00,0x00,0x00,
		0x00,0x04,0x06,0x03,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*>*/

		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x0F,0x0F,0x0F,0x0F,0x00,0x00,0x00,0x00,/*.*/
};

const uint8_t Iron_Base[] ={
		0x00,0x20,0x60,0x60,0x60,0x60,0x60,0x60,0x90,0x90,0x90,0x90,
		0x90,0x90,0x90,0x90,0x90,0x90,0x90,0x90,0x90,0x90,0x90,0x90,
		0x90,0x90,0x90,0x90,0x90,0x90,0x90,0x90,0x90,0x60,0x60,0x60,
		0x60,0x60,0x60,0x60,0x60,0x70,0xF8,0x88,0x84,0x82,0x82,0x83,
		0x83,0x83,0x83,0x83,0x83,0x82,0x82,0x82,0x82,0x83,0x83,0x83,
		0x83,0x83,0x83,0x82,0x82,0x82,0x82,0x82,0x86,0x84,0x84,0x84,
		0x84,0x84,0x84,0x84,0x84,0x84,0x84,0x84,0x84,0x84,0x84,0x84,
		0x84,0x84,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0xFE,0x00,

};
//The top pixel row for left arrow / on hint
const uint8_t Iron_LeftArrow_UP[] = {
		0x00,0x7C,0x82,0x82,0x82,0x7C,0x00,0xFE,0x08,0x10,0x20,0xFE,//ON
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x88,
		0x98,0xBF,0xBF,0x98,0x88,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};

const uint8_t Iron_LeftArrow_DOWN[] = {
		0x00,0x7C,0x82,0x82,0x82,0x7C,0x00,0xFE,0x08,0x10,0x20,0xFE,//ON
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,
		0x30,0x7E,0x7E,0x30,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};
//The top pixel row for both arrows /
const uint8_t Iron_BothArrows[] = {
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x88,
		0x98,0xBF,0xBF,0x98,0x88,0x00,0x00,0x00,0x00,0x88,0x98,0xBF,
		0xBF,0x98,0x88,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};
//The top pixel row for right arrow / settings hint
const uint8_t Iron_RightArrow_UP[] = {
		0x00,0x8C,0x92,0x92,0x92,0x62,0x00,0xFE,0x92,0x92,0x92,0x82,//SE
		0x00,0x02,0x02,0xFE,0x02,0x02,0x00,0x02,0x02,0xFE,0x02,0x02,//TT
		0x00,0x00,0x82,0xFE,0x82,0x00,0x00,0xFE,0x08,0x10,0x20,0xFE,//IN
		0x00,0x7C,0x82,0x82,0xA2,0x62,0x00,0x8C,0x92,0x92,0x92,0x62,//GS
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x88,0x98,0xBF,
		0xBF,0x98,0x88,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};
const uint8_t Iron_RightArrow_DOWN[] = {
		0x00,0x8C,0x92,0x92,0x92,0x62,0x00,0xFE,0x92,0x92,0x92,0x82,//SE
		0x00,0x02,0x02,0xFE,0x02,0x02,0x00,0x02,0x02,0xFE,0x02,0x02,//TT
		0x00,0x00,0x82,0xFE,0x82,0x00,0x00,0xFE,0x08,0x10,0x20,0xFE,//IN
		0x00,0x7C,0x82,0x82,0xA2,0x62,0x00,0x8C,0x92,0x92,0x92,0x62,//GS
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x30,0x7E,
		0x7E,0x30,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};

#endif /* FONT_H_ */
