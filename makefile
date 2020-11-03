
objects = MiniShell.o ClassInit.o PWD.o CD.o WHO.o


MiniShell : $(objects)
	g++ -o MiniShell $(objects) -Wall

MiniShell.o : MiniShell.cpp
	g++ -c MiniShell.cpp -Wall

ClassInit.o : ClassInit.h Order.h PWD.h
	g++ -c ClassInit.cpp -Wall

PWD.o : PWD.h Order.h
	g++ -c PWD.cpp -Wall

MKDIR.o : MKDIR.h Order.h
	g++ -c MKDIR.cpp -Wall

CD.0 : CD.h Order.h
	g++ -c CD.cpp -Wall




.PHONY : clean
clean : 
	-rm $(objects) *.h.gch
