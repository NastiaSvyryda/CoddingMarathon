NAME = read_file
SRC = src/read_file.c src/mx_strlen.c src/mx_printchar.c 
SRCOB = read_file.c mx_strlen.c mx_printchar.c 
INC = inc/minilibmx.h
INCOB = minilibmx.h
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
