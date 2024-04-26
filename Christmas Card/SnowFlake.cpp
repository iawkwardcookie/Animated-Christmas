#include "SnowFlake.h"
#include "random"

SnowFlake::SnowFlake(int width, int height) : width(width), height(height)
{
	x = rand() % width;
	y = rand() % height;
	visible = true;
}

void SnowFlake::draw(EasyGraphics* canvas)
{
	//canvas->setBackColour(0x00FFFFFF);
	//canvas->setPenColour(0x00d8c76c, 1);
	if (visible)
		canvas->drawBitmap(L"snowflake.bmp", x - 20, y - 20, 40, 40, 0x00FFFFFF);
	
	
}

void SnowFlake::update()
{
	x += (rand() % 6) - 3;
	y += (rand() % 6);
	if (x < 0)
		x = width;
	else if (x > width)
		x = 0;

	if (y>height)
		y = 0;
}

void SnowFlake::checkForHit(int x, int y)
{
	int dx = x - this->x;
	int dy = y - this->y;
	int dist = ((dx * dx) + (dy * dy));
	if (dist < (20*20))
	{
		visible = false;
	}
}

