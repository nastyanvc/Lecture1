#ifndef INHIRE
#define INHIRE

#include <iostream>

#include "Announcement.h"

using namespace std;

class InHire :public Film {                                        
protected:
	int time;                                                      
	int data_of_hire;                                              
public:
	InHire();                                                      
	InHire(Announcement A, int time, int data_of_hire);  
	int gettime();
	int getdata_of_hire();
	friend ostream &operator<<(ostream &os, InHire &In);
};

#endif