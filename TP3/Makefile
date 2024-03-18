ARCH := $(shell uname -s)-$(shell uname -m)
HOME := .
BIN := $(HOME)/bin
SRC := $(HOME)/src
TEST := $(HOME)/test
CFLAGS := -g
CC := gcc
LDFLAGS := -lm
RM := rm


OBJS := $(BIN)/exo1_1 $(BIN)/exo1_2 $(BIN)/exo1_3 $(BIN)/exo2 

SRC_EXO4 = $(SRC)/exo1_4.c $(SRC)/fonction4.c
OBJS_EXO4 = $(SRC_EXO4:.c=.o)
EXE_EXO4 = bin/exo1_4

SRC_EXODEGRE = $(TEST)/testdegre1.c $(SRC)/degre.c
OBJS_EXODEGRE = $(SRC_EXODEGRE:.c=.o)
EXE_EXODEGRE = bin/exodegre1

SRC_EXODEGRE2 = $(TEST)/testdegre2.c $(SRC)/degre.c
OBJS_EXODEGRE2 = $(SRC_EXODEGRE2:.c=.o)
EXE_EXODEGRE2 = bin/exodegre2

all: $(BIN) $(OBJS) $(EXE_EXO4) $(EXE_EXODEGRE) $(EXE_EXODEGRE2) clean_o

$(BIN)/%.o: $(SRC)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(BIN):
	mkdir -p $(BIN)

$(EXE_EXO4): $(OBJS_EXO4)
	$(CC) $(CFLAGS) $^ -o $@

$(EXE_EXODEGRE): $(OBJS_EXODEGRE)
	$(CC) $(CFLAGS) $^ -o $@

$(EXE_EXODEGRE2): $(OBJS_EXODEGRE2)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean_o:
	rm $(TEST)/*.o
	rm $(SRC)/*.o




clean:
	@-$(RM) $(BIN)/*
	@echo "Clean OK"
