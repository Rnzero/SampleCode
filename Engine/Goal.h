#pragma once
#include "Graphics.h"
#include <random>
class Goal 

{
	
	int Width = 20;
	int Height = 20;
	
public:
	std::random_device rd;
	std::mt19937 rng;
	int x;
	int y;
	void Draw(Graphics & gfx);
	bool IsColliding(int, int, int, int);
	bool GoalTouched = false;
	void RandomizeGoal();
};