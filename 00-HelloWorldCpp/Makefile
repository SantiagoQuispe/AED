SOURCE = hello.cpp
BIN = hello.exe
OBJ = hello.o
CXX = g++
CXXFLAGS = -std=c++2a
$(BIN): $(OBJ)
	$(CXX)	$(OBJ) -o $(BIN) $(CXXFLAGS)
run: $(BIN)
	$(BIN)
$(OBJ): $(SOURCE)
	$(CXX) -c $(SOURCE) -o $(OBJ) $(CXXFLAGS)