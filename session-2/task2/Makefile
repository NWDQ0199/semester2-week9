
CC = gcc
CFLAGS = -Wall -Wextra

SRC = main.c list.c
OBJ = $(SRC:.c=.o)
EXE = list

$(EXE): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^
	mv $(OBJ) obj

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(EXE) $(OBJ)
