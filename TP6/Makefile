ARCH := $(shell uname -s)-$(shell uname -m)
HOME := .
BIN := $(HOME)/bin
SRC := $(HOME)/src
TEST := $(HOME)/test
CFLAGS := -g
CC := gcc
LDFLAGS := -lm
RM := rm

SRC_TP6 = $(SRC)/function.c $(SRC)/exo1.c
OBJS_TP6 = $(SRC_TP6:.c=.o)
EXE_TP6 = bin/exoTP6


all: $(BIN)  $(EXE_TP6) clean_o

$(BIN):
	mkdir -p $(BIN)

$(EXE_TP6): $(OBJS_TP6)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean_o:
	rm $(SRC)/*.o


clean:
	@-$(RM) $(BIN)/*
	@echo "Clean OK"
