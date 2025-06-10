CXX = g++
CXX_FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp
OBJS = $(SRC:.cpp=.o)

# Target executable
TARGET = Animal

# Rules
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXX_FLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXX_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re