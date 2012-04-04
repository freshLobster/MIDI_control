#include <controlarray.h>

controlarray::controlarray(){
	size = 10;
	for(int i = 0; i < size; i++){
		pins[i] = 0;
		controls[i] = 0;
	}
}
controlarray::controlarray(int size){
	this->size = size;
	for(int i = 0; i < size; i++){
		pins[i] = 0;
		controls[i] = 0;
	}
}
controlarray::controlarray(int size, int* pins){
	this->size = size;
	for(int i = 0; i < size; i++){
		this->pins[i] = pins[i];
		controls[i] = 0;
	}
}
controlarray::controlarray(int size, int* pins, int* controls){
	this->size = size;
	for(int i = 0; i < size; i++){
		this->pins[i] = pins[i];
		this->controls[i] = controls[i];
	}
}
void controlarray::set_pin(int index, int value){
	pins[index] = value;
}
void controlarray::set_control(int index, int value){
	controls[index] = value;
}
void controlarray::set_all_pins(int value){
	for(int i = 0; i < size; i++){
		pins[i] = value;
	}
}
void controlarray::set_all_controls(int value){
	for(int i = 0; i < size; i++){
		controls[i] = value;
	}
}
int controlarray::get_size(){
	return size;
}
int controlarray::get_pin(int index){
	return pins[index];
}
int controlarray::get_control(int index){
	return controls[index];
}