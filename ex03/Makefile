NAME = interfaceandrecap

CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -I ./include -I ./abs
RM = rm -rf

SRCS = main.cpp ./src/Ice.cpp ./src/Cure.cpp ./src/AMateria.cpp \
	./src/MateriaSource.cpp ./src/Character.cpp
	
OBJS = $(SRCS:.cpp=.o)


all: $(NAME)

%.o: %.cpp
	$(CPP) $(CPPFLAGS) -o $@ -c $<

$(NAME): $(OBJS)
	$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean:
	$(RM) $(OBJS) $(NAME)

re: fclean all
