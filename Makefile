make: main.cpp camera.cpp map.cpp
	g++ -Wall -c main.cpp 
	g++ -Wall -c game.cpp
	g++ -Wall -c map.cpp
	g++ -Wall -c camera.cpp
	g++ -Wall -o main main.cpp camera.cpp map.cpp game.cpp -lsfml-graphics -lsfml-window -lsfml-system

run: main
	./main

clean:
	rm -rf main