CC = gcc
CFLAGS = -Wall -g

INC = include/
SRC = src/
BIN = bin/


calc: $(BIN)regular.o $(BIN)accountant.o $(BIN)scientific.o $(BIN)additionalFunctions.o
	$(CC) $(CFLAGS) -I$(INC) $(BIN)accountant.o $(BIN)scientific.o $(BIN)regular.o $(BIN)additionalFunctions.o $(SRC)calculator.c -o $(BIN)calc

$(BIN)accountant.o: $(SRC)accountant.c
	$(CC) $(CFLAGS) -c -I$(INC) $(SRC)accountant.c -o $(BIN)accountant.o

$(BIN)scientific.o: $(SRC)scientific.c
	$(CC) $(CFLAGS) -c -I$(INC) $(SRC)scientific.c -o $(BIN)scientific.o

$(BIN)regular.o: $(SRC)regular.c
	$(CC) $(CFLAGS) -c -I$(INC) $(SRC)regular.c -o $(BIN)regular.o

$(BIN)additionalFunctions.o: $(SRC)additionalFunctions.c
	$(CC) $(CFLAGS) -c -I$(INC) $(SRC)additionalFunctions.c -o $(BIN)additionalFunctions.o

clean:
	rm -rf $(BIN)*.o $(BIN)calc
