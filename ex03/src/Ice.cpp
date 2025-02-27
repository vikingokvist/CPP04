#include "../include/Ice.hpp"

Ice::Ice() : AMateria("ice") {

	std::cout << "Ice Default Type Constructor Called" << std::endl;
}

Ice::~Ice() {

	std::cout << "Ice Destructor Called" << std::endl;
}

Ice::Ice(const Ice &other) : AMateria(other) {

	*this = other;
}

Ice 	&Ice::operator=(const Ice &other) {

	if (this != &other) {
		this->type = other.type;
	}
	return (*this);
}

AMateria	*Ice::clone() const {

	return (new Ice(*this));
}

void 		Ice::use(ICharacter &target) {

	std::cout << "* shoots an ice bolt at "
	<< target.getName() << " *" << std::endl;
}