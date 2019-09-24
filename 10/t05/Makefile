NAME = mx_wc
SRC = src/mx_wc.c src/mx_strlen.c src/mx_strchr.c src/mx_printchar.c
SRCOB = mx_wc.c mx_strlen.c mx_strchr.c mx_printchar.c 
INC = inc/mx_wc.h
INCOB = mx_wc.h
CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic

all: install clean

install:
	@cp $(SRC) .
	@cp $(INC) .
	@clang $(CFLAGS) -o $(NAME) $(SRCOB) -I $(INCOB)

uninstall: clean
	@rm -rf $(NAME)

clean:
	@rm -rf $(INCOB)    
	@rm -rf $(SRCOB)

reinstall: uninstall clean all