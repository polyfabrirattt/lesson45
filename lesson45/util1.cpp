#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;

void random_init(int* vector, int size, int a,int b) {
	for (int i = 0; i < size; i++) {
		*(vector + i) = rand() % (b - a + 1) + a;
	}
}


string convert(int* vector, int size) {
	string s = "";
	
	for (int i = 0; i < size; i++) {
		s += to_string(*(vector + i)) + " ";
	}
	
	return s;
}