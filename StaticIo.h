// StaitcIo.h
// 
// last edit 28.Nov.2020 /klatoo - created

#ifndef StaticIo_H
#define StaticIo_H

#include <Arduino.h>


class StaticIo
{

public:
	StaticIo(): _port(-1) {}

	void Init(int port);
	void On();
	void Off();

private:
	int _port;
	bool _isOn;
};

#endif

