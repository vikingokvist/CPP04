#include "../include/Dog.hpp"

Dog::Dog() {

	Animal::setType("Dog");
	this->brainDog = new Brain();
	std::cout << "Dog    Class Default Constructor Called" << std::endl;
}

Dog::~Dog() {

	delete this->brainDog;
	std::cout << "Dog    Class Destructor Called" << std::endl;
}

Dog::Dog(const Dog &other) {

	this->type = other.type;
	this->brainDog = new Brain(*other.brainDog);
}

Dog		&Dog::operator=(const Dog &other) {

	if (this != &other) {
		this->type = other.type;
		delete this->brainDog;
		this->brainDog = new Brain(*other.brainDog);
	}
	return (*this);
}

void	Dog::makeSound(void) const {

	std::cout << "WOOF WOOF" << std::endl;
}

const std::string		*Dog::getIdeas(void) const {

	return (this->brainDog->getIdeas());
}

Brain	*Dog::getBrain(void) const{

	return (this->brainDog);
}