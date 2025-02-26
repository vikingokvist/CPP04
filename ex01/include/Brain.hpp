#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		std::string ideas[100];

	public:
		Brain();
		~Brain();
		
		Brain(const Brain &other);
		Brain	&operator=(const Brain &other);

		std::string		getIdeas(int index) const;
		void			setIdeas(std::string idea, int index);
		void			printIdeas(int index) const;

};

#endif