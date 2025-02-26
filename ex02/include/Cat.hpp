#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"

class Cat : public AAnimal
{
	private:
		Brain *brainCat;

	public:
		Cat();
		~Cat();

		Cat(const Cat &other);
		Cat &operator=(const Cat &other);
		
		void				makeSound() const;

		std::string	const 	&getType(void) const;
		void				setType(const std::string &type);
		
		Brain				&getBrain(void) const;
		void				setIdeas(Brain const &brain);
		
};

#endif