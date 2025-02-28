#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "../abs/ICharacter.hpp"
#include "./MateriaSource.hpp"


class Character : public ICharacter
{
	private:
		AMateria *inventory[4];
		std::string name;
		
	public:
		Character();
		Character(std::string namex);
		~Character();

		Character(const Character &copy);
		Character &operator=(const Character &copy);

		std::string const 	&getName() const;

		void 				equip(AMateria *m);
		void 				unequip(int idx);
		void 				use(int idx, ICharacter &target);
};

#endif