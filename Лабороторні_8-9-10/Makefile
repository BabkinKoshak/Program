targets = main.bin
CC = gcc
C_OPTS = -std=gnu11 -g -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -I./src 

all: clean prep compile run 

clean:
	rm -rf dist
prep:
	mkdir dist
format:
	doxygen
compile:
	
	$(CC) $(C_OPTS) 3_Завання_6_лабораторної/src/main.c -o dist/main4.1.bin
	$(CC) $(C_OPTS) перше_завдання_5_лабороторної_роботи/src/1.c -o dist/main3.2.bin
run: clean prep compile
	./dist/main.bin

format: #TODO

tidy: # TODO

