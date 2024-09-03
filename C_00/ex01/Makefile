#1. Create the excecution Rules.

CC:= g++
CPP_FLAGS := -Wall -Wextra -Werror -std=c++98 -pedantic
NAME:= phonebook

#Create the src files and objects.

SRC:= phonebook.cpp
OBJ:= $(SRC:.cpp=.o)

#Create the output.

all:$(NAME)

$(NAME):$(OBJ)
	$(CC) $(CPP_FLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CC) $(CPP_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(NAME)

re: clean all

# .PHONY all clean re

