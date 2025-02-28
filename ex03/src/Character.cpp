#include "../include/Character.hpp"

Character::Character() : name(NULL) {}

Character::Character(std::string namex) : name(namex) {

	for (int i = 0; i < 4; i++) {
		inventory[i] = NULL;
	}
}

Character::~Character() {

	for (int i = 0; i < 4; i++) {
		if (this->inventory[i])
			delete this->inventory[i];
	}
}

Character::Character(const Character &copy) {

	this->name = copy.name;
	for (int i = 0; i < 4; i++) {
		this->inventory[i] = copy.inventory[i];
	}
}

Character	&Character::operator=(const Character &copy) {

	if (this != &copy) {
		this->name = copy.name;
	}
	return (*this);
}

std::string const 	&Character::getName() const {

	return (this->name);
}

void 		Character::equip(AMateria *m) {

	if (!m)
		return ;
	for (int i = 0; i < 4; i++) {

		if (!this->inventory[i]) {

			this->inventory[i] = m;
			std::cout << "* " << getName() << " equips " 
			<< this->inventory[i]->getType() << " in slot " << i
			<< " of their inventory *" << std::endl;
			break ;
		}
	}
}

void 		Character::unequip(int idx) {

	if (idx >= 0 && idx < 4 && this->inventory[idx]) {

		std::cout << "* " << getName() << " unequips " 
		<< this->inventory[idx]->getType() << " from slot " << idx
		<< " of their inventory *" << std::endl;
		this->inventory[idx] = NULL;
	}
}
void 			Character::use(int idx, ICharacter &target) {


	if (idx >= 0 && idx < 4 && this->inventory[idx]) {
		
		std::cout << target.getName() << " attacks with"
		this->inventory[idx]->use(target);
	}
}