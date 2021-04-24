#include "TXlib.h"

#include "SouthParkLib.h"


void Draw_Start_Titres();

void Draw_Arrival();

void Draw_Sten_Fly();

void Draw_Broflovsky_Fly();

void Draw_Kenny_Fly();

void Draw_Cartman_Fly();

void Draw_Sten_Broflovsky_Kenny_Cartman();

void Draw_Table_Fly();

void Draw_Greeting();

void Draw_Main_Scene();

void Draw_Column_Walk();

void Draw_Kenny_Fall();

void Draw_Farewell();

void Draw_Final_Titres();

void Draw_Increase_Herows();

void Draw_Sten_BlinK();

void Draw_Sten_Talk();

void Draw_Broflovsky_Blink();

void Draw_Broflovsky_Talk();

void Draw_Sten_and_Broflovsky();


int main()
{

    txCreateWindow  (800, 600);

    Draw_Start_Titres();

    txPlaySound ("South Park - Intro.wav", SND_LOOP);

    Draw_Table_Fly();

    Draw_Greeting();

    Draw_Arrival();

    Draw_Main_Scene();

    Draw_Farewell();

    Draw_Final_Titres();

    return 0;

}

void Draw_Start_Titres()
{

    txSetFillColor (TX_BLACK);

    txRectangle    (0, 0,   800, 600);

    txSetColor     (TX_WHITE);

    txSelectFont   ("Times New Roman", 80, 0, FW_BOLD);

    txDrawText     (0, 100, 800, 300, "SOUTH PARK" );

    txSelectFont   ("Times New Roman", 60,0);

    txDrawText     (0, 350, 800, 400, "Free presentation from" );

    txSelectFont   ("Times New Roman", 60, 0, FW_BOLD);

    txDrawText     (0, 450, 800, 500, "Palamarchuk Ekaterina" );


    txSleep(3000);

}

void Draw_Sten_Fly()
{

    int t = 0;

    int ix = 800;

    while (t <= 350)

    {

        txClear();

        Draw_Landscape_Forrest((((t / 20) % 2) * 2 - 1) * 2);

        Draw_Table      (610,      200, 1,         1,         MY_TABLE);

        Draw_Sten       (ix - 2 * t, t,   0.003 * t, 0.003 * t * (((t / 50) % 2) * 2 - 1), MY_BROWN, MY_FACE, MY_LIGHT_RED, 0, 0, 0, 0, 0, 0, 0, 1, 0);

        t++;

        txSleep(20);

    }


    txSetColor     (TX_BLACK);

    txSelectFont   ("Times New Roman", 20, 0, FW_BOLD);

    txTextOut      (40, 500, "Sten\n Marsh");

    txSetColor     (TX_WHITE);

}

void Draw_Kenny_Fly()
{

    int t = 0;

    int ix = 800;

    while (t <= 350)

    {
        txClear();

        Draw_Landscape_Forrest(((( t / 20) % 2) * 2 - 1) * 2);

        txSetColor     (TX_BLACK);

        txSelectFont   ("Times New Roman", 20, 0, FW_BOLD);

        txTextOut      (40, 500, "Sten\n Marsh");

        txTextOut      (205, 500, "Kyle\n Broflovski");


        txSetColor     (TX_WHITE);

        Draw_Table      (610,    200, 1,         1,         MY_TABLE);

        Draw_Sten       (100,    350, 1,         1,         MY_BROWN,  MY_FACE, MY_LIGHT_RED,   0, 0, 0, 0, 0, 0, 0, 0, 0);

        Draw_Broflovsky (275,    350, 1,         1,         TX_ORANGE, MY_FACE, MY_LIGHT_GREEN, 0, 0, 0, 0, 0, 0, 0, 0, 0);

        Draw_Kenny      (ix - t, t,   0.003 * t, 0.003 * t, TX_ORANGE, MY_FACE, MY_BROWN,       0, 0, 0, 0, 0, 0, 1, 0);

        t++;


        txSleep(20);

    }


    txSetColor     (TX_BLACK);

    txSelectFont   ("Times New Roman", 20, 0, FW_BOLD);

    txTextOut      (380, 500, "Kenny\n McCormick");

    txSetColor     (TX_WHITE);


    txSleep(50);

}

