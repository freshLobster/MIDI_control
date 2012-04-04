#include <controller.h>

controller::controller(){
	pin = 0;
	channel = 0;
}
controller::controller(int pin){
	this->pin = pin;
	channel = 0;
}
controller::controller(int pin, int channel){
	this->pin = pin;
	this->channel = channel;
}
void controller::set_pin(int pin){
	this->pin = pin;
}
void controller::set_channel(int channel){
	this->channel = channel;
}
int controller::get_pin(){
	return pin;
}
int controller::get_channel(){
	return channel;
}