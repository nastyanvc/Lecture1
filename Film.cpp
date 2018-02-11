#include "Film.h"

Film::Film() = default;

Film::Film(int name, int producer, int actors) {
	Film::name = name;
	Film::producer = producer;
	Film::actors = actors;
}

Film::~Film() {
}

int Film::getname() {
	return name;
}

int Film::getproducer() {
	return producer;
}

int Film::getactors() {
	return actors;
}

}