void Draw_Broflovsky_Fly()
{

    int t = 0;

    int ix = 800;

    while (t <= 350)

    {

        txClear();

        Draw_Landscape_Forrest((((t / 20) % 2) * 2 - 1) * 2);

        txSetColor      (TX_BLACK);

        txSelectFont    ("Times New Roman", 20, 0, FW_BOLD);

        txTextOut       (40, 500, "Sten\n Marsh");

        txSetColor      (TX_WHITE);

        Draw_Table      (610,             200,            1,         1,         MY_TABLE);

        Draw_Sten       (103,             350, 1,         1,         MY_BROWN,  MY_FACE, MY_LIGHT_RED,   0, 0, 0, 0, 0, 0, 0, 0, 0);

        Draw_Broflovsky (ix - (int)(1.5 * t), t,   0.003 * t, 0.003 * t, TX_ORANGE, MY_FACE, MY_LIGHT_GREEN, 0, 0, 0, 0, 0, 0, 0, (t / 50) % 2, 0);

        t++;


        txSleep(20);

    }

    txSetColor     (TX_BLACK);

    txSelectFont   ("Times New Roman", 20, 0, FW_BOLD);

    txTextOut      (205, 500, "Kyle\n Broflovski");

    txSetColor     (TX_WHITE);


}

void Draw_Cartman_Fly()
{

    int t = 0;

    int ix = 800;

    while (t <= 350)

    {
        txClear();

        Draw_Landscape_Forrest((((t / 20) %2 ) * 2 - 1) * 2);

        txSetColor     (TX_BLACK);

        txSelectFont   ("Times New Roman", 20, 0, FW_BOLD);

        txTextOut      (40,  500,"Sten\n Marsh");

        txTextOut      (205, 500, "Kyle\n Broflovski");

        txTextOut      (380, 500, "Kenny\n McCormick");


        txSetColor     (TX_WHITE);

        Draw_Table      (610,                 200, 1,         1,         MY_TABLE);

        Draw_Sten       (100,                 350, 1,         1,         MY_BROWN,     MY_FACE, MY_LIGHT_RED,   0, 0, 0, 0, 0, 0, 0, 0, 0);

        Draw_Broflovsky (275,                 350, 1,         1,         TX_ORANGE,    MY_FACE, MY_LIGHT_GREEN, 0, 0, 0, 0, 0, 0, 0, 0, 0);

        Draw_Kenny      (450,                 350, 1,         1,         TX_ORANGE,    MY_FACE, MY_BROWN,       0, 0, 0, 0, 0, 0, 0, 0);

        Draw_Cartman    (ix - (int)(0.5 * t), t,   0.003 * t, 0.003 * t * (((t / 50) % 2) * 2 - 1), MY_LIGHT_RED, MY_FACE, TX_YELLOW, 0, 0, 0, 0, 0, 0, 0, 0, 1);

        t++;


        txSleep(20);

    }

    txSetColor     (TX_BLACK);

    txSelectFont   ("Times New Roman", 20, 0, FW_BOLD);

    txTextOut      (565, 500, "Eric\n Cartman");

    txSetColor     (TX_WHITE);


    txSleep(20);

}

void Draw_Sten_Brodlovsky_Kenny_Cartman()
{

    txClear();

    Draw_Landscape_Forrest(0);

    Draw_Table      (610, 200, 1, 1, MY_TABLE);

    Draw_Sten       (100, 350, 1, 1, MY_BROWN,     MY_FACE, MY_LIGHT_RED,   0, 0, 0, 0, 0, 0, 0, 0, 0 );

    Draw_Broflovsky (275, 350, 1, 1, TX_ORANGE,    MY_FACE, MY_LIGHT_GREEN, 0, 0, 0, 0, 0, 0, 0, 0, 0 );

    Draw_Kenny      (450, 350, 1, 1, TX_ORANGE,    MY_FACE, MY_BROWN,       0, 0, 0, 0, 0, 0, 0, 0    );

    Draw_Cartman    (625, 350, 1, 1, MY_LIGHT_RED, MY_FACE, TX_YELLOW,      0, 0, 0, 0, 0, 0, 0, 0, 0 );

    txSetColor      (TX_BLACK);

    txSelectFont    ("Times New Roman", 20, 0, FW_BOLD);

    txTextOut       (40,  500, "Sten\n Marsh");

    txTextOut       (205, 500, "Kyle\n Broflovski");

    txTextOut       (380, 500, "Kenny\n McCormick");

    txTextOut       (565, 500, "Eric\n Cartman");

    txSetColor      (TX_WHITE);


}

