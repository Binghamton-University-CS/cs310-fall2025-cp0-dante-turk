#pragma once
#include <string>
#include "Animal.h"
using namespace std;

class AnimalsInZoo {
	public:
		AnimalsInZoo(unsigned int intial_capacity);
		AnimalsInZoo();

		bool store(Animal &another_animal);
		void readSizes(unsigned int &count, unsigned int &capacity);
		Animal find(const string& animal_name);
		bool remove(const string& animal_name);
		unsigned int makeSpace(unsigned int how_many=0);
		void show() const;

	private:
		unsigned int capacity = 0;
		unsigned int count = 0;
		Animal* animals = nullptr;


};
