CXX = g++
CXXFLAGS = -Wall

TARGET = questgamr

SRC = main.cpp Game.cpp Character.cpp Chest.cpp Location.cpp Puzzle.cpp Potion.cpp Savesystem.cpp

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)