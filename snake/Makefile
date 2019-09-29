NAME = test
SRC = src/test.c 
		
SRCS = test.c \

SDLF =  -I ./framework/SDL2.framework/Versions/A/Headers -F ./framework -framework SDL2 -rpath ./framework -I ./framework/SDL2_image.framework/Versions/A/Headers -F ./framework -framework SDL2_image -rpath ./framework 

CFLAG = -std=c11 -Wall -Wextra -Wpedantic -Werror

SDLM = -I ./framework/SDL2_mixer.framework/Versions/A/Headers -F ./framework -framework SDL2_mixer -rpath ./framework

SDLT = -I ./framework/SDL2_ttf.framework/Versions/A/Headers -F ./framework -framework SDL2_ttf -rpath ./framework

all: install clean
install:
	@cp $(SRC) .
	@clang $(CFLAG) $(SDLM) $(SRCS) $(SDLF) $(SDLT) -o $(NAME) -I 
uninstall:
	@rm -rf $(SRCS)
	@rm -rf $(HDR)
	@rm -rf $(NAME)
clean:
	@rm -rf $(SRCS)
	@rm -rf $(HDR)
reinstall: uninstall all