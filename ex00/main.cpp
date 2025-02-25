#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int		main(void)
{
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << std::endl;

		std::cout << j->getType() << " " << std::endl;
		j->makeSound();
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();

		meta->makeSound();

		std::cout << std::endl;
		delete i; delete j; delete meta;
	}
	{
		std::cout << std::endl;
		const WrongAnimal* meta2 = new WrongAnimal();
		const WrongAnimal* k = new WrongCat();

		std::cout << std::endl;

		std::cout << k->getType() << " " << std::endl;
		k->makeSound();

		meta2->makeSound();

		std::cout << std::endl;
		delete k; delete meta2;




	}
	
	return (0);
}