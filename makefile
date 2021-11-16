SRCS = libft.h *.c

all: compile lib clean

compile:
	gcc -Wall -Wextra $(SRCS)

lib:
	ar -r libft.a *.o

bonus:
	# bonus

clean:
	rm *.o *.gch