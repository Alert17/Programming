targets = main1.bin main2.bin main3.bin main4.bin main5.bin main6.bin
CC = gcc
C_OPTS = -std=gnu11 -g -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference

all: clean prep compile doxygen

clean:
	rm -rf dist
prep:
	mkdir dist
compile: main1.bin main2.bin main3.bin main4.bin main5.bin main6.bin

main1.bin: src/main1.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
	
main2.bin: src/main2.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
	
main3.bin: src/main3.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
	
main4.bin: src/main4.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
	
main5.bin: src/main5.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
	
main6.bin: src/main6.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
					
run: clean prep compile 
	./dist/main3.bin
doxygen:
	doxygen Doxyfile
format: #TODO

tidy: # TODO

