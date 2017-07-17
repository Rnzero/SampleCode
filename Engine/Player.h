#pragma once
#include "Graphics.h"

class Player
{
	                    // 400x300 will put the player in the middle...almost.
public:
	int x = 10;
	int y = 100;
	int Height = 25;             //The image used is 25x25 in size
	int Width = 25;
	void Update();             //Resets player postion to the last position, if the player tries to cross the screen.
	void Draw(Graphics & gfx);   // To draw the player. Passing the reference(won't create copies of the Graphics object every frame) 
};
