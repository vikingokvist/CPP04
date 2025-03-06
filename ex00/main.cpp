#include "./include/Dog.hpp"
#include "./include/Cat.hpp"
#include "./include/WrongCat.hpp"

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

		std::cout << meta->getType() << " " << std::endl;
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

		std::cout << meta2->getType() << " " << std::endl;
		meta2->makeSound();

		std::cout << std::endl;
		delete k; delete meta2;




	}
	
	return (0);
}