#	Includes
-include includes.mk
-include sources.mk

#	Names
NAME				=	philo

#	Colors
BLACK				=	\033[0;30m
RED					=	\033[0;31m
GREEN				=	\033[0;32m
ORANGE				=	\033[0;33m
BLUE				=	\033[0;34m
PURPLE				=	\033[0;35m
CYAN				=	\033[0;36m
LIGHT_GRAY			=	\033[0;37m
DARK_GRAY			=	\033[1;30m
LIGHT_RED			=	\033[1;31m
LIGHT_GREEN			=	\033[1;32m
YELLOW				=	\033[1;33m
LIGHT_BLUE			=	\033[1;34m
LIGHT_PURPLE		=	\033[1;35m
LIGHT_CYAN			=	\033[1;36m
WHITE				=	\033[1;37m
NO_COLOR			=	\033[0m

#	Compilation
GCC					=	gcc
FLAGS				=	-Wall -Wextra -Werror -O3 -Ofast -flto -march=native -ffast-math

INCLUDES_PATH		=	./includes

OBJS				=	$(SOURCES:.c=.o)

#	Rules
#	Default rule
all:	$(NAME)

#	How to convert .c in .o
%.o:	%.c $(INCLUDES)
#	Compile
	@$(GCC)																	\
	$(FLAGS)																\
	-I $(INCLUDES_PATH)														\
	-c $<																	\
	-o $@
#	Print end of compilation
	@printf "\033[2K\r$(BLUE)$(NAME)$(NO_COLOR)$(BLUE): $(PURPLE)$<$(NO_COLOR)"

#	Compile minishell program
$(NAME):	$(INCLUDES) $(OBJS)
#	Compile command
	@$(GCC)									\
	$(FLAGS)								\
	-I $(INCLUDES_PATH)						\
	$(OBJS)									\
	-o $(NAME)
#	Print end of compilation
	@printf "\033[2K\r$(BLUE)$(NAME)$(NO_COLOR)$(BLUE): $(GREEN)Compiled [√]$(NO_COLOR)\n"

#	Clean
clean:
	@$(RM) $(OBJS)
	@printf "$(BLUE)$(NAME): $(LIGHT_RED)Cleaning all .o in project and libraries.\n$(NO_COLOR)"

#	Full clean
fclean:		clean
	@$(RM) $(NAME)
	@printf "$(BLUE)$(NAME): $(RED)Cleaning compiled programs $(NAME).\n$(NO_COLOR)"

#	Recompile all
re:		fclean all

#	Clean old .o - list sources and headers - compile - run
r:	gmk all
	@$(MAKE) clean
	./$(NAME) $(filter-out $@,$(MAKECMDGOALS))

#	Clean old .o - list sources and headers - compile - run with leaks command
rl:	gmk all
	@$(MAKE) clean
	leaks --atExit -- ./$(NAME) $(filter-out $@,$(MAKECMDGOALS))

#	Check norminette
norminette: clean
	@printf "$(BLUE)$(NAME): $(GREEN)norminette -> sources\n$(NO_COLOR)"
	@norminette sources
	@echo " "
	@printf "$(BLUE)$(NAME): $(GREEN)norminette -> includes\n$(NO_COLOR)"
	@norminette includes

#	Prepare to push project
end:
	@make fclean
	@make gmk
	@make all
	@make norminette
	@make fclean
	@printf "$(BLUE)$(NAME): $(LIGHT_CYAN)Prepared to be pushed.\n$(NO_COLOR)"

#	Generate .mk (Makefile includes)
gmk:
	@find $(INCLUDES_PATH) -type f -name '*.h' | sed 's/^/INCLUDES += /' > includes.mk
	@find sources -type f -name '*.c' | sed 's/^/SOURCES += /' > sources.mk

.PHONY:	all oclean clean fclean re r rl norminette end gmk