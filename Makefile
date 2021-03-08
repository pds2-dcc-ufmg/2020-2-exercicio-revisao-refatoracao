CC = g++
CFLAGS = -Wall

correio: main.o Cliente.o Encomenda.o
	${CC} ${CFLAGS} -o correio main.o Cliente.o Encomenda.o

main.o: main.cpp
	${CC} ${CFLAGS} -c main.cpp

cliente.o: Cliente.hpp Cliente.cpp
	${CC} ${CFLAGS} -c Cliente.cpp

encomenda.o: Encomenda.hpp Cliente.hpp Encomenda.cpp
	${CC} ${CFLAGS} -c Encomenda.cpp

clean:
	rm -f main *.o Cliente *.o Encomenda *.o
