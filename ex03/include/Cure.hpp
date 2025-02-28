#ifndef CURE_HPP
# define CURE_HPP

#include "../abs/AMateria.hpp"
#include "./Character.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		~Cure();

		Cure(const Cure &copy);
		Cure &operator=(const Cure &copy);
		AMateria	*clone() const;

		void	use(ICharacter &target);
};

#endif
