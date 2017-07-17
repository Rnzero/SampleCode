#pragma once
#include"Graphics.h"

class Progress
{
	int thickness = 10;
	int x = 5;
	int y = 10;

public:
	int Score=0;
    void Draw(Graphics & gfx);
};
