CC=cc
CFLAGS=-Wall -g
SRC=src/
SRC_FLAG=-I./src
TEST_OBJ=logr.o
DEPS=logr.h logrReader.h parser.h stack.h
READER_OBJ= stack.o parser.o

%.o: $(SRC)%.c
	$(CC) $(CFLAGS) $(SRC_FLAG) -c $< -o $@

test: tests/test.c $(TEST_OBJ)
	$(CC) $(CFLAGS) $(SRC_FLAG) -o $@ $^

reader: $(SRC)logrReader.c $(READER_OBJ)
	$(CC) $(CFLAGS) $(SRC_FLAG) -o $@ $^

.PHONY: clean cleanall

clean:
	rm -f *.o

cleanall:
	rm -f *.o test reader

