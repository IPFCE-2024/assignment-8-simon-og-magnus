# Makefile til at bygge StackLibrary

# Kompileringsindstillinger
CC = gcc
CFLAGS = -Wall -I./include

# Stier til kilder og bibliotek
SRC = src
INCLUDE = include
LIB = lib

# Mål (target)
LIBRARY = $(LIB)/libstack.a

# Alle mål
all: $(LIBRARY)

# Regler for at bygge biblioteket
$(LIBRARY): $(SRC)/stack.o
	@mkdir -p $(LIB)
	ar rcs $(LIBRARY) $(SRC)/stack.o

# Regler for at kompilere stack.c til en objektfil
$(SRC)/stack.o: $(SRC)/stack.c $(INCLUDE)/stack.h
	$(CC) $(CFLAGS) -c $(SRC)/stack.c -o $(SRC)/stack.o

# Ryd op
clean:
	rm -f $(SRC)/*.o $(LIB)/*.a
