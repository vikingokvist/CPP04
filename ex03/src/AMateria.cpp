#include "../abs/AMateria.hpp"

AMateria::AMateria() : type(NULL) {}

AMateria::AMateria(std::string const &type) : type(type) {}

AMateria::AMateria(AMateria const &copy) {

	*this = copy;
}

AMateria::~AMateria() {}

AMateria const 	&AMateria::operator=(AMateria const &copy) {

	if (this != &copy)  {
		this->type = copy.type;
	}
	return (*this);
}

std::string const 	&AMateria::getType(void) const {

	return (this->type);
}
