#include "../include/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {

	setType("Default WrongAnimal");
	std::cout << "WrongAnimal Class Default Constructor Called" << std::endl;
}

WrongAnimal::~WrongAnimal() {

	std::cout << "WrongAnimal Class Destructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) {

	std::cout << "WrongAnimal Class Copy-Constructor Called" << std::endl;
	*this = other;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &other) {

	if (this != &other) {
		this->type = other.type;
	}
	return (*this);
}

void	WrongAnimal::makeSound(void) const {

	std::cout << "\"Default WrongAnimal Noise\"" << std::endl;
}

std::string		WrongAnimal::getType(void) const {

	return (this->type);
}

void		WrongAnimal::setType(std::string type) {

	this->type = type;
}