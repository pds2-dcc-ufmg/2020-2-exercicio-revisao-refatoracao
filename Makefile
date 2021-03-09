CC=g++
CFLAGS=-std=c++11 -Wall
TARGET=program

BUILD_DIR = ./build
SRC_DIR = ./src
INCLUDE_DIR = ./include

${BUILD_DIR}/${TARGET}: ${BUILD_DIR}/Cliente.o ${BUILD_DIR}/Encomenda.o ${BUILD_DIR}/EncomendaNormal.o ${BUILD_DIR}/EncomendaRelampago.o ${BUILD_DIR}/Relatorio.o ${BUILD_DIR}/main.o
	${CC} ${CFLAGS} -o ${BUILD_DIR}/${TARGET} ${BUILD_DIR}/*.o

${BUILD_DIR}/Cliente.o: ${INCLUDE_DIR}/Cliente.hpp ${SRC_DIR}/Cliente.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/Cliente.cpp -o ${BUILD_DIR}/Cliente.o

${BUILD_DIR}/Encomenda.o: ${INCLUDE_DIR}/Cliente.hpp ${INCLUDE_DIR}/Encomenda.hpp ${SRC_DIR}/Encomenda.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/Encomenda.cpp -o ${BUILD_DIR}/Encomenda.o

${BUILD_DIR}/EncomendaNormal.o: ${INCLUDE_DIR}/Cliente.hpp ${INCLUDE_DIR}/Encomenda.hpp ${INCLUDE_DIR}/EncomendaNormal.hpp ${SRC_DIR}/EncomendaNormal.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/EncomendaNormal.cpp -o ${BUILD_DIR}/EncomendaNormal.o

${BUILD_DIR}/EncomendaRelampago.o: ${INCLUDE_DIR}/Cliente.hpp ${INCLUDE_DIR}/Encomenda.hpp ${INCLUDE_DIR}/EncomendaRelampago.hpp ${SRC_DIR}/EncomendaRelampago.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/EncomendaRelampago.cpp -o ${BUILD_DIR}/EncomendaRelampago.o

${BUILD_DIR}/Relatorio.o: ${INCLUDE_DIR}/Cliente.hpp ${INCLUDE_DIR}/Encomenda.hpp ${INCLUDE_DIR}/EncomendaNormal.hpp ${INCLUDE_DIR}/EncomendaRelampago.hpp ${SRC_DIR}/Relatorio.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/Relatorio.cpp -o ${BUILD_DIR}/Relatorio.o

${BUILD_DIR}/main.o: ${INCLUDE_DIR}/Cliente.hpp ${INCLUDE_DIR}/Encomenda.hpp ${INCLUDE_DIR}/EncomendaNormal.hpp ${INCLUDE_DIR}/EncomendaRelampago.hpp ${INCLUDE_DIR}/Relatorio.hpp ${SRC_DIR}/main.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/main.cpp -o ${BUILD_DIR}/main.o

# Comando para limpar os arquivos gerados durante a compilação
# Usar o comando 'make clean'
clean:
	rm -f ${BUILD_DIR}/*

# Comando para compilar e executar o programa
# Usar o comando 'make run'
run:
	make
	build/program
