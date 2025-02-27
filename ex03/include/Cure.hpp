#ifndef CURE_HPP
# define CURE_HPP

#include "./AMateria.hpp"
#include "./Character.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		~Cure();
		// AMateria	*clone() const;
		void	use(ICharacter &target);
};

#endif
