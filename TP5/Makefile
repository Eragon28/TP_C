ARCH := $(shell uname -s)-$(shell uname -m)
HOME := .
BIN := $(HOME)/bin
SRC := $(HOME)/src
CFLAGS := -g
CC := gcc
LDFLAGS := -lm
RM := rm

OBJS := $(BIN)/exo1 $(BIN)/exo2

all: $(BIN) $(OBJS)

$(BIN)/%.o: $(SRC)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(BIN):
	mkdir -p $(BIN)

clean:
	@-$(RM) $(BIN)/*
	@echo "Clean OK"
