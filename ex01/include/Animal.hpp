#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal
{
	private:
		Brain *brainAnimal;
		
	protected:
		std::string type;

	public:
		Animal();
		virtual ~Animal();
		
		Animal(const Animal &other);
		Animal &operator=(const Animal &other);

		virtual void	makeSound(void) const;

		std::string	const	&getType(void) const;
		void			setType(std::string type);
		virtual Brain 		&getBrain(void) const;
};

#endif