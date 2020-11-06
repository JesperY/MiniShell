objects = MiniShell.o ClassInit.o PWD.o CD.o LS.o MKDIR.o CAT.o WHOAMI.o

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

CD.o : CD.h Order.h
	g++ -c CD.cpp -Wall

LS.o : LS.h Order.h
	g++ -c LS.cpp -Wall

CAT.o : CAT.h Order.h
	g++ -c CAT.cpp -Wall

WHOANI.o : WHO.h Order.h
	g++ -c WHOAMI.cpp -wall



.PHONY : clean
clean : 
	-rm -f $(objects) *.h.gch
