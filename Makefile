CC=g++
CFLAGS=-std=c++11 -Wall
TARGET=program

BUILD_DIR    = ./build
SRC_DIR    = ./src
INCLUDE_DIR  = ./include

#${BUILD_DIR}/EncomendaNormal.o ${BUILD_DIR}/EncomendaRelampago.o depopips de cliente.o
${BUILD_DIR}/${TARGET}: ${BUILD_DIR}/EncomendaNormal.o ${BUILD_DIR}/EncomendaRelampago.o ${BUILD_DIR}/Cliente.o ${BUILD_DIR}/main.o
	${CC} ${CFLAGS} -o ${BUILD_DIR}/${TARGET} ${BUILD_DIR}/*.o

${BUILD_DIR}/EncomendaNormal.o: ${INCLUDE_DIR}/encomenda/EncomendaNormal.hpp ${SRC_DIR}/encomenda/EncomendaNormal.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/encomenda/ -I ${INCLUDE_DIR}/cliente/ -c ${SRC_DIR}/encomenda/EncomendaNormal.cpp -o ${BUILD_DIR}/EncomendaNormal.o

${BUILD_DIR}/EncomendaRelampago.o: ${INCLUDE_DIR}/encomenda/EncomendaRelampago.hpp ${SRC_DIR}/encomenda/EncomendaRelampago.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/encomenda/ -I ${INCLUDE_DIR}/cliente/ -c ${SRC_DIR}/encomenda/EncomendaRelampago.cpp -o ${BUILD_DIR}/EncomendaRelampago.o

${BUILD_DIR}/Cliente.o: ${INCLUDE_DIR}/cliente/Cliente.hpp ${SRC_DIR}/cliente/Cliente.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/cliente/ -c ${SRC_DIR}/cliente/Cliente.cpp -o ${BUILD_DIR}/Cliente.o

${BUILD_DIR}/main.o: ${INCLUDE_DIR}/cliente/Cliente.hpp ${INCLUDE_DIR}/encomenda/EncomendaNormal.hpp ${INCLUDE_DIR}/encomenda/EncomendaRelampago.hpp ${SRC_DIR}/main.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/encomenda/ -I ${INCLUDE_DIR}/cliente/ -c ${SRC_DIR}/main.cpp -o ${BUILD_DIR}/main.o

# Rule for cleaning files generated during compilation. 
# Call 'make clean' to use it
clean:
	rm -f ${BUILD_DIR}/* 
