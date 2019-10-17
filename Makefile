#Make file for the project Free Cell Game

main: main.o Game.o
	g++ -o main main.o Game.o

main.o: ./src/main.cpp ./include/Game.h
	g++ -c ./src/main.cpp

Game.o: ./src/Game.cpp ./include/Game.h ./include/Board.h
	g++ -c ./src/Game.cpp

clean:
	rm *.o main
