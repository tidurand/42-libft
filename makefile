SRCS = libft.h *.c

all: compile lib

compile:
	gcc -c -Wall -Werror -Wextra $(SRCS)

lib:
	ar -r libft.a *.o

bonus:
	# bonus

clean:
	rm *.o *.gch