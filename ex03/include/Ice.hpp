#ifndef ICE_HPP
# define ICE_HPP

#include "./AMateria.hpp"
#include "./Character.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		~Ice();
		// AMateria 	*clone() const;
		void 		use(ICharacter &target);
};

#endif