void Draw_Arrival()
{

    Draw_Sten_Fly();

    Draw_Broflovsky_Fly();

    Draw_Kenny_Fly();

    Draw_Cartman_Fly();

    Draw_Sten_Brodlovsky_Kenny_Cartman();


    txSleep(800);

}

void Draw_Table_Fly()
{

  int ix = 610;

  int iy = 350;

  int t = 0;

  while (t <= 100)

  {
        txClear();

        Draw_Landscape_Forrest(0);

        Draw_Table    ((int)(ix - 5 * t), (int)(iy - 2.5 * t), t / 25, t / 25, MY_TABLE);

        t++;


        txSleep(10);

  }

   txSleep(800);

}

void Draw_Greeting()
{

   int t = 0;

   while (t <= 300)

   {
        txClear();

        Draw_Landscape_Forrest(0);

        Draw_Kenny      (200, 80,  1, 1, TX_ORANGE,    MY_FACE, MY_BROWN,       0, 0,             (t / 5) % 2,  0,            0,            0,            0,                  0);

        Draw_Table      (110, 150, 4, 4, MY_TABLE);

        Draw_Cartman    (150, 450, 1, 1, MY_LIGHT_RED, MY_FACE, TX_YELLOW,      0, (t / 10) % 2,  0,            0,            0,            1,            ((t / 25) % 2) * 10, 0, 0);

        Draw_Sten       (550, 450, 1, 1, MY_BROWN,     MY_FACE, MY_LIGHT_RED,   0, 0,             (t / 50) % 2, 0,            0,            0,            0,                  0, (t / 25) % 2);

        Draw_Broflovsky (670, 450, 1, 1, TX_ORANGE,    MY_FACE, MY_LIGHT_GREEN, 0, 0,             0,            0,            (t / 20) % 2, (t / 10) % 2, 0,                  0,  0);

        t++;

        txSleep(20);
   }


    txSleep(500);

}

void Draw_Column_Walk()
{

    Draw_Landscape_Town();

    txSleep(50);

    int t = 0;

    while ( t <= 120)

   {
        txClear();

        Draw_Landscape_Town();

        Draw_Sten       (-400 + 5 * t, 390, 0.8, 0.8, MY_BROWN,  MY_FACE, MY_LIGHT_RED,   0, 0, 0, 0, 0, 0,           2 * (t % 2),     0, 1);

        Draw_Broflovsky (-250 + 5 * t, 390, 0.8, 0.8, TX_ORANGE, MY_FACE, MY_LIGHT_GREEN, 0, 0, 0, 0, 0, 0,           2 * (t % 2) + 1, 0, 1);

        Draw_Kenny      (-100 + 5 * t, 390, 0.8, 0.8, TX_ORANGE, MY_FACE, MY_BROWN,       0, 0, 0, 0, 0, 2 * (t % 2), 0,               1);

        Draw_Cartman    (50 + 5 * t,   390, 0.8, 0.8, MY_LIGHT_RED, MY_FACE, TX_YELLOW,   0, 0, 0, 0, 0, 0,           2 * (t % 2) + 1, 0, 1);

        t++;


        txSleep(70);
    }


}

