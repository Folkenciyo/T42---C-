
# variables
NAME = Animal
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

# directories
SRC_DIR = src/
OBJ_DIR = obj/
INC_DIR = include/

# Control Colors
RESET		=	\033[0m
BOLD		=	\033[1m
UNDERLINE	=	\033[4m
BLINK		=	\033[5m
REVERSE		=	\033[7m
HIDDEN		=	\033[8m

# Regular Colors
BLACK		=	\033[30m
RED			=	\033[31m
GREEN		=	\033[32m
YELLOW		=	\033[33m
BLUE		=	\033[34m
MAGENTA		=	\033[35m
CYAN		=	\033[36m
WHITE		=	\033[37m

# Bold
BOLD_BLACK	=	\033[1;30m
BOLD_RED	=	\033[1;31m
BOLD_GREEN	=	\033[1;32m
BOLD_YELLOW	=	\033[1;33m
BOLD_BLUE	=	\033[1;34m
BOLD_MAGENTA=	\033[1;35m
BOLD_CYAN	=	\033[1;36m
BOLD_WHITE	=	\033[1;37m

# Underline
UNDERLINE_BLACK	=	\033[4;30m
UNDERLINE_RED	=	\033[4;31m
UNDERLINE_GREEN	=	\033[4;32m
UNDERLINE_YELLOW=	\033[4;33m
UNDERLINE_BLUE	=	\033[4;34m
UNDERLINE_MAGENTA=\033[4;35m
UNDERLINE_CYAN	=	\033[4;36m
UNDERLINE_WHITE	=	\033[4;37m

# Background
BG_BLACK	=	\033[40m
BG_RED		=	\033[41m
BG_GREEN	=	\033[42m
BG_YELLOW	=	\033[43m
BG_BLUE		=	\033[44m
BG_MAGENTA	=	\033[45m
BG_CYAN		=	\033[46m
BG_WHITE	=	\033[47m

# High Intensity
HI_BLACK	=	\033[0;90m
HI_RED		=	\033[0;91m
HI_GREEN	=	\033[0;92m
HI_YELLOW	=	\033[0;93m
HI_BLUE		=	\033[0;94m
HI_MAGENTA	=	\033[0;95m
HI_CYAN		=	\033[0;96m
HI_WHITE	=	\033[0;97m

# Bold High Intensity
BOLD_HI_BLACK	=	\033[1;90m
BOLD_HI_RED		=	\033[1;91m
BOLD_HI_GREEN	=	\033[1;92m
BOLD_HI_YELLOW	=	\033[1;93m
BOLD_HI_BLUE	=	\033[1;94m
BOLD_HI_MAGENTA	=	\033[1;95m
BOLD_HI_CYAN	=	\033[1;96m
BOLD_HI_WHITE	=	\033[1;97m

# High Intensity backgrounds
BG_HI_BLACK	=	\033[0;100m
BG_HI_RED	=	\033[0;101m
BG_HI_GREEN	=	\033[0;102m
BG_HI_YELLOW=	\033[0;103m
BG_HI_BLUE	=	\033[0;104m
BG_HI_MAGENTA=	\033[0;105m
BG_HI_CYAN	=	\033[0;106m
BG_HI_WHITE	=	\033[0;107m

#Sources

SRC_FILES	=	main Animal Dog Cat WrongAnimal WrongCat WrongDog Brain

SRCS 		= 	$(addprefix $(SRC_DIR), $(addsuffix .cpp, $(SRC_FILES)))
OBJS 		= 	$(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))

###

OBJF		=	.cache_exists

#all rule
all: $(NAME)
	@printf "\n"
	@printf "$(GREEN)             _______ _____            ___            __     __    \n$(RESET)"
	@printf "$(GREEN).-----.--.--|   _   | _   |   .-----.'  _|   .----._|  |_ _|  |_  \n$(RESET)"
	@printf "$(GREEN)|  -__|_   _|.  |   |.|   |   |  _  |   _|   |  __|_    _|_    _| \n$(RESET)"
	@printf "$(GREEN)|_____|__.__|.  |   |-|.  |   |_____|__|     |____| |__|   |__|   \n$(RESET)"
	@printf "$(GREEN)            |:  1   | |:  |									   \n$(RESET)"
	@printf "$(GREEN)            |::.. . | |::.|									   \n$(RESET)"
	@printf "$(GREEN)            '-------' '---'							  	       \n$(RESET)"	
	@printf "\n"
#font: cricket


# compile the executable
$(NAME): $(OBJS)
	@echo "$(YELLOW)Compiling [$(NAME)]...$(RESET)"
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "$(GREEN)Finished [$(NAME)]$(RESET)"

# compile objects
$(OBJ_DIR)%.o:$(SRC_DIR)%.cpp | $(OBJF)
	@echo "$(YELLOW)Compiling [$@]...$(RESET)"
	@$(CC) $(CFLAGS) -I $(INC_DIR) -o $@ -c $<
	@printf "$(UP)$(CUT)"
	@echo "$(GREEN)Finished [$@]$(RESET)"
	@printf "$(UP)$(CUT)"

$(OBJF):
		@mkdir -p $(OBJ_DIR)

# clean rule
clean:
	@if [ -d "$(OBJ_DIR)" ]; then \
	rm -rf $(OBJ_DIR); \
	echo "$(BLUE)Deleting all objects from /ex01...$(RESET)"; else \
	echo "No objects to remove from /ex01."; \
	fi;

# fclean rule
fclean: clean
	@if [ -f "$(NAME)" ]; then \
	rm -f $(NAME); \
	echo "$(BLUE)Deleting $(NAME) from ex01...$(RESET)"; else \
	echo "No Executable to remove from ex01."; \
	fi;

# re rule
re: fclean all

#phony
.PHONY: all clean fclean re