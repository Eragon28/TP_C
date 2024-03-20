ARCH := $(shell uname -s)-$(shell uname -m)
HOME := .
BIN := $(HOME)/bin
SRC := $(HOME)/src
TEST := $(HOME)/test
CFLAGS := -g
CC := gcc
LDFLAGS := -lm
RM := rm

SRC_TP4 = $(SRC)/testExo1.c $(SRC)/exo1.c
OBJS_TP4 = $(SRC_TP4:.c=.o)
EXE_TP4 = bin/exoTP4


all: $(BIN)  $(EXE_TP4) clean_o

$(BIN):
	mkdir -p $(BIN)

$(EXE_TP4): $(OBJS_TP4)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean_o:
	rm $(SRC)/*.o


clean:
	@-$(RM) $(BIN)/*
	@echo "Clean OK"
