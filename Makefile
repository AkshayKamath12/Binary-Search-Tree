CC = gcc
SOURCE = BST.c test_BST.c
OBJ = BST.o testBST.o
HEADER = BST.h

check_cycle: ${OBJ} ${HEADER}
	$(CC) $(OBJ) -o BST

%.o: %.c $(HEADER)
	$(CC) $< -c

clean:
	rm -rf BST
	rm -rf *.o
