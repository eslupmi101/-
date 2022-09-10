#Name
NAME =			practice

#Compiler
CC = 			clang++
CFLAGS = 		-Wall -Wextra -Werror -std=c++98
LIBRARIES =
CFLAG = 		-c
OFLAG =			-o
IFLAG =			-I

#Make
MAKE = 			make -s -C
MAKE_CLEAN = 	make clean -s -C
MAKE_FCLEAN = 	make fclean -s -C

#Unzip
UNZIP =			unzip -X -o -q

#Shell
MKDIR =			mkdir -p
CP =			cp
RM =			rm -rf
START = 		./

#Directories
SOURCES_DIR =	./src
OBJECTS_DIR =	./objs
HEADERS_DIR =	./include
PRACTICE_RLZ_DIR = ./src/practice

#Files
FILES =			main.cpp \
				main_page.cpp \
				list_of_practicums.cpp \
				ft_print_cout.cpp \
				ft_input.cpp \
				contacts_of_student.cpp \
				$(PRACTICE_RLZ_DIR) practice_1.cpp \
				$(PRACTICE_RLZ_DIR) practice_1_1.cpp \
				$(PRACTICE_RLZ_DIR) practice_1_2.cpp \
				$(PRACTICE_RLZ_DIR) practice_1_3.cpp \
				$(PRACTICE_RLZ_DIR) practice_1_4.cpp \
				$(PRACTICE_RLZ_DIR) practice_1_5.cpp \
				$(PRACTICE_RLZ_DIR) practice_1_6.cpp \
				$(PRACTICE_RLZ_DIR) practice_1_1_rlz.cpp \
				$(PRACTICE_RLZ_DIR) practice_1_2_rlz.cpp \
				$(PRACTICE_RLZ_DIR) practice_1_3_rlz.cpp \
				$(PRACTICE_RLZ_DIR) practice_1_4_rlz.cpp \
				$(PRACTICE_RLZ_DIR) practice_1_5_rlz.cpp \
				$(PRACTICE_RLZ_DIR) practice_1_6_rlz.cpp \
				$(PRACTICE_RLZ_DIR) is_fructional_input.cpp \
				$(PRACTICE_RLZ_DIR) print_rlz.cpp \
				./src/to/ft_itoa.cpp

#Srcs
SRCS =			$(foreach FILE, $(FILES), $(shell find $(SOURCES_DIR) -name $(FILE)))

#Objs
OBJS =			$(patsubst $(SOURCES_DIR)/%, $(OBJECTS_DIR)/%, $(SRCS:.cpp=.o))

$(OBJECTS_DIR)/%.o: $(SOURCES_DIR)/%.cpp
	@$(MKDIR) $(@D)
	@$(CC) $(CFLAGS) $(IFLAG) $(HEADERS_DIR) $(CFLAG) $(OFLAG) $@ $<

#add clean, start (my idea)
all: $(NAME) clean

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) $(LIBRARIES) $(OFLAG) $(NAME)
	@echo "Done!"

start:
	@$(START)$(NAME)

clean:
	@$(RM) $(OBJECTS_DIR)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all norminette clean fclean re

#src by https://github.com/appinha/42cursus-00-Libft/blob/master/libft/includes/libft.h
#by https://github.com/gdamion