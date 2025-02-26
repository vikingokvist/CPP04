#ifndef DOG_HPP
# define DOG_HPP

#include "./AAnimal.hpp"
#include "./Brain.hpp"

class Dog : public AAnimal
{
	private:
		Brain *brainDog;

	public:
		Dog();
		~Dog();

		Dog(const Dog &other);
		Dog &operator=(const Dog &other);
		
		void	makeSound(void) const;

		const std::string		*getIdeas(void) const;
		Brain					*getBrain(void) const;
};

#endif