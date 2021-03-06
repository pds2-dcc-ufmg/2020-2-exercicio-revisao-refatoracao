output: cliente.o encomenda.o encomendaNormal.o encomendaRelampago.o main.o
	g++ cliente.o encomenda.o encomendaNormal.o encomendaRelampago.o main.o -o output

cliente.o: src/Cliente.cpp headers/Cliente.hpp
	g++ -c src/Cliente.cpp

encomenda.o: src/Encomenda.cpp headers/Encomenda.hpp headers/Cliente.hpp
	g++ -c src/Encomenda.cpp

encomendaNormal.o: src/EncomendaNormal.cpp headers/EncomendaNormal.hpp headers/Encomenda.hpp
	g++ -c src/EncomendaNormal.cpp

encomendaRelampago.o: src/EncomendaRelampago.cpp headers/EncomendaRelampago.hpp headers/Encomenda.hpp
	g++ -c src/EncomendaRelampago.cpp

main.o: src/main.cpp headers/Cliente.hpp headers/Encomenda.hpp headers/EncomendaNormal.hpp headers/EncomendaRelampago.hpp
	g++ -c src/main.cpp

output: cliente.o encomenda.o encomendaNormal.o encomendaRelampago.o main.o
	g++ cliente.o encomenda.o encomendaNormal.o encomendaRelampago.o main.o -o output