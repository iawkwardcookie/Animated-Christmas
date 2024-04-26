#pragma once
#include "EasyGraphics.h"
#include "SnowFlake.h"
#include "vector"

using namespace std;

class MainWindow : public EasyGraphics
{
public:
    MainWindow();

protected:
    virtual void onDraw();
    virtual void onCreate();
    virtual void onTimer(UINT nIDEvent);
    virtual void onLButtonDown(UINT nFlags, int x, int y);

private:
    vector<SnowFlake> flakes;
};

