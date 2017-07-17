#include "Goal.h"



//Used LuX Image Scanner to change an image into a text of x/y locations and r,g,b colors.
void Goal::Draw(Graphics & gfx)
{
	for (int i = 0; i < 20; i++)
		for (int j = 0; j < 20; j++)
			gfx.PutPixel(x + i, y + j, 0, 255, 255);
}

bool Goal::IsColliding(int x1, int y1, int h, int w)
{
	int Right1 = x1 + w;          //Calculating player edges
	int Bottom1 = y1 + h;
	int Right2 = x + Width;       // Calculating goal edges
	int Bottom2 = y + Height;

	if (Right1 >= x && x1 <= Right2 && Bottom1 >= y && y1 <= Bottom2)
		GoalTouched = true;
	return true;
}

void Goal::RandomizeGoal()
{
	std::uniform_int_distribution<int> Rand_p(10,770);   //setting limits of Rand_p
	std::uniform_int_distribution<int> Rand_q(80,570);    //setting limits of Rand_q
	x = Rand_p(rng);   
	y = Rand_q(rng);
	GoalTouched = false;
}

