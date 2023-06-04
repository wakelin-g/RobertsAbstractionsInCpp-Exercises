// stole from https://github.com/heavy3/programming-abstractions/02-functions-and-libs/readerEx.02.16/main.cpp

#include<iostream>
#include<iomanip>
#include<cmath>
#include"gwindow.h"
using namespace std;

enum RainbowColor {
 RED,
 ORANGE,
 YELLOW,
 GREEN,
 BLUE,
 MAGENTA,
 CYAN,
 LASTCOLOR
};

const double ASPECT_RATIO = 2.3;

const int WINDOW_WIDTH_PX = 500;
const int WINDOW_HEIGHT_PX = WINDOW_WIDTH_PX / ASPECT_RATIO;
const int COLORS_IN_RAINBOW = LASTCOLOR - 1;

const int COLOR_THICKNESS_PX = (WINDOW_HEIGHT_PX / 1.6) / (COLORS_IN_RAINBOW + 2);
const double RADIANS = 1.4;

const RainbowColor SKYBLUE = CYAN;

const double RADIUS_PX = WINDOW_WIDTH_PX / (2 * sin(RADIANS/2.0));

const int CIRCLE_X0 = 0 - (2 * RADIUS_PX - WINDOW_WIDTH_PX) / 2.0;
const int CIRCLE_Y0 = 0 + COLOR_THICKNESS_PX;
const int CIRCLE_DIAMETER0 = RADIUS_PX * 2;

RainbowColor operator++(RainbowColor& rc, int);
string stringizeColor(RainbowColor color);
void getCircleCoordinates(RainbowColor rc, int& x0, int& y0, int& width, int& height);

int main()
{
    int x0, y0, width, height;

    GWindow gw(WINDOW_WIDTH_PX, WINDOW_HEIGHT_PX);
    gw.setWindowTitle("Rainbow");

    gw.setColor(stringizeColor(SKYBLUE));
    gw.fillRect(0, 0, WINDOW_WIDTH_PX, WINDOW_HEIGHT_PX);

    for (RainbowColor rc = RED; rc < LASTCOLOR; rc++) {
        getCircleCoordinates(rc, x0, y0, width, height);
        gw.setColor(stringizeColor(rc));
        gw.fillOval(x0, y0, width, height);
    }

    return 0;
}

string stringizeColor(RainbowColor c) {
    string s;
    switch (c) {
        case RED: s = "RED"; break;
        case ORANGE: s = "ORANGE"; break;
        case YELLOW: s = "YELLOW"; break;
        case GREEN: s = "GREEN"; break;
        case BLUE: s = "BLUE"; break;
        case MAGENTA: s = "MAGENTA"; break;
        case CYAN: s = "CYAN"; break;
        default: s = "UNKNOWN_COLOR";
    }
    return s;
}

RainbowColor operator++(RainbowColor& rc, int) {
    RainbowColor old = rc;
    rc = RainbowColor(old + 1);
    return rc;
}

void getCircleCoordinates(RainbowColor rc, int& x0, int& y0, int& width, int& height) {
    x0 = (rc * COLOR_THICKNESS_PX)/2.0 + CIRCLE_X0;
    y0 = (rc * COLOR_THICKNESS_PX)/2.0 + CIRCLE_Y0;
    height = width = CIRCLE_DIAMETER0 - (rc * COLOR_THICKNESS_PX);
}
