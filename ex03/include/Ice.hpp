#ifndef ICE_HPP
# define ICE_HPP

#include "../abs/AMateria.hpp"
#include "./Character.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		~Ice();

		Ice(const Ice &copy);
		Ice &operator=(const Ice &copy);
		AMateria 	*clone() const;
		
		void 		use(ICharacter &target);
};

#endif