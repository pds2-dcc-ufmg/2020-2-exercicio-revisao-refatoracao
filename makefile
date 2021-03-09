CC=g++

DEPS = Cliente.hpp Encomenda.hpp EncomendaNormal.hpp EncomendaRelampago.

OBJ = Cliente.o Encomenda.o EncomendaNormal.o EncomendaRelampago.o
%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)
	
main: $(OBJ)
	$(CC) main.cpp -o main $(OBJ)
	
clean: 
	del $(OBJ)

erase:
	del $(OBJ)
	del main.exe