#include "AAnimal.hpp"

AAnimal::AAnimal() {

	setType("Default AAnimal");
	std::cout << "AAnimal Class Default Constructor Called" << std::endl;
}

AAnimal::~AAnimal() {

	std::cout << "AAnimal Class Destructor Called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other) {

	*this = other;
}

AAnimal	&AAnimal::operator=(const AAnimal &other) {

	if (this != &other) {
		this->type = other.type;
	}
	return (*this);
}

void	AAnimal::makeSound(void) const {

	std::cout << "\"Default AAnimal Noise\"" << std::endl;
}

std::string	const	&AAnimal::getType(void) const {

	return (this->type);
}

void		AAnimal::setType(std::string type) {

	this->type = type;
}
