#pragma once
// SDL
#include <SDL.h>

// Other
#include <math.h>
#include <string>
#include "Utilities.h"

class Sprite {
	public:
		Sprite(Uint32 color, int x, int y, int w, int h);
		void update(bool u, bool d, bool l, bool r);
		void draw(SDL_Surface *destination);
		SDL_Rect getRect();
		void setRect(SDL_Rect rectangle);
		void modX(int num);
		int getX();
		void modY(int num);
		int getY();
		void setX(int num);
		void setY(int num);
		SDL_Surface getImage();
		void setImage(SDL_Surface* s);
};