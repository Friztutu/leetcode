CC=gcc
CFLAGS=-std=c11 -Wall -Wextra -Werror -fsanitize=address
FILES=*.c

solution: $(FILES)
	gcc $(CFLAGS) $(FILES) -o solution
	./solution

rebuild: clean solution

clean: 
	rm -rf solution *.o

check_memory: $(FILES)
	make 
	valgrind --tool=memcheck --leak-check=yes ./solution

code_style:
	clang-format -i *.c
