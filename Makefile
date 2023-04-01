CC = gcc
IN = ipdectobin.c
OUT = ipdectobin
ARGS = -o 

all: build

build:

	$(CC) $(IN) $(ARGS) $(OUT)
