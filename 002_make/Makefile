######################################################################
# @author      : Xue Yi (andy_xueyi@hotmail.com)
# @file        : Makefile
# @created     : Monday Dec 02, 2019 13:51:16 CST
######################################################################

IDIR =./include
CC=g++
CFLAGS=-I$(IDIR)

ODIR=obj

LIBS=

_OBJ = main.o Animal.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.cpp
	$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o

