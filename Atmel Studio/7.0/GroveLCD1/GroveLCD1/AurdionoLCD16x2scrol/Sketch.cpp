﻿
/*Begining of Auto generated code by Atmel studio */
#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,20,4);  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup()
{
	void setRGB(int r, int g, int b);
	const int colorR = 255;
	const int colorG = 0;
	const int colorB = 0;
	lcd.init();                      // initialize the lcd
	lcd.init();
	// Print a message to the LCD.
	lcd.backlight();
	lcd.setCursor(3,0);
	lcd.print("Hello, world!");
	lcd.setCursor(2,1);
	lcd.print("Ywrobot Arduino!");
	lcd.setCursor(0,2);
	lcd.print("Arduino LCM IIC 2004");
	lcd.setCursor(2,3);
	lcd.print("Power By Ec-yuan!");
}


void loop()
{
}