
#pragma once

#include "Keyboard.h"
#include "Mouse.h"
#include "Graphics.h"
#include "Player.h"
#include "Hazard.h"
#include "Goal.h"
#include "Progress.h"
#include "DrawImage.h"
#include <random>
class Game
{
public:
	Game( class MainWindow& wnd );
	Game( const Game& ) = delete;
	Game& operator=( const Game& ) = delete;
	void Go();



private:
	void ComposeFrame();
	void UpdateModel();
	void DrawBorder();


private:
	MainWindow& wnd;                  // Reference to the MainWindow class' Object. Note: MainWindow Class came with the framework.
	Graphics gfx;                     //Object of Graphics Class. Note: Graphics Class came with the framework.

	bool GameStarted = false;         //Will be used to check if the game has already started
	bool GameEnded = false;           //Will be used to check if the game has ended
	std::random_device rd;     //will be used randomly generated variable to seed our rng
	std::mt19937 rng;          //rng will be used to generate x/y co-ordinate positions of goal and hazards.
	std::uniform_int_distribution<int> Rand_x;     //will be used to set limits of x
	std::uniform_int_distribution<int> Rand_y;      //will be used to set limits of y
	std::uniform_int_distribution<int> Rand_vx;      //will be used to set the limits of v
	std::uniform_int_distribution<int> Rand_vy;
	

	Player player;
	Hazard hazard[10];          //Maximum of 10 hazards can be created
	Goal goal;
	Progress progress;
	DrawImage paint;
	bool Collided = false;
	
};