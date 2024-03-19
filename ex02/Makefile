CXX=g++
CXXFLAGS=-std=c++98 -Wall -Wextra -Werror
SRCDIR=src
OBJDIR=obj
SRCS=$(SRCDIR)/main.cpp
OBJS=$(SRCS:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)
TARGET=phonebook

GREEN = \033[38;2;4;231;98m
BLUE = \033[38;2;119;166;182m
RED = \033[0;31m
RESET = \033[0m

all: $(TARGET)

$(TARGET): $(OBJS)
	@echo -e "$(GREEN)Linking...$(RESET)"
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET)
	@echo -e "$(GREEN)Compilation successful!$(RESET)"

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(OBJDIR)
	@echo -e "$(BLUE)Compiling $<...$(RESET)"
	@$(CXX) $(CXXFLAGS) -c $< -o $@
	@echo -e "$(GREEN)Compiled $< successfully!$(RESET)"

clean:
	@echo -e "$(RED)Cleaning up object files...$(RESET)"
	@rm -frd obj
	@echo -e "$(RED)Cleaned.$(RESET)"

fclean: clean
	@echo -e "$(RED)Removing executable $(TARGET)...$(RESET)"
	@rm -f $(TARGET)
	@echo -e "$(RED)Removed.$(RESET)"

re: fclean all

.PHONY: all clean fclean re
