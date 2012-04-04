#ifndef CONTROLLER_H
#define CONTROLLER_H

using namespace std;

class controller{
	int pin;
	int channel;
public:
	controller();
	controller(int pin);
	controller(int pin, int channel);
	void set_pin(int pin);
	void set_channel(int channel);
	int get_pin();
	int get_channel();
};
#endif