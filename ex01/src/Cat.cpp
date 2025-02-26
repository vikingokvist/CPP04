#include "../include/Cat.hpp"

Cat::Cat() {

	Animal::setType("Cat");
	this->brainCat = new Brain();
	std::cout << "Cat    Class Default Constructor Called" << std::endl;
}

Cat::~Cat() {

	delete this->brainCat;
	std::cout << "Cat    Class Destructor Called" << std::endl;
}

Cat::Cat(const Cat &other) {

	this->type = other.type;
	this->brainCat = new Brain(*other.brainCat);
}

Cat		&Cat::operator=(const Cat &other) {

	if (this != &other) {
		this->type = other.type;
		delete this->brainCat;
		this->brainCat = new Brain(*other.brainCat);
	}
	return (*this);
}

void	Cat::makeSound(void) const {

	std::cout << "MEOOOOOW" << std::endl;
}

std::string const	&Cat::getType(void) const {
	return (this->type);
}

void	Cat::setType(const std::string &type) {
	this->type = type;
}
void	Cat::setIdeas(Brain const &brain) {

	*this->brainCat = brain;
}

Brain	&Cat::getBrain(void) const {

	return (*this->brainCat);
}
