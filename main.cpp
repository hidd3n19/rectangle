#include <iostream>
#include "car.hpp"
#include "track.hpp"
#include <conio.h>
#include <math.h>
#include <graphics.h>
int main()
{ 
    int screenWidth = 400;
    int screenHeight = 650;
    initwindow(screenWidth, screenHeight, "Simple Animation");

    int w = 200;
    int h = 200;
RaceTrack track(0,0,10,650, WHITE);
 while (true)
    {
        cleardevice();
        track.draw();
        delay(1000);
    } 
        
//track.draw();
//track.update();
//Car car( 250, 500, 350, 600, 50, BLUE, screenWidth);


//    /* int centerX = screenWidth / 2;
//     int centerY = screenHeight / 2;
//     Car car(centerX - w / 2,centerY - h / 2 ,centerX + w / 2,centerY + h / 2, 50, BLUE, screenWidth);*/

//     car.draw();
    



    getch();
    //closegraph();

    return 0;
}