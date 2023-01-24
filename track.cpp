#include "track.hpp"
#include <graphics.h>

RaceTrack::RaceTrack(int _left, int _top, int _right, int _bottom,int _color)
{
    left = _left;
    top = _top ;
    right = _right;
    bottom = _bottom;
    color = _color;
}


int x = 0;
int y = 0;

void RaceTrack::draw() {
   // Draw the left and right borders
     setbkcolor(0);
    setcolor(15);
    setfillstyle(SOLID_FILL,WHITE);
    bar(left,top,right,bottom);
    setfillstyle(SOLID_FILL,WHITE);
    bar(left + 390, top, right + 390,bottom);

    // Set the background color to black
    setbkcolor(0);
    // Set the text and fill color to white
    setcolor(15);
    setlinestyle(DASHED_LINE, 0, THICK_WIDTH);


// while (true) {
//         // clear the screen
//         cleardevice();

//         // draw the dashed line
//         for (int i = 0; i <= 650; i++) {
//             if (i % 2 == 0) {
//                 putpixel(x, y + i, WHITE);
//             }
//         }
//         // move the line downwards
//         y++;

//         // wait for a bit before moving the line again
//         delay(50);
//     }

//    // Draw the left border
//    while(y2 <= 650){
  
//         line(140, y1, 140, y2);
//          y1 = y2;
//          y2+= 10;
//    }
//     // Draw the right border
//     for(int i = 0; i <= 650; i+=20)
//         line(290, i, 290, i+10);
}

// // Loop to move the lines
//     while(1) {
//     // Draw the left border
//     for(int i = top; i <= bottom; i+=20)
    
//         line(20,top,20,bottom);

//     // Draw the right border
//     for(int i = top; i <= 650; i+=20);
//         line(290, top, 290, bottom);
// }
//}
// void RaceTrack::update()
// {   
//         top++;
//         bottom++;

//         if(top>650) top = 0;
//         if(bottom>650) bottom = 0;
//         delay(50);
// }
// void RaceTrack::reset()
// {
// 	 top= 0;	
//      bottom = 0;
// }
int RaceTrack::getLeft()
{
	return left;
}
int RaceTrack::getTop()
{
	return top;
}
int RaceTrack::getRight()
{
	return right;
}
int RaceTrack::getBottom()
{
	return bottom;
}
int RaceTrack::getColor()
{
	return color;
}
