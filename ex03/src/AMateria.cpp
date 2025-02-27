#include "../include/AMateria.hpp"

AMateria::AMateria(std::string const &type) : type(type) {

	std::cout << "AMateria type Constructor Called" << std::endl;
}

AMateria::~AMateria() {

	std::cout << "AMateria Default Destructor Called" << std::endl;
}

void	AMateria::use(ICharacter &target) {

	if (getType() == "ice") {
		std::cout 
		<< "* shoots an " << getType() << " bolt at " << target.getName() << " *" 
		<< std::endl;
	}
	else if (getType() == "cure") {

		std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	}
}

std::string const 	&AMateria::getType(void) const {

	return (this->type);
}