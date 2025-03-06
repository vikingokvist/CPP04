#include "../abs/AMateria.hpp"

AMateria::AMateria() : type(NULL) {

	std::cout << "AMateria Default Constructor Called" << std::endl;
}

AMateria::AMateria(std::string const &type) : type(type) {

	std::cout << "AMateria Parameterized Constructor Called" << std::endl;
}

AMateria::AMateria(AMateria const &copy) {

	std::cout << "AMateria Copy-Constructor Called" << std::endl;
	*this = copy;
}

AMateria::~AMateria() {

	std::cout << "AMateria Destructor Called" << std::endl;
}

AMateria const 	&AMateria::operator=(AMateria const &copy) {

	if (this != &copy)  {
		this->type = copy.type;
	}
	return (*this);
}

std::string const 	&AMateria::getType(void) const {

	return (this->type);
}

void	AMateria::use(ICharacter &target) {

	std::cout << "* uses unknown type " << getType() << " against" << target.getName() << " *" << std::endl;
}