#include "Animal.hpp"

Animal::Animal() {

	setType("Default Animal");
	std::cout << "Animal Class Default Constructor Called" << std::endl;
}

Animal::~Animal() {

	std::cout << "Animal Class Destructor Called" << std::endl;
}

Animal::Animal(const Animal &other) {

	*this = other;
}

Animal	&Animal::operator=(const Animal &other) {

	if (this != &other) {
		this->type = other.type;
	}
	return (*this);
}

void	Animal::makeSound(void) const {

	std::cout << "\"Default Animal Noise\"" << std::endl;
}

std::string	const	&Animal::getType(void) const {

	return (this->type);
}

void		Animal::setType(std::string type) {

	this->type = type;
}

Brain 		&Animal::getBrain(void) const {

	return (*this->brainAnimal);
}