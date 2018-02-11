#ifndef AFTERHIRE
#define AFTERHIRE

#include <iostream>
#include "InHire.h"

using namespace std;

class AfterHire:public Film {                                  
protected:
	int profit;                                                
public:
	AfterHire();                                              
	AfterHire(InHire I, int profit);
	int getprofit();
	friend ostream &operator<<(ostream &os, AfterHire &After);
}



#endif