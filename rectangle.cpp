/*
#include <graphics.h>
#include <iostream>
#include <conio.h>

class Car {
private:
    int x1, y1, x2, y2;
    int color;
public:
        car(int _x1, int _y1, int _x2, int _y2, int _color) {
        x1 = _x1;
        y1 = _y1;
        x2 = _x2;
        y2 = _y2;
        color = _color;
    }

    void draw() {
        setcolor(color);
        setfillstyle(SOLID_FILL, color);
         rectangle(x1, y1, x2, y2);
        floodfill(100, 100, color);
       
    }
};

int main()
{   Car t;
    int gd = DETECT, gm;
    initwindow(640, 480);

    t.car (10, 10, 110, 110, BLUE);
    t.draw();

    getch();
    closegraph();

    system("pause");
    return 0;
}
*/