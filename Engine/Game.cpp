
#include "MainWindow.h"
#include "Game.h"

Game::Game( MainWindow& wnd )     
	:
	wnd( wnd ),
	gfx( wnd ), 
	rng(rd()),
	Rand_x(70, 770), //Setting limits of Rand_x 
	Rand_y(200, 570),  //Setting Limits of Rand_y
	Rand_vx(-3,3),    //Setting Limits of vx
	Rand_vy(-3, 3)    //Setting Limits of vy
	
{
	for (int i = 0; i < 10; i++)
	{
		hazard[i].x = Rand_x(rng);
		hazard[i].y = Rand_y(rng);
		hazard[i].vx = Rand_vx(rng);
		hazard[i].vy = Rand_vy(rng); 
		goal.x = Rand_x(rng);
		goal.y = Rand_y(rng);
    }  // initialized the locations and velocities of 10 hazards, and the initial goal
}


// Go() is called in every frame.
//gfx is the Graphics Object being used to call BeginFrame() and EndFrame(), which are a part of Graphics.cpp
// Using UpdateModel() for logic or any physics calculation.
// Using ComposeFrame() for calling the drawing functions.
// Different functions for game logic and drawing => a more organized code.


void Game::Go()
{
	gfx.BeginFrame();	
	UpdateModel();
	ComposeFrame();
	gfx.EndFrame();
}       


void Game::DrawBorder()       //Draws a box
{
	for (int i = 0; i < gfx.ScreenWidth - 1; i++)
	{
		for (int j = 0; j < gfx.ScreenHeight - 1; j++)
		{
			if (
				((j > 65) && (j < 75))
				|| ((j < gfx.ScreenHeight - 1) && (j > gfx.ScreenHeight - 10))
				|| ((i > 0) && (i < 10))
				|| ((i < gfx.ScreenWidth - 1) && (i > gfx.ScreenWidth - 10))
				)
			{
				gfx.PutPixel(i, j, 200, 200, 200);
			}
		}
	}

}


void Game::UpdateModel()
{
	if (!GameStarted)                  //IF game has not started
	{
		paint.DrawArena(315, 60, gfx);                     //Draw at these coordinates
		paint.DrawTitle(325, 225,gfx);
		if (wnd.kbd.KeyIsPressed(VK_RETURN))     //Check for input to begin game
			GameStarted = true;
	}

	else                                       // if GameStarted == true
	{
		if (wnd.kbd.KeyIsPressed(VK_UP))    //move 7pixels along the axis, upon corressponding keyboard input
			player.y = player.y - 7;         //Check MainWindow.h of the framework for definition
		if (wnd.kbd.KeyIsPressed(VK_DOWN))
			player.y = player.y + 7;
		if (wnd.kbd.KeyIsPressed(VK_LEFT))
			player.x = player.x - 7;
		if (wnd.kbd.KeyIsPressed(VK_RIGHT))
			player.x = player.x + 7;

		player.Update();         //Prevents player from going off screen
		goal.IsColliding(player.x, player.y, player.Height, player.Width);  //Check if player has touched the goal.
		if (goal.GoalTouched == true)         //Randomize goal if the player touched it, and increase score.
		{
			goal.RandomizeGoal();
			progress.Score++;
			//goal.GoalTouched = false;
		}

		for (int i = 0; i < 10; i++)
		{
			hazard[i].IsColliding(player.x, player.y, player.Height, player.Width); //check collision with player
			hazard[i].Update();                    //Change direction of hazard movement upon collision with border
		}

	}
}


void Game::ComposeFrame()      //called every frame
{
	if ((GameStarted) && (!GameEnded))   
	{
		if (progress.Score < 37)
		{
			DrawBorder();
			goal.Draw(gfx);
			player.Draw(gfx);
			progress.Draw(gfx);
			for (int i = 0; i < 10; i++)           //loop to draw all 15 hazards
			{
				if (hazard[i].HasTouched == false)      //Draw if no hazards are touched
					hazard[i].Draw(gfx);
				else
					GameEnded = true;
			}
		}
		else
			paint.WinScreen(300, 200, gfx);
	}
	else if (GameEnded)              // GameEnded becomes true when Hazard collides with player
	{
		paint.DeathScreen(300, 250,gfx);
	}
}



//win at 37