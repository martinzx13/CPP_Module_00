#makefile Creation.

CC := g++
CC_FLAGS:= -Wall -Wextra -Werror -std=c++98 -pedantic
NAME := megaphone

#Get the Src code.
SRC := megaphone.cpp

#Build de Objects.
OBJ := $(SRC:.cpp=.o)

all:$(NAME)

$(NAME):$(OBJ)
	$(CC) $(CC_FLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CC) $(CC_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(NAME)

re: clean all

.PHONY: all clean re