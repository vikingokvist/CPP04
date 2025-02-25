#include "Dog.hpp"

Dog::Dog() {

	Animal::setType("Dog");
	std::cout << "Dog    Class Default Constructor Called" << std::endl;
}

Dog::~Dog() {

	std::cout << "Dog    Class Destructor Called" << std::endl;
}

Dog::Dog(const Dog &other) {

	*this = other;
}

Dog		&Dog::operator=(const Dog &other) {

	if (this != &other) {
		this->type = other.type;
	}
	return (*this);
}

void	Dog::makeSound(void) const {

	std::cout << "WOOF WOOF" << std::endl;
}