void Draw_Kenny_Fall()
{

    int t = 0;

    while (t <= 27)

    {

        txClear();

        Draw_Landscape_Town();

        Draw_Sten       (250, 390,         0.8, 0.8, MY_BROWN,  MY_FACE, MY_LIGHT_RED,   0, 0, 0, 0, 0, 0, 0, 0, 1);

        Draw_Broflovsky (400, 390,         0.8, 0.8, TX_ORANGE, MY_FACE, MY_LIGHT_GREEN, 0, 0, 0, 0, 0, 0, 0, 0, 1);

        Draw_Kenny      (550, 390 + 5 * t, 0.8, 0.8, TX_ORANGE, MY_FACE, MY_BROWN,       0, 0, 0, 0, 0, 0, 0, 0);

        Draw_Cartman    (700, 390,         0.8, 0.8, MY_LIGHT_RED, MY_FACE, TX_YELLOW,   0, 0, 0, 0, 0, 0, 0, 0, 1);

        Draw_Trap       (TX_WHITE, TX_BLACK);

        t++;

        txSleep(15);

    }

    txPlaySound (NULL);


    txSleep(200);


    txClear();

    Draw_Landscape_Town();

    Draw_Sten       (250, 390, 0.8, 0.8, MY_BROWN,  MY_FACE, MY_LIGHT_RED,   0, 0, 0, 0, 0, 1, 0, 0, 0);

    Draw_Broflovsky (400, 390, 0.8, 0.8, TX_ORANGE, MY_FACE, MY_LIGHT_GREEN, 0, 0, 0, 0, 0, 1, 0, 0, 0);

    Draw_Cartman    (700, 390, 0.8, 0.8, MY_LIGHT_RED, MY_FACE, TX_YELLOW,   0, 0, 0, 0, 0, 1, 0, 0, 0);


    txSleep(500);

}

void Draw_Main_Scene()
{

    Draw_Column_Walk();

    Draw_Kenny_Fall();

}

void Draw_Increase_Herows()
{

    int t = 0;

    Draw_Landscape_Town();

    Draw_Cartman    (700, 390, 0.8, 0.8, MY_LIGHT_RED, MY_FACE, TX_YELLOW,   0, 0, 0, 0, 0, 1, 0, 0, 0);

    while (t <= 100)

    {
        txClear();

        Draw_Landscape_Town();

        Draw_Sten       (350 - 1.5 * t, 390 - t, 0.8 + t / 100, 0.8 + t / 100, MY_BROWN,  MY_FACE, MY_LIGHT_RED,   0, 0, 0, 0, 0, 0, 0, 0, 0);

        Draw_Broflovsky (500 + t / 5,   390 - t, 0.8 + t / 100, 0.8 + t / 100, TX_ORANGE, MY_FACE, MY_LIGHT_GREEN, 0, 0, 0, 0, 0, 0, 0, 0, 0);

        Draw_Cartman    (700, 390, 0.8, 0.8, MY_LIGHT_RED, MY_FACE, TX_YELLOW,   0, 0, 0, 0, 0, 1, 0, 0, 0);

        t++;

        txSleep(20);

    }

    txSleep(50);

}

void Draw_Sten_BlinK()
{

    int t = 0;

    while (t <= 50)

    {

        txClear();

        Draw_Landscape_Town();

        Draw_Cartman    (700, 390, 0.8, 0.8, MY_LIGHT_RED, MY_FACE, TX_YELLOW,   0, 0, 0, 0, 0,        1, 0, 0, 0);

        Draw_Sten       (200, 290, 1.8, 1.8, MY_BROWN,  MY_FACE, MY_LIGHT_RED,   0, 0, 0, 0, (t/10)%2, 0, 0, 0, 0);

        Draw_Broflovsky (520, 290, 1.8, 1.8, TX_ORANGE, MY_FACE, MY_LIGHT_GREEN, 0, 0, 0, 0, 0,        0, 0, 1, 0);

        t++;

        txSleep(20);

    }

}

