#include "../include/WrongCat.hpp"

WrongCat::WrongCat() {

	WrongAnimal::setType("WrongCat");
	std::cout << "WrongCat    Class Default Constructor Called" << std::endl;
}

WrongCat::~WrongCat() {

	std::cout << "WrongCat    Class Destructor Called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) {

	std::cout << "WrongCat Class Copy-Constructor Called" << std::endl;
	*this = other;
}

WrongCat		&WrongCat::operator=(const WrongCat &other) {

	if (this != &other) {
		this->type = other.type;
	}
	return (*this);
}

void	WrongCat::makeSound(void) const {

	std::cout << "MEOOOOOW" << std::endl;
}
