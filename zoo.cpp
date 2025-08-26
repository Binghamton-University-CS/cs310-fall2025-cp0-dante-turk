#include <iostream>
#include <stdlib.h>
#include "Animal.h"
#include "AnimalsInZoo.h"
using namespace std;

int main() {
   Animal *animal1 = new Animal("African Elephant", 1758);
   Animal animal2("Giant Panda", 1869);
   Animal *animal3 = new Animal("Giraffe", 1900);
   AnimalsInZoo *animals4 = new AnimalsInZoo(*animal1, 1);

   delete animal1;
   animal1 = new Animal("Snow Leopard", 1777);

   animal3->display();
   animal2.display();
   animal1->display();
   animals4->display();

   delete animal1;
}
