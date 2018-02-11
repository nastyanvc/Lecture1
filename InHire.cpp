#include "InHire.h"

InHire::InHire() = default;

InHire::InHire(Announcement A, int time, int data_of_hire) {
	InHire::name = A.getname();
	InHire::name = A.getproducer();
	InHire::name = A.getactors();
	InHire::time = time;
	InHire::data_of_hire = data_of_hire;
}

int InHire::gettime() {
	return time;
}

int InHire::getdata_of_hire() {
	return data_of_hire;
}

ostream &operator<<(ostream &os, InHire &In) {
	os << " Название: " << In.getname() << " Режиссёр: " << In.getproducer() << "" << In.getactors() << " Время показа: " << In.gettime() << " Дата выхода из проката: " << In.getdata_of_hire << endl;
}
