#include "AnimalsInZoo.h"
#include <iostream>

AnimalsInZoo::AnimalsInZoo(unsigned int initial_capacity){
	if(initial_capacity == 0){
		capacity = 1;
	} else {
		capacity = initial_capacity;
	}
	animals = new Animal[capacity];
	count = 0;
}

AnimalsInZoo::AnimalsInZoo(){
	capacity = 1;
	count = 0;
	animals = new Animal[capacity];
}

bool AnimalsInZoo::store(Animal &another_animal){
	if(count == capacity){
		makeSpace();
	}
	animals[count] = another_animal;
	std::cout << "Animal " << animals[count].name << " added to spot " << count << " of the contained array." << std::endl;
	++count;
	return true;
}

void AnimalsInZoo::readSizes(unsigned int &outcount, unsigned int &outcapacity){
	outcount = count;
	outcapacity = capacity;
}

Animal AnimalsInZoo::find(const string& animal_name){
	for(unsigned int i = 0; i < count; ++i){
		if(animal_name == animals[i].name){
			return animals[i];
		}
	}
	return Animal();
}

bool AnimalsInZoo::remove(const string& animal_name){
	for(unsigned int i = 0; i < count; ++i){
		if(animals[i].name == animal_name){
			animals[i] = animals[count-1];
			--count;
			return true;
		}
	}
	std::cout << "Animal " << animal_name << " not found." << std::endl;
	return false;
}

unsigned int AnimalsInZoo::makeSpace(unsigned int how_many){
	unsigned int oldCapacity = capacity;
	if(how_many == 0){
		capacity *=2;
	}
	else{
		capacity += how_many;
	}
	Animal* newArr  = new Animal[capacity];
	for (unsigned int i = 0; i < count; i++){
		newArr[i] = animals[i];
	}
	delete[] animals;
	animals = newArr;

	return capacity - oldCapacity;
}

void AnimalsInZoo::show() const {
	for(unsigned int i = 0; i < count; ++i){
		std::cout << i << ": " << animals[i].name << ", " << animals[i].weight << " lbs"; 
		if(animals[i].dangerous == true){
			std::cout << " be careful!";
		}
		std::cout << std::endl;
	}
}


