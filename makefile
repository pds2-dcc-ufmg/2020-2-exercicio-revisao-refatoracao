CC=g++
CFLAGS=-std=c++11 -Wall
PROGRAM=program

# Diretórios
BUILD_DIR = ./build
SRC_DIR = ./src
INCLUDE_DIR = ./include

all: ${PROGRAM}

${PROGRAM}: ${BUILD_DIR}/main.o ${BUILD_DIR}/Cliente.o ${BUILD_DIR}/Encomenda.o ${BUILD_DIR}/EncomendaNormal.o ${BUILD_DIR}/EncomendaRelampago.o
	${CC} ${CFLAGS} -o ${PROGRAM} ${BUILD_DIR}/*.o

${BUILD_DIR}/main.o: ${INCLUDE_DIR}/Cliente/Cliente.hpp ${INCLUDE_DIR}/Encomenda/Encomenda.hpp ${INCLUDE_DIR}/Encomenda/EncomendaNormal.hpp ${INCLUDE_DIR}/Encomenda/EncomendaRelampago.hpp ${SRC_DIR}/main.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/Cliente -I ${INCLUDE_DIR}/Encomenda -c ${SRC_DIR}/main.cpp -o ${BUILD_DIR}/main.o

${BUILD_DIR}/Cliente.o: ${INCLUDE_DIR}/Cliente/Cliente.hpp ${SRC_DIR}/Cliente/Cliente.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/Cliente -c ${SRC_DIR}/Cliente/Cliente.cpp -o ${BUILD_DIR}/Cliente.o

${BUILD_DIR}/Encomenda.o: ${INCLUDE_DIR}/Encomenda/Encomenda.hpp ${INCLUDE_DIR}/Cliente/Cliente.hpp ${SRC_DIR}/Encomenda/Encomenda.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/Encomenda -I ${INCLUDE_DIR}/Cliente -c ${SRC_DIR}/Encomenda/Encomenda.cpp -o ${BUILD_DIR}/Encomenda.o

${BUILD_DIR}/EncomendaNormal.o: ${INCLUDE_DIR}/Encomenda/EncomendaNormal.hpp ${INCLUDE_DIR}/Cliente/Cliente.hpp ${SRC_DIR}/Encomenda/EncomendaNormal.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/Encomenda -I ${INCLUDE_DIR}/Cliente -c ${SRC_DIR}/Encomenda/EncomendaNormal.cpp -o ${BUILD_DIR}/EncomendaNormal.o

${BUILD_DIR}/EncomendaRelampago.o: ${INCLUDE_DIR}/Encomenda/EncomendaRelampago.hpp ${INCLUDE_DIR}/Cliente/Cliente.hpp ${SRC_DIR}/Encomenda/EncomendaRelampago.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/Encomenda -I ${INCLUDE_DIR}/Cliente -c ${SRC_DIR}/Encomenda/EncomendaRelampago.cpp -o ${BUILD_DIR}/EncomendaRelampago.o

# Deletar arquivos temporários
clean:
	rm -f ${BUILD_DIR}/*