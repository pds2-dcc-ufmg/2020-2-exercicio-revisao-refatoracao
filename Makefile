CC=g++
CFLAGS=-Wall
TARGET=program.out

BUILD_DIR=./build
SRC_DIR=./src
INCLUDE_DIR=./include


# Linking all objects
${BUILD_DIR}/${TARGET}: ${BUILD_DIR}/Cliente.o ${BUILD_DIR}/Encomenda.o ${BUILD_DIR}/EncomendaNormal.o ${BUILD_DIR}/EncomendaRelampago.o ${BUILD_DIR}/main.o
	${CC} ${CFLAGS} -o ${BUILD_DIR}/${TARGET} ${BUILD_DIR}/*.o

# Compiling <Cliente>
${BUILD_DIR}/Cliente.o: ${INCLUDE_DIR}/Cliente/Cliente.hpp ${SRC_DIR}/Cliente/Cliente.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/Cliente/ -c ${SRC_DIR}/Cliente/Cliente.cpp -o ${BUILD_DIR}/Cliente.o

# Compiling <Encomenda>
${BUILD_DIR}/Encomenda.o: ${INCLUDE_DIR}/Encomenda/Encomenda.hpp ${SRC_DIR}/Encomenda/Encomenda.cpp ${INCLUDE_DIR}/Cliente/Cliente.hpp ${SRC_DIR}/Cliente/Cliente.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/Encomenda/ -I ${INCLUDE_DIR}/Cliente/ -c ${SRC_DIR}/Encomenda/Encomenda.cpp -o ${BUILD_DIR}/Encomenda.o

# Compiling <Encomenda Normal>
${BUILD_DIR}/EncomendaNormal.o: ${INCLUDE_DIR}/Encomenda/EncomendaNormal.hpp ${SRC_DIR}/Encomenda/EncomendaNormal.cpp ${INCLUDE_DIR}/Cliente/Cliente.hpp ${SRC_DIR}/Cliente/Cliente.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/Encomenda/ -I ${INCLUDE_DIR}/Cliente/ -c ${SRC_DIR}/Encomenda/EncomendaNormal.cpp -o ${BUILD_DIR}/EncomendaNormal.o

# Compiling <Encomenda Relampago>
${BUILD_DIR}/EncomendaRelampago.o: ${INCLUDE_DIR}/Encomenda/EncomendaRelampago.hpp ${SRC_DIR}/Encomenda/EncomendaRelampago.cpp ${INCLUDE_DIR}/Cliente/Cliente.hpp ${SRC_DIR}/Cliente/Cliente.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/Encomenda/ -I ${INCLUDE_DIR}/Cliente/ -c ${SRC_DIR}/Encomenda/EncomendaRelampago.cpp -o ${BUILD_DIR}/EncomendaRelampago.o

# Compiling <main>
${BUILD_DIR}/main.o: ${INCLUDE_DIR}/Cliente/Cliente.hpp ${INCLUDE_DIR}/Encomenda/Encomenda.hpp ${INCLUDE_DIR}/Encomenda/EncomendaNormal.hpp ${INCLUDE_DIR}/Encomenda/EncomendaRelampago.hpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/Cliente/ -I ${INCLUDE_DIR}/Encomenda/ -c ${SRC_DIR}/main.cpp -o ${BUILD_DIR}/main.o

# Delete build files
clean:
	rm -f ${BUILD_DIR}/*