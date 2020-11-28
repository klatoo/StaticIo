// StaticIo.cpp
// 
// last edit 28.Nov.2020 /klatoo  - created

#include "StaticIo.h"

void StaticIo::Init(int port)
{
  _port = port;
  pinMode(_port,OUTPUT);
  Off();
}

void StaticIo::On()
{
  digitalWrite(_port,LOW);
  _isOn = true;
}

void StaticIo::Off()
{
  digitalWrite(_port,HIGH);
  _isOn = false;
}

