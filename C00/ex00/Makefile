#1. Rules of compilation a nd Variables.

CC:= g++
CPP_FLAGS := -Wall -Wextra -Werror -g
NAME := megaphone

#2 Src files.
SRC := megaphone.cpp
OBJ := $(SRC:.cpp=.o)

#Output file name.
all : $(NAME)

#Rule to build the final excecutable.
$(NAME): $(OBJ)
	$(CC) $(CPP_FLAGS) -o $(NAME) $(OBJ)

#Rule to compile cpp to .o files.
%.o: %.cpp
	$(CC) $(CPP_FLAGS) -c $< -o $@
#clean files 
clean:
	rm -f $(OBJ) $(NAME)

re: clean all
#phony targets
.PHONY: all clean
#clean the build files



