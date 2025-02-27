#include "../include/AMateria.hpp"

AMateria::AMateria(std::string const &type) : type(type) {

	std::cout << "AMateria type Constructor Called" << std::endl;
}

AMateria::~AMateria() {

	std::cout << "AMateria Default Destructor Called" << std::endl;
}

std::string const 	&AMateria::getType(void) const {

	return (this->type);
}

void	AMateria::use(ICharacter &target) {

	std::cout << "* AMateria does something to " << target.getName() << " *" << std::endl;
}