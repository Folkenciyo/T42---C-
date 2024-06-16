
# variables
NAME = PhoneBook
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

# directories
SRC_DIR = src/
OBJ_DIR = obj/
INC_DIR = include/

# Control Colors
RESET		=	\033[0m
GREEN		=	\033[32m
YELLOW		=	\033[33m
BLUE		=	\033[34m
RED			=	\033[31m
UP			=	\033[A
CUT			=	\033[K

#Sources

SRC_FILES	=	main PhoneBook Contact

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
	echo "$(BLUE)Deleting all objects from /ex00...$(RESET)"; else \
	echo "No objects to remove from /ex00."; \
	fi;

# fclean rule
fclean: clean
	@if [ -f "$(NAME)" ]; then \
	rm -f $(NAME); \
	echo "$(BLUE)Deleting $(NAME) from ex00...$(RESET)"; else \
	echo "No Executable to remove from ex00."; \
	fi;

# re rule
re: fclean all

#phony
.PHONY: all clean fclean re