#include "../include/Brain.hpp"

Brain::Brain() {

	setIdeas();
	std::cout << "Brain  Class Default Constructor Called" << std::endl;
}

Brain::~Brain() {

	std::cout << "Brain  Class Destructor Called" << std::endl;
}

Brain::Brain(const Brain &other) {
	
	std::cout << "Brain Class Copy-Constructor Called" << std::endl;
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

		this->ideas[i] = "Lets go to the park!!!";
	}
}

const std::string	Brain::getIdeas(unsigned int idx) const {

	if (idx >= 100 || idx < 0) {
		std::cout << "Wrong Ideas index" << std::endl;
		return (0);
	}
	return (this->ideas[idx]);
}
