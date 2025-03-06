#include "./include/Dog.hpp"
#include "./include/Cat.hpp"
#include "./include/Brain.hpp"

#define AANIMAL_SIZE 2

int		main(void)
{
	// const AAnimal     dogAndCat1[2]; CANNOT DO
	const AAnimal	*dogAndCat[AANIMAL_SIZE]; // DECLARING 2 AANIMALS

	std::cout << std::endl;
	for (int i = 0; i < AANIMAL_SIZE; i++) { // INIT THE AANIMALS TO BE CAT AND DOG

		if (i % 2 == 0)
			dogAndCat[i] = new Dog();
		else
			dogAndCat[i] = new Cat();
	}

	std::cout << std::endl;

	Brain *test1 = dogAndCat[0]->getBrain();
	std::string ideasDog[100];

	std::cout << dogAndCat[0]->getType() << ": ";
	dogAndCat[0]->makeSound();

	std::cout << "IDEAS: " << std::endl;
	for (unsigned int i = 0; i < 100; i++) {
		std::cout << test1->getIdeas(i) << std::endl;
	}
	std::cout << std::endl;


	Brain *test2 = dogAndCat[1]->getBrain();
	std::string ideasCat[100];

	std::cout << dogAndCat[1]->getType() << ": ";
	dogAndCat[1]->makeSound();

	std::cout << "IDEAS: " << std::endl;
	for (unsigned int i = 0; i < 100; i++) {
		std::cout << test2->getIdeas(i) << std::endl;
	}
	std::cout << std::endl;

	
	//DEEP COPY OF AANIMALS using copy constructor
	std::cout << std::endl;
	Dog	*dogA = new Dog;
	Dog *dogB = new Dog(*dogA);
	std::cout << std::endl;
	delete dogA; delete dogB;


	//DEEP COPY assignment operator overload
	std::cout << std::endl;
	Dog	*dogC = new Dog;
	Dog *dogD = new Dog;
	std::cout << std::endl;
	*dogC = *dogD;
	delete dogC; delete dogD;
	
	std::cout << std::endl;
	for (int i = 0; i < 2; i++) { // FREE DOG AND CAT
		delete dogAndCat[i];
	}
	return (0);
}
