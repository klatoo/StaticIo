// StaticIo.cpp
// 
// last edit 28.Nov.2020 /klatoo  - created

#include <StaticIo.h>

void StaticIo::Init(int port, bool usePositiveLogic)
{
  _port = port;
  pinMode(_port,OUTPUT);
  Off();
}

void StaticIo::On()
{
  if(_usePositiveLogic)
  {
    digitalWrite(_port,LOW);
  }
  else
  {
    digitalWrite(_port,HIGH);
  }
  _isOn = true;
}

void StaticIo::Off()
{
  if(_usePositiveLogic)
  {
     digitalWrite(_port,HIGH);
  } 
  else
  {
    digitalWrite(_port,LOW);
  }
  
  _isOn = false;
}

