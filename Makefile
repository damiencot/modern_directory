EXEC= modern_directory
CFLAGS= -Wall -Wextra -Werror
CC = gcc

${EXEC}: test.o function.o
	${CC} ${CFLAGS} -o $@ $^

test.o: test.c function.h
	${CC} ${CFLAGS} -o $@ -c $<

function.o: function.c function.h
	${CC} ${CFLAGS} -o $@ -c $<

clean:
	rm *.o ${EXEC}