#include "../include/Cat.hpp"

Cat::Cat() {

	Animal::setType("Cat");
	std::cout << "Cat    Class Default Constructor Called" << std::endl;
}

Cat::~Cat() {

	std::cout << "Cat    Class Destructor Called" << std::endl;
}

Cat::Cat(const Cat &other) {

	std::cout << "Cat Class Copy-Constructor Called" << std::endl;
	*this = other;
}

Cat		&Cat::operator=(const Cat &other) {

	if (this != &other) {
		this->type = other.type;
	}
	return (*this);
}

void	Cat::makeSound(void) const {

	std::cout << "MEOOOOOW" << std::endl;
}
