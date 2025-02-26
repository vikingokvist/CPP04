#include "./include/Dog.hpp"
#include "./include/Cat.hpp"

std::string	getCatIdeas(int index);
std::string	getDogIdeas(int index);

int		main(void)
{

	// DECLARING 2 AANIMALS
	const AAnimal	*dogAndCat[2];
	std::cout << std::endl;

	
	// INIT THE AANIMALS TO BE CAT AND DOG
	for (int i = 0; i < 2; i++) {
		if (i < 1)
			dogAndCat[i] = new Dog();
		else
			dogAndCat[i] = new Cat();
	}
	std::cout << std::endl;
	dogAndCat[0]->makeSound();
	dogAndCat[1]->makeSound();

	// INITIALIZE THEIR BRAINS
	Brain	*brain[2];
	std::cout << std::endl;


	for (int i = 0; i < 2; i++) {

		// GET TYPE OF AANIMAL IT IS
		dogAndCat[i]->getType();

		// GET ITS BRAIN
		brain[i] = &dogAndCat[i]->getBrain();

		// SET THEIR IDEAS
		for (int j = 0; j < 4; j++) {

			if (i < 2) 
				brain[i]->setIdeas(getDogIdeas(j), j);
			else
				brain[i]->setIdeas(getCatIdeas(j), j);
		}
	}


	// PRINT DOG IDEAS
	std::cout << std::endl;
	for (int j = 0; j < 4; j++) {
		std::cout << "Dog Idea " << j << ": " << brain[1]->getIdeas(j) << std::endl;
	}

	// PRINT CAT IDEAS
	std::cout << std::endl;
	for (int j = 0; j < 4; j++) {
		std::cout << "Cat Idea " << j << ": " << brain[1]->getIdeas(j) << std::endl;
	}

	// DEEP COPY OF AANIMALS using copy constructor
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

	// FREE DOG AND CAT
	std::cout << std::endl;
	for (int i = 0; i < 2; i++) {

		delete dogAndCat[i];
	}
	return (0);
}

std::string	getDogIdeas(int index) {

	if (index == 0)
		return ("FOOOOOOD");
	else if (index == 1)
		return ("GO TO THE PARK!!!!");
	else if (index == 2)
		return ("WATERRRR PLSSS");
	else if (index == 3)
		return ("PET ME!!!!");
	return ("Default dog idea");
}

std::string	getCatIdeas(int index) {

	if (index == 0)
		return ("ATTACK!!");
	else if (index == 1)
		return ("DONT PET ME THERE");
	else if (index == 2)
		return ("LEAVE ME ALONE");
	else if (index == 3)
		return ("WHERES MY FOOD");
	return ("Default cat idea");
}
