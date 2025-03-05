#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "../include/Character.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string type;

	public:
		AMateria();
		virtual ~AMateria();
		AMateria(AMateria const &copy);
		AMateria(std::string const &type);

		AMateria const	&operator=(AMateria const &copy);

		std::string const &getType(void) const;

		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &target);
};

#endif