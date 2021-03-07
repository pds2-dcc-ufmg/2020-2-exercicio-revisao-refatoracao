output: cliente.o encomenda.o encomendaNormal.o encomendaRelampago.o relatorio.o main.o
	g++ build/cliente.o build/encomenda.o build/encomendaNormal.o build/encomendaRelampago.o build/main.o build/relatorio.o -o build/output

cliente.o: src/Cliente.cpp headers/Cliente.hpp
	g++ -c src/Cliente.cpp -o build/cliente.o

encomenda.o: src/Encomenda.cpp headers/Encomenda.hpp headers/Cliente.hpp
	g++ -c src/Encomenda.cpp -o build/encomenda.o

encomendaNormal.o: src/EncomendaNormal.cpp headers/EncomendaNormal.hpp headers/Encomenda.hpp
	g++ -c src/EncomendaNormal.cpp -o build/encomendaNormal.o

encomendaRelampago.o: src/EncomendaRelampago.cpp headers/EncomendaRelampago.hpp headers/Encomenda.hpp
	g++ -c src/EncomendaRelampago.cpp -o build/encomendaRelampago.o

relatorio.o: src/Relatorio.cpp headers/Relatorio.hpp headers/Cliente.hpp headers/EncomendaNormal.hpp headers/EncomendaRelampago.hpp
	g++ -c src/Relatorio.cpp -o build/relatorio.o
 
main.o: src/main.cpp headers/Cliente.hpp headers/Encomenda.hpp headers/EncomendaNormal.hpp headers/EncomendaRelampago.hpp headers/Relatorio.hpp
	g++ -c src/main.cpp -o build/main.o

clean:
	del build\*.o build\output.exe

all:
	g++ src/Cliente.cpp src/Encomenda.cpp src/EncomendaNormal.cpp src/EncomendaRelampago.cpp src/Relatorio.cpp src/main.cpp -o build/output