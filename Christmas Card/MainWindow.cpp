#include "MainWindow.h"

MainWindow::MainWindow()
{
	for (int i = 0; i < 100; i++)
		flakes.push_back(SnowFlake(800, 600));
}

void MainWindow::onDraw()
{
	clearScreen(0x00d1b190);

	setBackColour(0x00FFFFFF);

	drawCircle(200, 400, 100, 1);
	drawCircle(200, 300, 75, 1);
	drawRectangle(150, 210, 100, 20, 1);
	drawRectangle(160, 150, 75, 80, 1);

	for (int i = 0; i < flakes.size(); i++) 
	{
		flakes.at(i).draw(this);
	}
	EasyGraphics::onDraw();
}

void MainWindow::onCreate()
{
	EasyGraphics::onCreate();
	setImmediateDrawMode(false);
	setTimer(101, 50);

}

void MainWindow::onTimer(UINT nIDEvent)
{
	if (nIDEvent == 101) 
	{
		for (int i = 0; i < flakes.size(); i++)
			flakes.at(i).update();
		onDraw();
	}
}

void MainWindow::onLButtonDown(UINT nFlags, int x, int y)
{
	for (int i = 0; i < flakes.size(); i++) 
	{
		flakes.at(i).checkForHit(x, y);
	}
}

