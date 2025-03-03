#include "../include/MateriaSource.hpp"

MateriaSource::MateriaSource() {

	for (int i = 0; i < 4; i++) {
		this->materia[i] = NULL;
	}
}

MateriaSource::MateriaSource(MateriaSource const &copy) {

	for (int i = 0; i < 4; i++) {
    	if (copy.materia[i])
        	this->materia[i] = copy.materia[i]->clone();
    	else
        	this->materia[i] = NULL;
	}
}

MateriaSource const	&MateriaSource::operator=(MateriaSource const &copy) {

	if (this != &copy) {

		for (int i = 0; i < 4; i++) {

			if (this->materia[i] != NULL) {
				delete this->materia[i];
				this->materia[i] = copy.materia[i] ? copy.materia[i]->clone() : 0;
			}
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource() {

	for (int i = 0; i < 4; i++) {
		if (this->materia[i])
			delete this->materia[i];
	}
}

void 	MateriaSource::learnMateria(AMateria *materia) {

	for (int i = 0; i < 4; i++) {

		if (!this->materia[i]) {
			this->materia[i] = materia;
			break ;
		}
	}
}

AMateria 	*MateriaSource::createMateria(std::string const &type) {

	for (int i = 0; i < 4; i++) {

		if (this->materia[i] != NULL && this->materia[i]->getType() == type) {
				return (this->materia[i]->clone());
		}
	}
	std::cout << type << " Materia Not Recognized." << std::endl;
	return (NULL);
}
