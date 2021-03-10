CC = g++
CFLAGS = -std=c++11 -Wall  -Werror
TARGET = program

BUILD_DIR    = .
SRC_DIR      = .
INCLUDE_DIR  = .

${BUILD_DIR}/${TARGET}: ${BUILD_DIR}/Cliente.o ${BUILD_DIR}/main.o
	${CC} ${CFLAGS} -o ${BUILD_DIR}/${TARGET} ${BUILD_DIR}/*.o

${BUILD_DIR}/Cliente.o: ${INCLUDE_DIR}/Cliente.hpp ${SRC_DIR}/Cliente.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/Cliente.cpp -o ${BUILD_DIR}/Cliente.o

${BUILD_DIR}/main.o: ${INCLUDE_DIR}/Encomenda.hpp ${INCLUDE_DIR}/EncomendaNormal.hpp  ${INCLUDE_DIR}/EncomendaRelampago.hpp  ${INCLUDE_DIR}/Cliente.hpp  ${SRC_DIR}/main.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/main.cpp -o ${BUILD_DIR}/main.o

# Rule for cleaning files generated during compilation. 
# Call 'make clean' to use it
clean:
	rm -f ${BUILD_DIR}/${TARGET}
	rm -f ${BUILD_DIR}/*.o



	

	
	
	
	
