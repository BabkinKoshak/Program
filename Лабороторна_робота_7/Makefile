targets = main.bin
CC = gcc
C_OPTS = -std=gnu11 -g -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -I./src 

all: clean prep compile run

clean:
	rm -rf dist
prep:
	mkdir lab5/dist
	mkdir lab6/dist
compile:
	$(CC) $(C_OPTS) lab5/task1/src/main.c -o lab5/dist/main1.bin
	$(CC) $(C_OPTS) lab5/task2/src/main.c -o lab5/dist/main2.bin
	$(CC) $(C_OPTS) lab5/task3/src/main.c -o lab5/dist/main3.bin
	$(CC) $(C_OPTS) lab5/task4/src/main.c -o lab5/dist/main4.bin
	$(CC) $(C_OPTS) lab5/task5/src/main.c -o lab5/dist/main5.bin
	$(CC) $(C_OPTS) lab6/task1/src/main.c -o lab6/dist/main1.bin
	$(CC) $(C_OPTS) lab6/task2/src/main.c -o lab6/dist/main2.bin
	$(CC) $(C_OPTS) lab6/task3/src/main.c -o lab6/dist/main3.bin
	$(CC) $(C_OPTS) lab6/task4/src/main.c -o lab6/dist/main4.bin
	$(CC) $(C_OPTS) lab6/task5/src/main.c -o lab6/dist/main5.bin
	$(CC) $(C_OPTS) lab6/task6/src/main.c -o lab6/dist/main6.bin
run: clean prep compile
	./dist/main.bin
doxygen:
	doxygen Doxyfile
format: #TODO

tidy: # TODO