output: cliente.o encomenda.o encomendaNormal.o encomendaRelampago.o main.o
	g++ build/cliente.o build/encomenda.o build/encomendaNormal.o build/encomendaRelampago.o build/main.o -o build/output

cliente.o: src/Cliente.cpp headers/Cliente.hpp
	g++ -c src/Cliente.cpp -o build/cliente.o

encomenda.o: src/Encomenda.cpp headers/Encomenda.hpp headers/Cliente.hpp
	g++ -c src/Encomenda.cpp -o build/encomenda.o

encomendaNormal.o: src/EncomendaNormal.cpp headers/EncomendaNormal.hpp headers/Encomenda.hpp
	g++ -c src/EncomendaNormal.cpp -o build/encomendaNormal.o

encomendaRelampago.o: src/EncomendaRelampago.cpp headers/EncomendaRelampago.hpp headers/Encomenda.hpp
	g++ -c src/EncomendaRelampago.cpp -o build/encomendaRelampago.o

main.o: src/main.cpp headers/Cliente.hpp headers/Encomenda.hpp headers/EncomendaNormal.hpp headers/EncomendaRelampago.hpp
	g++ -c src/main.cpp -o build/main.o

clean:
	rm *.o output