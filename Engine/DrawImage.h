#pragma once
#include "Graphics.h"
class DrawImage {
public:
	void DeathScreen(int, int, Graphics&gfx);
	void DrawTitle(int, int, Graphics&gfx);
	void DrawArena(int, int, Graphics&gfx);
	void WinScreen(int, int, Graphics&gfx);
};