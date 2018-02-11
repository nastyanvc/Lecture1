#include "AfterHire.h"
#include "InHire.h"

AfterHire::AfterHire() = default;

AfterHire::AfterHire(InHire I, int profit) {
	AfterHire::name = I.gettime();
	AfterHire::producer = I.getproducer();
	AfterHire::actors = I.getactors();
	AfterHire::profit = profit;
}

int AfterHire::getprofit() {
	return profit;
}

ostream &operator<<(ostream &os, AfterHire &After) {
	os << " Название фильма: " << After.getname() << " Режиссёр: " << After.getproducer() << " Список актёров: " << After.getactors() << " Прибыль: " << After.getprofit();
}