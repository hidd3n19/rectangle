#ifndef TRACK_HPP
#define TRACK_HPP
#include<graphics.h>

class RaceTrack {
private:

    int left, top, right, bottom;
    int color;

public:
    RaceTrack(int _left, int _top, int _right, int _bottom, int _color);
    void draw();
    void update();
    void reset();
    int getLeft();
    int getTop();
    int getRight();
    int getBottom();
    int getColor();
};

#endif
