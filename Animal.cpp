#include "Animal.h"
#include <iostream>

Animal::Animal() : name(""), weight(0.0f), dangerous(false) {};

Animal::Animal(string speciesName, float animalWeight, bool dangerousness) {
	name = speciesName;
	weight = animalWeight;
	dangerous = dangerousness;
}
