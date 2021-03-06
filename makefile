output: cliente.o encomenda.o encomendaNormal.o encomendaRelampago.o main.o
	g++ cliente.o encomenda.o encomendaNormal.o encomendaRelampago.o main.o -o output

cliente.o: src/cliente/Cliente.cpp src/cliente/Cliente.hpp
	g++ -c src/cliente/Cliente.cpp

encomenda.o: src/encomenda/Encomenda.cpp src/encomenda/Encomenda.hpp src/cliente/Cliente.hpp
	g++ -c src/encomenda/Encomenda.cpp

encomendaNormal.o: src/encomenda/encomendaNormal/EncomendaNormal.cpp src/encomenda/encomendaNormal/EncomendaNormal.hpp src/encomenda/Encomenda.hpp
	g++ -c src/encomenda/encomendaNormal/EncomendaNormal.cpp

encomendaRelampago.o: src/encomenda/encomendaRelampago/EncomendaRelampago.cpp src/encomenda/encomendaRelampago/EncomendaRelampago.hpp src/encomenda/Encomenda.hpp
	g++ -c src/encomenda/encomendaRelampago/EncomendaRelampago.cpp

main.o: src/main.cpp src/cliente/Cliente.hpp src/encomenda/Encomenda.hpp src/encomenda/encomendaNormal/EncomendaNormal.hpp src/encomenda/encomendaRelampago/EncomendaRelampago.hpp
	g++ -c src/main.cpp

output: cliente.o encomenda.o encomendaNormal.o encomendaRelampago.o main.o
	g++ cliente.o encomenda.o encomendaNormal.o encomendaRelampago.o main.o -o output