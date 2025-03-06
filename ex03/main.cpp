#include "./include/Ice.hpp"
#include "./include/Cure.hpp"
#include "./abs/AMateria.hpp"
#include "./include/MateriaSource.hpp"
#include "./include/Character.hpp"

int		main()
{
	IMateriaSource* src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	std::cout << std::endl;

	AMateria* tmp;
	std::cout << std::endl;

	tmp = src->createMateria("ice");
	std::cout << std::endl;
	me->equip(tmp);
	tmp = src->createMateria("cure");
	std::cout << std::endl;
	me->equip(tmp);
	tmp = src->createMateria("pickaxe");
	std::cout << std::endl;
	me->equip(tmp);

	std::cout << std::endl;
	ICharacter* bob = new Character("bob");
	std::cout << std::endl;


	me->use(0, *bob);
	me->use(1, *bob);
	me->unequip(0);
	me->use(3, *bob);

	std::cout << std::endl;
	delete bob; delete me; delete src;
	return (0);
}
