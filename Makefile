CXX = g++
CXXFLAGS = -Wall -std=c++11

TARGET = AdventureGames

SRCS = Character.cpp Chest.cpp Game.cpp Location.cpp Potion.cpp Puzzle.cpp Savesystem.cpp main.cpp

all:
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(TARGET)

clean:
	rm -f $(TARGET)