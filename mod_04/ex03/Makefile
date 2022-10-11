
NAME	=	interface1
CC		=	c++
W_FLAGS	=	-Wall  -Werror #-Wextra
S_FLAGS =	-std=c++98
RM		=	rm -rf
OBJ 	=	$(patsubst %.cpp, %.o, $(SRC))

.PHONY:		all clean fclean re test


RED= \033[4;31m
GREEN= \033[0;32m
NC= \033[0;0m

INC		=	AMateria.hpp Character.hpp Cure.hpp Ice.hpp MateriaSource.hpp ICharacter.hpp IMateriaSource.hpp
SRC		=	main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) $(W_FLAGS) $(S_FLAGS) $(OBJ) -o $(NAME)
			@echo -e "$(GREEN)\t\n $(NAME) compiled!\n $(NC)"

%.o : %.cpp	Makefile $(INC)
			$(CC) $(W_FLAGS) $(S_FLAGS) -c $< -o $@

clean:
			$(RM) $(OBJ)
			@echo -e "$(RED)*.o files is clean!$(NC)"

fclean:		clean
			$(RM) $(NAME)
			@echo -e "$(RED)All files is clean!$(NC)"

re:			fclean all

test:		$(NAME)
			valgrind ./interface1