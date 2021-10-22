all: bubblesort.o main.o
	gcc -Wall -c bubblesort.c            # Builds lab2.o 
	gcc -Wall -c main.c        # Builds revwords.o
	gcc -o supo1 bubblesort.o main.o  # Builds executable 

clean:
	rm -f supo1 main.o bubblesort.o   # Cleans up 
