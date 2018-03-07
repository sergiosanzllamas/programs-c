CC = g++

.PHONY: clean

all: vida


vida: interfaz.o vida.o
		$(CC) -o vida vida.o interfaz.o

%.o: %.cpp
		$(CC) -c $<

clean:
	$(RM) *.o
