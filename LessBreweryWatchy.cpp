#include "LessBreweryWatchy.h"

LessBreweryWatchy::LessBreweryWatchy(){} 

void LessBreweryWatchy::drawWatchFace(){
    char time[6];
    time[0] = '0' + ((currentTime.Hour/10)%10);
    time[1] = '0' + (currentTime.Hour%10); 
    time[2] = ':';
    time[3] = '0' + ((currentTime.Minute/10)%10);
    time[4] = '0' + (currentTime.Minute%10); 
    time[5] = 0;
    display.fillScreen(GxEPD_BLACK);
    display.setTextColor(GxEPD_WHITE);
    display.setFont(&NoticiaText_BoldItalic20pt7b);
    display.setCursor(60, 35);
    display.println("Less");
    display.setCursor(20, 65);
    display.println("Brewery");
    display.setCursor(15, 100);
    display.setFont(&NoticiaText_Regular9pt7b);
    display.println("It's time you started");
    display.setCursor(40, 125);
    display.print("drinking ");
    display.setFont(&NoticiaText_BoldItalic9pt7b);
    display.print("Less");
    display.setFont(&NoticiaText_Regular9pt7b);
    display.print(".");
    display.setFont(&NoticiaText_BoldItalic20pt7b);
    display.setCursor(55, 170);
    display.println(time);
}
