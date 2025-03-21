#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>
#include <string>

class Brain;

class AAnimal
{
	protected:
		std::string type;

	public:
		AAnimal();
		virtual ~AAnimal();
		
		AAnimal(const AAnimal &other);
		AAnimal &operator=(const AAnimal &other);

		virtual void	makeSound(void) const = 0;

		std::string	const	&getType(void) const;
		void			setType(std::string type);
		virtual Brain* getBrain() const;
};

#endif