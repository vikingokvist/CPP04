#include "./include/Dog.hpp"
#include "./include/Cat.hpp"
#include "./include/Brain.hpp"

#define ANIMAL_SIZE 2

int		main(void)
{
	const Animal	*dogAndCat[2]; // DECLARING 2 ANIMALS

	std::cout << std::endl;
	for (int i = 0; i < ANIMAL_SIZE; i++) { // INIT THE ANIMALS TO BE CAT AND DOG

		if (i % 2 == 0)
			dogAndCat[i] = new Dog();
		else
			dogAndCat[i] = new Cat();
	}

	std::cout << std::endl;
	dogAndCat[0]->makeSound();
	dogAndCat[1]->makeSound();

	Brain *test = dogAndCat[1]->getBrain();
	std::cout << test->getIdeas()[0] << std::endl;
	std::cout << test->getIdeas()[1] << std::endl;



	// DEEP COPY OF ANIMALS using copy constructor
	// std::cout << std::endl;
	// Dog	*dogA = new Dog;
	// Dog *dogB = new Dog(*dogA);
	// std::cout << std::endl;
	// delete dogA; delete dogB;


	// DEEP COPY assignment operator overload
	// std::cout << std::endl;
	// Dog	*dogC = new Dog;
	// Dog *dogD = new Dog;
	// std::cout << std::endl;
	// *dogC = *dogD;
	// delete dogC; delete dogD;
	
	std::cout << std::endl;
	for (int i = 0; i < 2; i++) { // FREE DOG AND CAT
		delete dogAndCat[i];
	}
	return (0);
}
