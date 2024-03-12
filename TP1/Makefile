ARCH := $(shell uname -s)-$(shell uname -m)
HOME := .
BIN := $(HOME)/bin
SRC := $(HOME)/src
PROG := $(BIN)/exo1.o
CFLAGS := -g
CC := gcc
LD := gcc
LDFLAGS := -lm
RM := rm

OBJS := $(SRC)/exo1.c


$(PROG): $(OBJS) | $(BIN)
	$(LD) $(OBJS) $(LDFLAGS) -o $(PROG)



$(BIN):
	mkdir -p $(BIN)

clean:
	$(RM) -f $(PROG) $(OBJS)
	@echo "Clean OK"
