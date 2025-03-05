#include "../include/Character.hpp"

Character::Character() : name("default_name") {}

Character::Character(std::string namex) : name(namex) {

	for (int i = 0; i < 4; i++) {
		inventory[i] = NULL;
		learntMaterias[i] = NULL;
	}
}

Character::~Character() {

	for (int i = 0; i < 4; i++) {
		if (this->inventory[i])
			delete this->inventory[i];
		if (this->learntMaterias[i])
			delete this->learntMaterias[i];
	}
}

Character::Character(const Character &copy) {

	this->name = copy.name;
	for (int i = 0; i < 4; i++) {
		if (copy.inventory[i])
			this->inventory[i] = copy.inventory[i]->clone();
		else
			this->inventory[i] = NULL;
	}
}

Character	&Character::operator=(const Character &copy) {

	if (this != &copy) {
		this->name = copy.name;

		for (int i = 0; i < 4; i++) {
			if (this->inventory[i])
				delete this->inventory[i];
		}
		for (int i = 0; i < 4; i++) {
			if (copy.inventory[i])
				this->inventory[i] = copy.inventory[i]->clone();
			else
				this->inventory[i] = NULL;
		}
	}
	return (*this);
}

std::string const 	&Character::getName() const {

	return (this->name);
}

void 		Character::equip(AMateria *m) {

	if (!m) {
		std::cout << "Error: Trying to equip unknown Materia" << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++) {

		if (this->inventory[i] == NULL) {

			this->inventory[i] = m;
			std::cout << "* " << getName() << " equips " 
			<< this->inventory[i]->getType() << " in slot " << i
			<< " of their inventory *" << std::endl;
			return ;
		}
	}
}

void 		Character::unequip(int idx) {

	if (idx < 0 || idx >= 4) {
		std::cout << "Error: Trying to access empty Materia slot" << std::endl;
		return ;
	}
	if (this->inventory[idx] != NULL) {

		std::cout << "* " << getName() << " unequips " 
		<< this->inventory[idx]->getType() << " from slot " << idx
		<< " of their inventory *" << std::endl;
		this->learntMaterias[idx] = this->inventory[idx];
		this->inventory[idx] = NULL;
	}
	else
		std::cout << "Error: Trying to access empty Materia slot" << std::endl;

}
void 			Character::use(int idx, ICharacter &target) {

	if (idx < 0 || idx >= 4) {
		std::cout << "Error: Trying to access empty Materia slot" << std::endl;
		return ;
	}
	if (this->inventory[idx] != NULL)
		this->inventory[idx]->use(target);
	else
		std::cout << "Error: Trying to access empty Materia slot" << std::endl;
}

