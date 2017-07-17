#include "Progress.h"

void Progress::Draw(Graphics & gfx)
{
	for (int i = 5; i <= 20*Score+5; i++)
	{
		for (int j = 10; j< 20; j++)
		{
			gfx.PutPixel(x+i, y+j, 0, 0, 230);
		}
	}
}
