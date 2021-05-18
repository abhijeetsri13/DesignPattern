POG = textr
CC = g++
CPPFLAGS = -g -Wall -I ./include
all: hello
hello: main.o SubjectImpl.o ObserverImpl.o
	$(CC) $(CPPFLAGS) main.o SubjectImpl.o ObserverImpl.o -o observerPatter
main.o :
	$(CC) $(CPPFLAGS) -c src/main.cpp

SubjectImpl.o : src/SubjectImpl.cpp
	$(CC) $(CPPFLAGS) -c src/SubjectImpl.cpp

ObserverImpl.o : src/ObserverImpl.cpp
	$(CC) $(CPPFLAGS) -c src/ObserverImpl.cpp

clean:
	rm -f core observerPatter *.o
