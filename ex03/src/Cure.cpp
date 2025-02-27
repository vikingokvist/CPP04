#include "../include/Cure.hpp"

Cure::Cure() : AMateria("cure") {

	std::cout << "Cure Default Type Constructor Called" << std::endl;
}

Cure::~Cure() {

	std::cout << "Cure Destructor Called" << std::endl;
}

void 	Cure::use(ICharacter &target) {

	std::cout << "* heals " << target.getName() 
	<< "'s wounds *" << std::endl;
}
