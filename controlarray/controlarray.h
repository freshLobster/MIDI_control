#ifndef CONTROLARRAY_H
#define CONTROLARRAY_H

using namespace std;

class controlarray{
	int size;
	int pins[50];
	int controls[50];
public:
	controlarray();
	controlarray(int size);
	controlarray(int size, int* pins);
	controlarray(int size, int* pins, int* controls);
	void set_pin(int index, int value);
	void set_control(int index, int value);
	void set_all_pins(int value);
	void set_all_controls(int value);
	int get_size();
	int get_pin(int index);
	int get_control(int index);
};
#endif