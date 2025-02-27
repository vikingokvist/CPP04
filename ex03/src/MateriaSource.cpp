#include "../include/MateriaSource.hpp"

MateriaSource::MateriaSource() {

	std::cout << "MateriaSource Default Constructor Called" << std::endl;
}

MateriaSource::~MateriaSource() {

	std::cout << "MateriaSource Destructor Called" << std::endl;
}

void 	MateriaSource::learnMateria(AMateria *materia) {

	for (int i = 0; i < 4; i++) {

		if (this->materia[i] == NULL) {

			this->materia[i] = materia;
			std::cout << "MateriaSource learned " << this->materia[i]->getType() 
			<< " as a new Materia" << std::endl;
			break ;
		}
	}
}

AMateria 	*MateriaSource::createMateria(std::string const &type) {

	for (int i = 0; i < 4; i++) {

		if (this->materia[i]->getType() == type) {
			return (this->materia[i]);
		}
	}
	return (0);
}