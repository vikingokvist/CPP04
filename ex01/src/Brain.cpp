#include "../include/Brain.hpp"

Brain::Brain() {

	setIdeas();
	std::cout << "Brain  Class Default Constructor Called" << std::endl;
}

Brain::~Brain() {

	std::cout << "Brain  Class Destructor Called" << std::endl;
}

Brain::Brain(const Brain &other) {
	
	*this = other;
}

Brain	&Brain::operator=(const Brain &other) {

	if (this != &other) {
		for (int i = 0; i < 100; i++) {
			
			this->ideas[i] = other.ideas[i];
		}
	}
	return (*this);
}

void		Brain::setIdeas(void) {

	for (int i = 0; i < 100; i++) {

		this->ideas[i] = "LETS GO TO THE PARK!!!";
	}
}

const std::string	*Brain::getIdeas(void) const {

	return (this->ideas);
}
