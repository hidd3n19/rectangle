#ifndef CAR_HPP
#define CAR_HPP
#include <graphics.h>

class Car
{
private :

    int left, top, right, bottom;
    int speed;
    int color;
    int screenWidth;



public :

    Car(int _left, int _top, int _right, int _bottom, int _speed, int _color,int _screenWidth);
    void draw();
    void left1(int limit);
    void right2(int limit);
    int getLeft();
    int getTop();
    int getRight();
    int getBottom();
};

#endif
