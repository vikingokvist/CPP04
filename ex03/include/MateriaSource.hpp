#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "../abs/IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *materia[4];

	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(MateriaSource const &copy);
		MateriaSource const	&operator=(MateriaSource const &copy);

		void 		learnMateria(AMateria *materia);
		AMateria 	*createMateria(std::string const &type);
};

#endif