CXX = g++
CXX_FLAGS = -g -I. -std=c++17 -Wfatal-errors -Wall -Wextra -Wpedantic -Wconversion -Wshadow -Wno-sized-deallocation -Wno-unused-parameter

TMPFILE=tmpimg
GEOM?=
VARS?=

ifdef GEOM
VARS += -V geometry:"$(GEOM)"
endif

PRJ = main
SRC = $(PRJ).cpp
BIN = a.out

.PHONY : all clean test grade

all: $(BIN)

test.o: test.cpp
	$(CXX) $(CXX_FLAGS) test.cpp -c

$(BIN): test.o $(PRJ).o
	g++ $(CXX_FLAGS) test.o $(SRC)

clean:
	# @rm $(PRJ)-t.pdf $(TMPFILE)*.png || true
	rm $(BIN) *.o | true

test: $(BIN)
	./$(BIN)

a1: $(BIN)
	./$(BIN) -c a1

a2: $(BIN)
	./$(BIN) -c a2

a3: $(BIN)
	./$(BIN) -c a3

a4: $(BIN)
	./$(BIN) -c a4

