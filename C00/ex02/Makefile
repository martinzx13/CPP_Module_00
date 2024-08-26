
NAME := account

CC:= g++
CC_FLAGS:= -Wall -Wextra -Werror -std=c++98 -pedantic

SRC:= Account.cpp tests.cpp
OBJ:= $(SRC:.cpp=.o)

all:$(NAME)

$(NAME):$(OBJ)
	$(CC) $(CC_FLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CC) $(CC_FLAGS) -c $< -o $@

test: clean all
	./$(NAME) > text.txt

clean:
	rm -f $(OBJ) $(NAME)

re: clean all