NAME = abstractclass

CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -I ./include

RM = rm -rf

SRCS = main.cpp ./src/Dog.cpp ./src/Cat.cpp ./src/AAnimal.cpp ./src/Brain.cpp

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