#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "Brain.hpp"

int main()
{
	Animal* animal[4];

	for (int i = 0; i < 4; i++) {
		if (i >= 2)
			animal[i] = new Cat();
		else
			animal[i] = new Dog();
	}
	std::cout << "--------------------------------------" << std::endl;

	for (int i = 0; i < 4; i++) {
		animal[i]->getType();
		animal[i]->makeSound();
	}
	std::cout << "--------------------------------------" << std::endl;

	for (int i = 0; i < 4; i++) {
		delete animal[i];
	}
	std::cout << "--------------------------------------" << std::endl;

	return 0;
}

// int main() {
// 	Dog *dog1 = new Dog();

// 	std::cout << "\n\n------------------[1]-----------------" << std::endl;
// 	dog1->getBrain()->setIdea(0, "I am a dog");
// 	std::cout << "Ideas of dog1: " << dog1->getBrain()->getIdea(0) << std::endl;

// 	std::cout << "------------------[2]-----------------" << std::endl;
// 	Dog *dog2 = new Dog(*dog1);
// 	std::cout << "\nIdeas of dog2: " << dog2->getBrain()->getIdea(0) << std::endl;
// 	std::cout << "------------------[3]-----------------" << std::endl;
// 	dog1->getBrain()->setIdea(0, "I am a Wierd dog");
// 	std::cout << "Ideas of dog1: " << dog1->getBrain()->getIdea(0) << std::endl;
// 	std::cout << "Ideas of dog2: " << dog2->getBrain()->getIdea(0) << std::endl;
// 	std::cout << "--------------------------------------" << std::endl;

// 	delete (dog1);
// 	delete (dog2);
// 	/*-------------------------------------------------*/

// 	return 0;
// }

// /*============================================================================*/
