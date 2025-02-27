#include "../include/Ice.hpp"

Ice::Ice() : AMateria("ice") {

	std::cout << "Ice Default Type Constructor Called" << std::endl;
}

Ice::~Ice() {

	std::cout << "Ice Destructor Called" << std::endl;
}

void 	Ice::use(ICharacter &target) {

	AMateria::use(target);
}

AMateria 	*Ice::clone() const {


}

