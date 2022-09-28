#==============================================================================#
#..............................................................................#
#...............................DECLARATIONS...................................#
#..............................................................................#
#==============================================================================#

## Compilation

NAME		=	polymat

CXX			=	clang++

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98 -g3

## Sources

SRCDIR		=	src/

SRCFILE		=	main.cpp AMateria.cpp Character.cpp Cure.cpp\
				Ice.cpp MateriaSource.cpp

SRC			=	$(addprefix $(SRCDIR), $(SRCFILE))

INCL_DIR	=	includes/

DEPS		=	$(wildcard $(INCL_DIR)*.hpp)

## Objects

OBJDIR	=	obj/

OBJ		=	$(subst $(SRCDIR), $(OBJDIR), $(SRC:.cpp=.o))

#==============================================================================#
#..............................................................................#
#....................................RULES.....................................#
#..............................................................................#
#==============================================================================#

all			:	$(NAME)

$(NAME)		:	$(OBJ)
				$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

$(OBJDIR)%.o:	$(SRCDIR)%.cpp Makefile $(DEPS)
				mkdir -p $(OBJDIR)
				$(CXX) $(CXXFLAGS) -c $< -o $@ -I $(INCL_DIR)

clean		:
				rm -rf $(OBJ)

fclean		:	clean
				rm -rf $(NAME)

re			:	fclean all

.PHONY		:	all clean fclean re
