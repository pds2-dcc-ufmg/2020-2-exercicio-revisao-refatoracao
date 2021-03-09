CXX       := g++
CXX_FLAGS := -Wall -Wextra -std=c++17

BIN     := bin
SRC     := src
INCLUDE := include
EXECUTABLE  := main


all: $(BIN)/$(EXECUTABLE)

run: clean all
	clear
	@echo "🚀 Executing..."
	./$(BIN)/$(EXECUTABLE)

$(BIN)/$(EXECUTABLE): $(SRC)/*.cpp
	@echo "🚧 Building..."
	$(CXX) $(CXX_FLAGS) -I$(INCLUDE) $^ -o $@

clean:
	@echo "🧹 Clearing..."
	-rm $(BIN)/*
