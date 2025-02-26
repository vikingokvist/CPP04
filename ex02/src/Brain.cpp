#include "Brain.hpp"

Brain::Brain() {

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

void		Brain::setIdeas(std::string idea, int index) {

	if (index >= 0 && index < 100)
		this->ideas[index] = idea;
}

std::string		Brain::getIdeas(int index) const {

	if (index >= 0 && index < 100)
		return (this->ideas[index]);
	return (this->ideas[0]);
}
