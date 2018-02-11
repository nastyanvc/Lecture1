#ifndef ANNOUNCEMENT
#define ANNOUNCEMENT

#include <iostream>

#include "Film.h"

using namespace std;

class Announcement :public Film {                                  
protected: 
	int release_data;                                               
public:
	Announcement();                                                  
	Announcement(Film, int release_data);  
	int getrelease_data();
	virtual~Announcement();                                         
	friend ostream &operator<<(ostream &os, Announcement &A);      
};

#endif