#pragma once
#include "EasyGraphics.h"
class SnowFlake
{
public:
	SnowFlake(int width, int height);
	void draw(EasyGraphics* canvas);
	void update();
	void checkForHit(int x, int y);
	bool visible;

private:
	int x, y;
	int width, height;
	SnowFlake();
};

