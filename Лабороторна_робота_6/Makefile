targets = main.bin
CC = gcc
C_OPTS = -std=gnu11 -g -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -I./src 

all: clean prep compile run

clean:
	rm -rf dist
prep:
	mkdir dist
compile:
	$(CC) $(C_OPTS) task1/src/main1.c -o dist/main1.bin
	$(CC) $(C_OPTS) task2/src/main2.c -o dist/main2.bin
	$(CC) $(C_OPTS) task3/src/main3.c -o dist/main3.bin
	$(CC) $(C_OPTS) task4/src/main4.c -o dist/main4.bin
	$(CC) $(C_OPTS) task5/src/main5.c -o dist/main5.bin
	$(CC) $(C_OPTS) task6/src/main6.c -o dist/main6.bin
run: clean prep compile
	./dist/main.bin
doxygen:
	doxygen Doxyfile
format: #TODO

tidy: # TODO