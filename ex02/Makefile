CXX = g++
CXX_FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Animal.cpp AbAnimal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
OBJS_DIR = objs
OBJS = $(addprefix $(OBJS_DIR)/, $(SRC:.cpp=.o))

# Target executable
TARGET = AbAnimal

# Rules
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXX_FLAGS) -o $(TARGET) $(OBJS)

$(OBJS_DIR)/%.o: %.cpp
	@mkdir -p $(OBJS_DIR)
	$(CXX) $(CXX_FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS_DIR)

fclean: clean
	rm -rf $(TARGET)

re: fclean all

.PHONY: all clean fclean re