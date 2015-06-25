NAME = array

FILE = main.cpp

SRC = $(addprefix ./, $(FILE))

OBJ = $(SRC:./%.cpp=.obj/%.o)

FLAGS = -Wall -Wextra -Werror

CC = clang++

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

.obj/%.o: ./%.cpp
	mkdir -p .obj
	$(CC) -c $< -o $@ $(FLAGS)

clean:
	rm -rf .obj

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
