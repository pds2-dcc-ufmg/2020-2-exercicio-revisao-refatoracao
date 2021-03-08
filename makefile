main.exe:main.o Cliente.o 
	g++ main.o Cliente.o -o main.exe


main.o:main.cpp 		
	g++ -c main.cpp

Cliente.o:Cliente.cpp
	g++ -c Cliente.cpp

clean:
	del *.o
	del *.exe


