# ----- Set up -----
TARGET := calculator_1_0_0
SRCS := calculator_1_0_0.cpp
HEADERS := std_lib_facilities.h

# Directories
SRC_DIR := ./src/c++11
BUILD_DIR := ./build
INC_DIR := ./include

# Compiler choices
CC = gcc
CXX = g++

# Manual flags
ERR_FLAGS = -Wall
STD_FLAGS = -std=c++11

# Auto lists
OBJS := $(SRCS:%=$(BUILD_DIR)/%.o)
HDRL := $(addprefix $(INC_DIR)/,$(HEADERS))

# Auto Flags
INC_FLAGS = $(addprefix -I,$(INC_DIR))


# ----- Build rules -----
# Final executable
all: $(BUILD_DIR)/$(TARGET)

# Linker to executable
$(BUILD_DIR)/$(TARGET): $(OBJS) $(HDRL)
	$(CXX) $(OBJS) -o $@

# Source code to object files
$(OBJS): $(SRC_DIR)/$(SRCS) $(HDRL)
	$(CXX) $(ERR_FLAGS) $(STD_FLAGS) -c $< -o $@ $(INC_FLAGS)

# Clean rule
.PHONY: run clean
run:
	$(BUILD_DIR)/$(TARGET)

clean:
	rm -f $(BUILD_DIR)/*.o $(BUILD_DIR)/$(TARGET)
