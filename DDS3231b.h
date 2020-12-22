/*
 * DDS3231.cpp
 *
 *  Created on: 4 Mar 2020
 *      Author: liam
 */

#include "DDS3231.h"
#include <iostream>
#include <unistd.h>
#include <math.h>
#include <stdio.h>

using namespace std;

namespace exploringRPi {

#define DEVID          0x00   //Device ID



	// TODO Auto-generated constructor stub


/**
 * Method to combine two 8-bit registers into a single short, which is 16-bits on the Raspberry Pi. It shifts
 * the MSB 8-bits to the left and then ORs the result with the LSB.
 * @param msb an unsigned character that contains the most significant byte
 * @param lsb an unsigned character that contains the least significant byte
 */

 /*
short DDS3231::combineRegisters(unsigned char msb, unsigned char lsb){
   //shift the MSB left by 8 bits and OR with LSB
   return ((short)msb<<8)|(short)lsb;
}*/

/*
int DDS3231::updateRegisters(){


   //update the DATA_FORMAT register
   //char data_format = 0x00;  //+/- 2g with normal resolution
   //Full_resolution is the 3rd LSB
   //data_format = data_format|((this->resolution)<<3);
   //data_format = data_format|this->range; // 1st and 2nd LSB therefore no shift
   //return this->writeRegister(DATA_FORMAT, data_format);
return 1;
}*/

DDS3231::DDS3231(unsigned int I2CBus, unsigned int I2CAddress): {
	I2CDevice(I2CBus, I2CAddress){   // this member initialisation list calls the parent constructor
	this->I2CAddress = I2CAddress;
	this->I2CBus = I2CBus;

	this->registers = NULL;
	//this->writeRegister(POWER_CTL, 0x08);
	//this->updateRegisters();
}}

DDS3231::~DDS3231() {
	// TODO Auto-generated destructor stub
}}


/*
 *  * Read the sensor state. This method checks that the device is being correctly
 * read by using the device ID of the ADXL345 sensor. It will read in the accelerometer registers
 * and pass them to the combineRegisters() method to be processed.
 * @return 0 if the registers are successfully read and -1 if the device ID is incorrect.
 */
/*
int ADXL345::readSensorState(){
	this->registers = this->readRegisters(BUFFER_SIZE, 0x00);
	if(*this->registers!=0xe5){
		perror("ADXL345: Failure Condition - Sensor ID not Verified");
		return -1;
	}
	this->accelerationX = this->combineRegisters(*(registers+DATAX1), *(registers+DATAX0));
	this->accelerationY = this->combineRegisters(*(registers+DATAY1), *(registers+DATAY0));
	this->accelerationZ = this->combineRegisters(*(registers+DATAZ1), *(registers+DATAZ0));
	this->resolution = (ADXL345::RESOLUTION) (((*(registers+DATA_FORMAT))&0x08)>>3);
	this->range = (ADXL345::RANGE) ((*(registers+DATA_FORMAT))&0x03);
	this->calculatePitchAndRoll();
	return 0;
}
 */

