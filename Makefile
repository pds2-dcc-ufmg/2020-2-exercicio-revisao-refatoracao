CC = g++
CFLAGS = -Wall

correio: main.o Cliente.o
	${CC} ${CFLAGS} -o correio main.o Cliente.o

main.o: main.cpp
	${CC} ${CFLAGS} -c main.cpp

cliente.o: Cliente.hpp Cliente.cpp
	${CC} ${CFLAGS} -c Cliente.cpp

clean:
	rm -f main.o Cliente.o
