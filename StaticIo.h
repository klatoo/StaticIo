// StaitcIo.h
// 
// last edit 28.Nov.2020 /klatoo - created

#ifndef StaticIo_H
#define StaticIo_H

#include <Arduino.h>


class StaticIo
{

public:
	StaticIo(): _port(-1), _usePositiveLogic(true), _isOn(false) {}

	void Init(int port, bool usePositiveLogic=true);
	void On();
	void Off();

private:
	int _port;
	bool _isOn;
	bool _usePositiveLogic;
};

#endif

