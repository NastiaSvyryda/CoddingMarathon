NAME = race04

SRCS = src/main.c src/mx_strcpy.c src/mx_strdup.c src/mx_strnew.c src/mx_strlen.c src/mx_printerr.c src/mx_isdigit.c
SRCSOB = main.c mx_strcpy.c mx_strdup.c mx_strnew.c mx_strlen.c mx_printerr.c mx_isdigit.c

INC = inc/header.h
INCOB = header.h

CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic

all: install clean

install: 
	@cp $(SRCS) .
	@cp $(INC) .
	@clang $(CFLAGS) -o $(NAME) $(SRCSOB) -I $(INCOB)

uninstall: clean
	@rm $(NAME)

clean: 
	@rm -rf $(INCOB)
	@rm -rf $(SRCSOB)

reinstall: uninstall clean all