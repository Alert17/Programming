targets = main1.bin
CC = gcc
C_OPTS = -std=gnu11 -g -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference

all: clean prep compile doxygen

clean:
	rm -rf dist
prep:
	mkdir dist
compile: main1.bin

main1.bin: src/main1.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
doxygen:
	doxygen Doxyfile
format: #TODO

tidy: # TODO

