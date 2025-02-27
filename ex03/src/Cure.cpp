#include "../include/Cure.hpp"

Cure::Cure() : AMateria("cure") {

	std::cout << "Cure Default Type Constructor Called" << std::endl;
}

Cure::~Cure() {

	std::cout << "Cure Destructor Called" << std::endl;
}


Cure::Cure(const Cure &other) : AMateria(other) {

	*this = other;
}

Cure 	&Cure::operator=(const Cure &other) {

	if (this != &other) {
		this->type = other.type;
	}
	return (*this);
}

AMateria	*Cure::clone() const {

	return (new Cure(*this));
}

void 	Cure::use(ICharacter &target) {

	std::cout << "* heals " << target.getName() 
	<< "'s wounds *" << std::endl;
}