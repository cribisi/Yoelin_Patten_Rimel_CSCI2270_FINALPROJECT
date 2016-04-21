all: DungeonsOfTheCursed clean

DungeonsOfTheCursed: DungeonsMain.o GameBoard.o Player.o Node.o
	g++ -std=c++11 DungeonsMain.o GameBoard.o Player.o Node.o -o DungeonsOfTheCursed_EXE

DungeonsMain.o: DungeonsMain.cpp
	g++ -c -std=c++11 DungeonsMain.cpp

GameBoard.o: GameBoard.cpp
	g++ -c -std=c++11 GameBoard.cpp

Player.o: Player.cpp
	g++ -c -std=c++11 Player.cpp

Node.o: Node.cpp
	g++ -c -std=c++11 Node.cpp

clean:
	rm -f DungeonsMain.o 
	rm -f GameBoard.o
	rm -f Player.o
	rm -f Node.o

