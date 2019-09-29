#include "header.h"

void move_UP   (SDL_Renderer* render, SDL_Texture* texture, SDL_Rect &destrect, int offset = 5)
{
	destrect.y -= offset;
	SDL_RenderClear(render);
	SDL_RenderCopy(render, texture,NULL,&destrect);
}
void move_DOWN (SDL_Renderer* render, SDL_Texture* texture, SDL_Rect &destrect, int offset = 5)
{
	destrect.y += offset;
	SDL_RenderClear(render);
	SDL_RenderCopy(render, texture,NULL,&destrect);
}
void move_LEFT (SDL_Renderer* render, SDL_Texture* texture, SDL_Rect &destrect, int offset = 5)
{
	destrect.x -= offset;
	SDL_RenderClear(render);
	SDL_RenderCopy(render, texture,NULL,&destrect);
}
void move_RIGHT(SDL_Renderer* render, SDL_Texture* texture, SDL_Rect &destrect, int offset = 5)
{
	destrect.x += offset;
	SDL_RenderClear(render);
	SDL_RenderCopy(render, texture,NULL,&destrect);
}

void render_UPDATE(SDL_Renderer* render, SDL_Texture* texture[], SDL_Rect* destrect[], int states[])
{
	SDL_RenderClear(render);
	if(states[0]) SDL_RenderCopy(render, texture[0],NULL,destrect[0]);
	if(states[1]) SDL_RenderCopy(render, texture[1],NULL,destrect[1]);
}

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
    
    SDL_Texture* ARRAY_textures[2] = {background, player};
    SDL_Rect* ARRAY_rect[2] = {&background_RECT, &player_RECT};
    int ARRAY_texturesState[2] = {1,1};
    const Uint8 *keyboardState = SDL_GetKeyboardState(NULL);
    SDL_Event event;
    bool quit = false;
    while(!quit)
	    while(SDL_PollEvent(&event))
	    {
		    SDL_PumpEvents(); // обработчик событий.
	    }
    if(event.type == SDL_QUIT)
	quit=true;
				
if(event.type == SDL_MOUSEBUTTONDOWN)
{
	if(event.button.button == SDL_BUTTON_LEFT && event.button.x <=10 && event.button.y <=10)
		quit = true;
	if(event.button.button == SDL_BUTTON_RIGHT)
		ARRAY_texturesState[1] = 1;
	if((event.button.button == SDL_BUTTON_LEFT) && (event.button.x >= player_RECT.x) &&
		(event.button.y >= player_RECT.y) &&
		(event.button.x <= player_RECT.w + player_RECT.x) &&
		(event.button.y <= player_RECT.h + player_RECT.y))
		ARRAY_texturesState[1] = 0;
}
if((keyboardState[SDL_SCANCODE_UP])||(keyboardState[SDL_SCANCODE_W]))
	move_UP(ren,player,player_RECT);
				
if((keyboardState[SDL_SCANCODE_DOWN])||(keyboardState[SDL_SCANCODE_S]))
	move_DOWN(ren,player,player_RECT);

if((keyboardState[SDL_SCANCODE_LEFT])||(keyboardState[SDL_SCANCODE_A]))
	move_LEFT(ren,player,player_RECT);

if((keyboardState[SDL_SCANCODE_RIGHT])||(keyboardState[SDL_SCANCODE_D]))
	move_RIGHT(ren,player,player_RECT);


//ZOOM----------------------------------------------------------------
if(keyboardState[SDL_SCANCODE_KP_PLUS])
{
	TESTtexture_SCALE += 0.02;
	player_RECT.h = player_HEIGH * TESTtexture_SCALE;
	player_RECT.w = player_WIGHT * TESTtexture_SCALE;
}
if(keyboardState[SDL_SCANCODE_KP_MINUS])
{
	TESTtexture_SCALE -= 0.02;
	player_RECT.h = player_HEIGH * TESTtexture_SCALE;
	player_RECT.w = player_WIGHT * TESTtexture_SCALE;
}
render_UPDATE(ren, ARRAY_textures, ARRAY_rect, ARRAY_texturesState);	//Написанная нами функция обновления рендера
SDL_RenderPresent(ren);	
SDL_DestroyTexture(player);
SDL_DestroyTexture(background);

}
