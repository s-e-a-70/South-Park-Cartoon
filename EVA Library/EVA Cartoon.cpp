#include "config.h"
#include "EVA.h"
int main()
{

     txCreateWindow  (800, 600);


     int t = 0;

     int i = 0;

     while (t <= 1000)
     {
         txClear();

         txSetFillColor (TX_CYAN);

         txRectangle (0,   0,   800, 600);

         DrawSun     (650, 100, 1, 1, ((t / 10) % 2) * 40, TX_YELLOW, TX_WHITE, TX_RED);

         DrawTree    (200, 400, 1, 1, 10, (((t / 25) % 2) * 2 - 1) * 10, 5, 50, TX_RED, TX_YELLOW, TX_PINK);


         for (i = 0; i <= (int)(t/50); i++)
         {

            DrawFlower (20 + i * 50, 450, 5, 5, 0, 10, (((t / 50) % 2) * 2 - 1) * 10, (i % 2) == 0 ? TX_MAGENTA : TX_PINK);

         }


         DrawBird (600 - t, (int)(300 - (sin(t / 50)) * 20), 2, 2, (((t / 50) % 2) * 2 - 1) * 5, TX_WHITE, TX_BLACK, TX_BLACK);

         DrawDog  (100 + (int)(3 * t / 4), 500, -2, 2, (((t / 50) % 2) * 2 - 1) * 5, 20, TX_BROWN, TX_RED, TX_ORANGE);

         t++;

         txSleep(10);
     }

}
