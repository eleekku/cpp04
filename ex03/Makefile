NAME		=	Materials

SRC			=	main.cpp Amateria.cpp Ice.cpp Cure.cpp Character.cpp MateriaSource.cpp

OBJS		=	$(SRC:.cpp=.o)

COMPILE		=	c++

FLAGS		=	-Wall -Wextra -Werror -std=c++17 

EXE_NAME	=	-o AbstractAnimal

EXEC		=	AbstractAnimal

# ------------------------------------- RULES ---------------------------------
all: $(NAME)

$(NAME): $(OBJS)
	$(COMPILE) $(FLAGS) $(OBJS) $(EXE_NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(EXEC)
	
re:	fclean all

.cpp.o:
	${COMPILE} ${FLAGS} -c $< -o ${<:.cpp=.o}

.PHONY:	all clean fclean re
