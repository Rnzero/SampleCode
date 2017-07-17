#pragma once
#include "Graphics.h"
class Hazard
{
	static const int Height = 25;
	static const int Width = 25;      //The width and height of the image used to create hazards

public:              
	int x;
	int y;
	int vx;
	int vy;
	bool HasTouched = false;
	
	void Update();                    //Change direction of movement upong collision with border
	void Draw(Graphics & gfx);   
	bool IsColliding(int, int, int, int);         //Checks for collision with the player
};