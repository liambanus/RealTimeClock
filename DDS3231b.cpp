/*
 * DDS3231.h
 *
 *  Created on: 4 Mar 2020
 *      Author: liam
 */

#ifndef DDS3231_H_
#define DDS3231_H_
#include"I2CDevice.h"

#define BUFFER_SIZE 0x13 //19?

namespace exploringRPi {
class DDS3231: protected I2CDevice {

/*public:
	DDS3231();
	virtual ~DDS3231();
}; */



private:
	unsigned int I2CBus, I2CAddress;
	unsigned char *registers;
	float temp;                                 // in degrees
	//short combineRegisters(unsigned char msb, unsigned char lsb);
	//void calculatePitchAndRoll();
	//virtual int updateRegisters();
// could be hardwired? unsigned int I2CAddress=0x68)
public:
	DDS3231(unsigned int I2CBus, unsigned int I2CAddress);//double check
	//virtual int readtime();

	//virtual void settime(ADXL345::RANGE range);


	//virtual ADXL345::RANGE getRange() { return this->range; }
	//virtual void setResolution(ADXL345::RESOLUTION resolution);
	//virtual ADXL345::RESOLUTION getResolution() { return this->resolution; }
	//virtual float getPitch() { return pitch; }
	//virtual float getRoll() { return roll; }

	// Debugging method to display and update the pitch/roll on the one line
	//virtual void display_time();
	virtual ~DDS3231();
};

} /* namespace exploringRPi */



#endif /* DDS3231_H_ */

