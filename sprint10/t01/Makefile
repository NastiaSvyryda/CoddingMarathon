NAME = mx_cp
SRC = src/mx_cp.c src/mx_strlen.c src/mx_strchr.c 
SRCOB = mx_cp.c mx_strlen.c mx_strchr.c  
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
