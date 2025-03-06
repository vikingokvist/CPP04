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

		const std::string	getIdeas(unsigned int idx) const;
		void				setIdeas();

};

#endif