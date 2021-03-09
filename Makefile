CC=g++
CFLAGS=-std=c++11 -Wall
TARGET=program

BUILD_DIR = ./build
SRC_DIR = ./src
INCLUDE_DIR = ./include

${BUILD_DIR}/${TARGET}: ${BUILD_DIR}/Cliente.o ${BUILD_DIR}/Encomenda.o ${BUILD_DIR}/main.o
	${CC} ${CFLAGS} -o ${BUILD_DIR}/${TARGET} ${BUILD_DIR}/*.o

${BUILD_DIR}/Cliente.o: ${INCLUDE_DIR}/Cliente.hpp ${SRC_DIR}/Cliente.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/Cliente.cpp -o ${BUILD_DIR}/Cliente.o
	
${BUILD_DIR}/Encomenda.o: ${INCLUDE_DIR}/Encomenda.hpp ${SRC_DIR}/Encomenda.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/Encomenda.cpp -o ${BUILD_DIR}/Encomenda.o

${BUILD_DIR}/main.o: ${INCLUDE_DIR}/Cliente.hpp ${INCLUDE_DIR}/Encomenda.hpp ${INCLUDE_DIR}/EncomendaNormal.hpp ${INCLUDE_DIR}/EncomendaRelampago.hpp ${SRC_DIR}/main.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/main.cpp -o ${BUILD_DIR}/main.o
