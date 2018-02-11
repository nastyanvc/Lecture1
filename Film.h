#ifndef FILM_H
#define FILM_H

#include <iostream>

using namespace std;

class Film {                                     
protected:
	int name;                                    
	int producer;                                
	int actors;                                 
public:
	Film();                                      
	Film(int Name, int producer, int actors);    
	virtual ~Film();                             
	int getname();                               
	int getproducer();                           
	int getactors();    
	void poster();
};

#endif