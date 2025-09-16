#pragma once
#include <string>
using namespace std;
class Animal{
	public:
		Animal();
		string get_name() const;
		Animal(string speciesName, float animalWeight, bool dangerousness);
	
		string name = "";
		float weight = 0.0f;
		bool dangerous = false;
};
