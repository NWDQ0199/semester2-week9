
CC = gcc
CFLAGS = -Wall -Wextra

SRC = main.c node.c stack.c
OBJ = $(SRC:.c=.o)
EXE = stack
#INCLUDE = node_structures.h include/node.h stack_structures.h stack.h

$(EXE): $(OBJ)# $(INCLUDE)
	$(CC) $(CFLAGS) -o $@ $^
	mv $(OBJ) obj

%.o: %.c $(INCLUDE)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(EXE) $(OBJ)