void Draw_Sten_Talk()
{

    int t = 0;

    while(t <= 50)

    {

        txClear();

        Draw_Landscape_Town();

        Draw_Sten       (200, 290, 1.8, 1.8, MY_BROWN,  MY_FACE, MY_LIGHT_RED,   0, 0, 0, 1, 0, (t / 10) % 2, 0, 0, 0);

        Draw_Broflovsky (520, 290, 1.8, 1.8, TX_ORANGE, MY_FACE, MY_LIGHT_GREEN, 0, 0, 0, 0, 0, 0,            0, 1, 0);

        Draw_Cartman    (700, 390, 0.8, 0.8, MY_LIGHT_RED, MY_FACE, TX_YELLOW,   0, 0, 0, 0, 0, 1,            0, 0, 0);

        txSetColor     (TX_BLACK);

        txSelectFont   ("Times New Roman", 40, 0, FW_BOLD);

        txTextOut (50, 500, "Oh my God! They killed Kenny!");

        t++;

        txSleep(20);

    }


    txSleep(100);

}

void Draw_Broflovsky_Blink()
{

    int t = 0;

    while(t <= 50)

    {

        txClear();

        Draw_Landscape_Town();

        Draw_Sten       (200, 290, 1.8, 1.8, MY_BROWN,  MY_FACE, MY_LIGHT_RED,   0, 0, 0, 0, 0,        0, 0, 0, 1);

        Draw_Broflovsky (520, 290, 1.8, 1.8, TX_ORANGE, MY_FACE, MY_LIGHT_GREEN, 0, 0, 0, 0, (t/10)%2, 0, 0, 0, 0);

        Draw_Cartman    (700, 390, 0.8, 0.8, MY_LIGHT_RED, MY_FACE, TX_YELLOW,   0, 0, 0, 0, 0,        1, 0, 0, 0);

        t++;

        txSleep(20);

    }

}

void Draw_Broflovsky_Talk()
{

    int t = 0;

    while(t <=51 )

    {

        txClear();

        Draw_Landscape_Town();

        Draw_Sten       (200, 290, 1.8, 1.8, MY_BROWN,  MY_FACE, MY_LIGHT_RED,   0, 0, 0, 0, 0, 0,            0, 0, 1);

        Draw_Broflovsky (520, 290, 1.8, 1.8, TX_ORANGE, MY_FACE, MY_LIGHT_GREEN, 0, 0, 1, 0, 0, (t / 10) % 2, 0, 0, 0);

        Draw_Cartman    (700, 390, 0.8, 0.8, MY_LIGHT_RED, MY_FACE, TX_YELLOW,   0, 0, 0, 0, 0, 1,            0, 0, 0);

        t++;

        txSetColor     (TX_BLACK);

        txSelectFont   ("Times New Roman", 40, 0, FW_BOLD);

        txTextOut (450, 500, "You, Bastards!");

        txSleep(20);

    }


    txSleep(100);

}

void Draw_Sten_and_Broflovsky()
{

    txClear();

    Draw_Landscape_Town();

    Draw_Sten       (200, 290, 1.8, 1.8, MY_BROWN,  MY_FACE, MY_LIGHT_RED,   0, 0, 0, 0, 0, 0, 0, 0, 0);

    Draw_Broflovsky (520, 290, 1.8, 1.8, TX_ORANGE, MY_FACE, MY_LIGHT_GREEN, 0, 0, 0, 0, 0, 0, 0, 0, 0);

    Draw_Cartman    (700, 390, 0.8, 0.8, MY_LIGHT_RED, MY_FACE, TX_YELLOW,   0, 0, 0, 0, 0, 1, 0, 0, 0);


    txSleep(500);

}

void Draw_Farewell()
{

    txClear();

    Draw_Increase_Herows();

    Draw_Sten_BlinK ();

    txPlaySound ("South Park - They killed Kenny.wav", SND_ASYNC);

    Draw_Sten_Talk ();

    Draw_Broflovsky_Blink ();

    Draw_Broflovsky_Talk ();

    Draw_Sten_and_Broflovsky();

}

void Draw_Final_Titres ()
{

    txSetFillColor ( TX_BLACK );

    txRectangle    (0, 0, 800, 600);

    txSetColor     ( TX_WHITE );

    txSelectFont   ("Times New Roman", 100, 0, FW_BOLD);

    txDrawText     (0, 200, 800, 300, "THE END" );

}

