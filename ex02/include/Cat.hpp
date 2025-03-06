#ifndef CAT_HPP
# define CAT_HPP

#include "./AAnimal.hpp"
#include "./Brain.hpp"

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
		
		const std::string	getIdeas(unsigned int idx) const;
		Brain				*getBrain(void) const;
		
};

#endif
