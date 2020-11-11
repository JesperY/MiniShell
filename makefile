

objects = MiniShell.o ClassInit.o PWD.o CD.o LS.o MKDIR.o MV.o RM.o CAT.o WHOAMI.o DIFF.o WC.o CP.o


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

MV.o : MV.h Order.h
	g++ -c MV.cpp -Wall

RM.o : RM.h Order.h
	g++ -c RM.cpp -Wall

DIFF.o : DIFF.h Order.h
	g++ -c DIFF.cpp -Wall

WC.o : WC.h Order.h
	g++ -c WC.cpp -Wall

CP.o : CP.h Order.h
	g++ -c CP.cpp -Wall


.PHONY : clean
clean : 
	-rm -f $(objects)
