/*
 * DCLOCK.h
 *
 *  Created on: 7 Mar 2020
 *      Author: liam
 */
#include<iostream>
#include"I2CDevice.h"
#ifndef DCLOCK_H_
#define DCLOCK_H_

using namespace std;

namespace exploringRPi {
extern uint8_t bcd2bin (uint8_t val);				// Conversion from bcd to decimal
extern uint8_t bin2bcd (uint8_t val);

class DCLOCK: public I2CDevice {
public:
	DCLOCK(unsigned int I2CBus, unsigned int I2CAddress);
	void displaytime();
	void display_date();
	void set_alrate(int setting, int alarm);
	void bit_setter(unsigned char addr, int bit, int log_lev);
	//void display_temp();
	virtual ~DCLOCK();
	int bcdToDec(char b);
	uint8_t decToBcd(int val);
	void set_time();
	void set_date();
	void al_check();
	void start_sqwv(int set, int INTCN);
	void show_temp();
	void display_timealarm();
	int set_altime();
	string bin_display(uint8_t a);

private:
	unsigned int I2CBus, I2CAddress;
	unsigned char *registers;
};

} /* namespace exploringRPi */

#endif /* DCLOCK_H_ */



