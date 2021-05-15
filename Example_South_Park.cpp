#include "TXlib.h"

#include "SouthParkLib.h"

int main()
{

     txCreateWindow         (800, 700);

     Draw_Landscape_Forrest (0);

     Draw_Kenny             (400, 300, 2.5, 2.5, TX_ORANGE, MY_FACE, MY_BROWN, 0, 0, 0, 0, 0, 0, 0, 0);


     txSetColor             (TX_BLACK);

     txSelectFont           ("Arial", 51, 0, FW_BOLD);

     txDrawText             (200, 20,  700, 200, "If you turn on subtitles  in South Park\n");

     txSetColor             (TX_WHITE);

     txSelectFont           ("Arial", 50, 0, FW_BOLD);

     txDrawText             (200, 20,  700, 200, "If you turn on subtitles  in South Park\n");


     txSelectFont           ("Arial", 45, 0, FW_BOLD);

     txDrawText             (60,  600, 700, 700, "You can see everything Kenny says");


}
