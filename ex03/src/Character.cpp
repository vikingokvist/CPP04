#include "../include/Character.hpp"

Character::Character(std::string namex) : name(namex) {

	for (int i = 0; i < 4; i++) {
		inventory[i] = NULL;
	}
	std::cout << "Character Default Constructor Called" << std::endl;
}

Character::~Character() {

	for (int i = 0; i < 4; i++) {
		delete this->inventory[i];
	}
	std::cout << "Character Destructor Called" << std::endl;
}

Character::Character(const Character &other) {

	*this = other;
	std::cout << "Character Copy Constructor Called" << std::endl;
}

Character	&Character::operator=(const Character &other) {

	if (this != &other) {

		this->name = other.name;
		for (int i = 0; i < 4; i++) {
			delete this->inventory[i];
			this->inventory[i] = other.inventory[i];
		}
	}
	return (*this);
}

std::string const 	&Character::getName() const {

	return (this->name);
}

void 		Character::equip(AMateria *m) {

	for (int i = 0; i < 4; i++) {

		if (this->inventory[i] == NULL) {

			this->inventory[i] = m;
			std::cout << "* " << getName() << " equips " 
			<< this->inventory[i]->getType() << " in slot " << i
			<< " of their inventory *" << std::endl;
			break ;
		}
	}
}

void 		Character::unequip(int idx) {

	if (idx >= 0 && idx < 4 && this->inventory[idx] != NULL) {

		std::cout << "* " << getName() << " unequips " 
		<< this->inventory[idx]->getType() << " from slot " << idx
		<< " of their inventory *" << std::endl;
		this->inventory[idx] = NULL;
	}
}
void 			Character::use(int idx, ICharacter &target) {

	if (idx >= 0 && idx < 4 && this->inventory[idx] != NULL) {
		
		this->inventory[idx]->use(target);
	}
}