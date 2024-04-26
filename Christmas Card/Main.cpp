#include <Windows.h>
#include "MainWindow.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCMDLine, int show) 
{
	MainWindow mainwindow;
	mainwindow.create(hInstance, 800, 600, 100, true);


	return 0;
}