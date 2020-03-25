NAME = *.c

TARGET = a.out

LIBR = *.h

all:
	gcc $(NAME) -I $(LIBR) -o $(TARGET)
