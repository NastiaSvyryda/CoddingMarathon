#include "header.h"

int main(){
    SDL_DisplayMode displayMode;
    if (SDL_Init(SDL_INIT_EVERYTHING) != 0){
	    return 1;
    }
    // int request = SDL_GetDesktopDisplayMode(0,&displayMode);
    SDL_Window *win = SDL_CreateWindow("Snake", 0, 0, displayMode.w, displayMode.h, SDL_WINDOW_SHOWN);
    if (win == NULL){
	    return 1;
    }
    SDL_Renderer *ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    if (ren == NULL){
	    return 1;
    }
    SDL_Rect player_RECT;
		player_RECT.x = 0;   //Смещение полотна по Х
		player_RECT.y = 0;   //Смещение полотна по Y
		player_RECT.w = 333; //Ширина полотна
		player_RECT.h = 227; //Высота полотна
    SDL_Rect background_RECT;
		background_RECT.x = 0;
		background_RECT.y = 0;
		background_RECT.w = displayMode.w;
		background_RECT.h = displayMode.h;
    // const int player_WIGHT = 333;   //Ширина исходнго изображения
    // const int player_HEIGH = 227;   //Высота исходного изображения
    // double TESTtexture_SCALE = 1.0; //Множетель для зумирования

    SDL_Texture *player =  IMG_LoadTexture(ren,"purple.bpm");
    SDL_Surface *BMP_background = SDL_LoadBMP("green.bmp");
    if (BMP_background == NULL){
	    return 1;
    }

    SDL_Texture *background = SDL_CreateTextureFromSurface(ren, BMP_background);
    SDL_FreeSurface(BMP_background); //Очищение памяти поверхности
    if (player == NULL){
	    return 1;
    }

    SDL_RenderClear(ren); //Очистка рендера
    SDL_RenderCopy(ren,background,NULL,&background_RECT); //Копируем в рендер фон
    SDL_RenderCopy(ren, player, NULL, &player_RECT); //Копируем в рендер персонажа
    SDL_RenderPresent(ren); //Погнали!!

    
}
