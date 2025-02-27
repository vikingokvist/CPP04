#include "../include/Cure.hpp"

Cure::Cure() : AMateria("cure") {

	std::cout << "Cure Default Type Constructor Called" << std::endl;
}

Cure::~Cure() {

	std::cout << "Cure Destructor Called" << std::endl;
}

void 	Cure::use(ICharacter &target) {

	AMateria::use(target);
}
