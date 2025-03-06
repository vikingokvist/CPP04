#include "../include/Cure.hpp"

Cure::Cure() : AMateria("cure") {

	std::cout << "Cure Default Constructor Called" << std::endl;
}

Cure::~Cure() {

	std::cout << "Cure Destructor Called" << std::endl;
}

Cure::Cure(const Cure &copy) : AMateria(copy) {

	std::cout << "Cure Copy-Constructor Called" << std::endl;
}

Cure 	&Cure::operator=(const Cure &copy) {

	if (this != &copy) {
		this->type = copy.type;
	}
	return (*this);
}

AMateria	*Cure::clone() const {

	return (new Cure(*this));
}

void 	Cure::use(ICharacter &target) {

	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}