#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	private:
		Brain *brainDog;

	public:
		Dog();
		~Dog();

		Dog(const Dog &other);
		Dog &operator=(const Dog &other);
		
		void	makeSound(void) const;

		std::string	const 	&getType(void) const;
		void				setType(const std::string &type);

		Brain	&getBrain(void) const;
		void	setIdeas(Brain const &brain);
};

#endif