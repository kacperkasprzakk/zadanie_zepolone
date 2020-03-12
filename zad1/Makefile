CP=g++

all: main.o Expression.o Database.o Complex.o Statistics.o
	$(CP)  main.o Expression.o Database.o Complex.o Statistics.o -o test.out

main.o: main.cpp Database.h
	$(CP) main.cpp -c -Wall -pedantic -o  main.o

Database.o: Database.cpp Database.h
	$(CP) Database.cpp -c -Wall -pedantic -o Database.o

Complex.o: Complex.cpp Complex.h
	$(CP) Complex.cpp -c -Wall -pedantic -o Complex.o

Expression.o: Expression.cpp Expression.h
	$(CP) Expression.cpp -c -Wall -pedantic -o Expression.o

Statistics.o: Statistics.cpp Statistics.h
	$(CP) Statistics.cpp -c -Wall -pedantic -o Statistics.o
