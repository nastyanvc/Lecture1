#include "Announcement.h"

Announcement::Announcement() = default;

Announcement::Announcement(Film F, int release_data) {
	Announcement::name = F.getname;
	Announcement::producer = F.getproducer;
	Announcement::actors = F.getactors;
	Announcement::release_data = release_data;

}

int Announcement::getrelease_data(){
	return release_data;
}

Announcement::~Announcement() {

}

ostream &operator<<(ostream &os, Announcement &A) {
	os << " Название: " << A.getname() << " Режиссёр: " << A.getproducer() << "" << A.getactors() << " Дата выхода: " << A.getrelease_data() << endl;
}