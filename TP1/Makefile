ARCH := $(shell uname -s)-$(shell uname -m)
HOME := .
BIN := $(HOME)/bin
SRC := $(HOME)/src
CFLAGS := -g
CC := gcc
LDFLAGS := -lm
RM := rm

OBJS := $(SRC)/exo1.c

all: $(BIN) $(BIN)/exo1 $(BIN)/exo2

$(BIN)/exo1.o: $(SRC)/exo1.c
	$(CC) $(CFLAGS) -c $(SRC)/exo1.c -o $(BIN)/exo1.o

$(BIN)/exo2.o: $(SRC)/exo2.c
	$(CC) $(CFLAGS) -c $(SRC)/exo2.c -o $(BIN)/exo2.o

$(BIN):
	mkdir -p $(BIN)

clean:
	@-$(RM) $(BIN)/*
	@echo "Clean OK"
