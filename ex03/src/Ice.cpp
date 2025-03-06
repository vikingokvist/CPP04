#include "../include/Ice.hpp"

Ice::Ice() : AMateria("ice") {

	std::cout << "Ice Default Constructor Called" << std::endl;
}

Ice::~Ice() {

	std::cout << "Cure Destructor Called" << std::endl;
}

Ice::Ice(const Ice &copy) : AMateria(copy) {

	std::cout << "Cure Copy-Constructor Called" << std::endl;
}

Ice 	&Ice::operator=(const Ice &copy) {

	if (this != &copy) {
		this->type = copy.type;
	}
	return (*this);
}

AMateria	*Ice::clone() const {

	return (new Ice(*this));
}

void 		Ice::use(ICharacter &target) {

	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}