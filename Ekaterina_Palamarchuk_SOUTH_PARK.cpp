#include "TXlib.h"

const COLORREF MY_FIR_TREE     = RGB (32 , 203, 16 );

      COLORREF MY_FACE         = RGB (239, 228, 176);

      COLORREF MY_BROWN        = RGB (128,  64, 0  );

      COLORREF MY_MOUNTAIN     = RGB (128,  64, 0  );

      COLORREF MY_LIGHT_RED    = RGB (255,   0, 0  );

      COLORREF MY_LIGHT_GREEN  = RGB (0  , 255, 0  );

      COLORREF MY_GREEN        = RGB (0  , 170, 0  );

      COLORREF MY_TABLE        = RGB (185, 122, 87 );

      COLORREF MY_ROSE         = RGB (255, 128, 128);


void Draw_Start_Titres();

void Draw_Arrival();

void Draw_Table_Fly();

void Draw_Greeting();

void Draw_Main_Scene();

void Draw_Farewell();

void Draw_Final_Titres();



void Draw_Landscape_Forrest();

void Draw_Landscape_Town();

void Draw_Mountain_Chain();


void Draw_Trap       (COLORREF Ground_Color, COLORREF Trap_Color);

void Draw_Background (COLORREF Sky_Color,    COLORREF Ground_Color);

void Draw_Mountain   (int x, int y,          COLORREF Mountain_Color );

void Draw_Fir_tree   (int x, int y,          COLORREF Fir_Tree_Color);

void Draw_Table      (int x, int y, float sizeX, float sizeY, COLORREF Table_Color);

void Draw_Window     (int x, int y, int lx,      int ly);


void Draw_Body           (int x, int y, float sizeX, float sizeY, int Jump, COLORREF Color);

void Draw_Left_Hand      (int x, int y, float sizeX, float sizeY, int Jump, int Rise_Left_Hand, int Stretch_Left_Hand,

                          COLORREF Hand_Color, COLORREF Wrist_Color,int Turn_Left, int Turn_Right);

void Draw_Right_Hand     (int x, int y, float sizeX, float sizeY, int Jump, int Rise_Right_Hand, int Stretch_Right_Hand,

                          COLORREF Hand_Color, COLORREF Wrist_Color, int Turn_Left, int Turn_Right);

void Draw_Face           (int x, int y, float sizeX, float sizeY, int Jump, COLORREF Face_Color);

void Draw_Eyes           (int x, int y, float sizeX, float sizeY, int Jump, int Close_Eyes, int Turn_Left, int Turn_Right);

void Draw_Mouth          (int x, int y, float sizeX, float sizeY, int Jump, int Open_Mouth, int Turn_Left, int Turn_Right);

void Draw_Legs           (int x, int y, float sizeX, float sizeY,int Jump);

void Draw_Sten_Hat       (int x, int y, float sizeX, float sizeY,int Jump);

void Draw_Broflovsky_Hat (int x, int y, float sizeX, float sizeY,int Jump);

void Draw_Kenny_Had      (int x, int y, float sizeX, float sizeY,int Jump);

void Draw_Sten           (int x, int y, float sizeX, float sizeY, COLORREF Body_Color, COLORREF Face_Color, COLORREF Wrist_Color,

                          int Rise_Left_Hand, int Rise_Right_Hand, int Stretch_Left_Hand, int Stretch_Right_Hand, int Close_Eyes, int Open_Mouth, int Jump, int Turn_Left, int Turn_Right );

void Draw_Broflovsky     (int x, int y, float sizeX, float sizeY, COLORREF Body_Color, COLORREF Face_Color, COLORREF Wrist_Color,

                          int Rise_Left_Hand, int Rise_Right_Hand, int Stretch_Left_Hand, int Stretch_Right_Hand, int Close_Eyes, int Open_Mouth, int Jump, int Turn_Left, int Turn_Right );

void Draw_Kenny          (int x, int y, float sizeX, float sizeY, COLORREF Body_Color, COLORREF Face_Color, COLORREF Wrist_Color,

                          int Rise_Left_Hand, int Rise_Right_Hand, int Stretch_Left_Hand, int Stretch_Right_Hand, int Close_Eyes, int Jump, int Turn_Left, int Turn_Right);

int main()
{
    txCreateWindow  (800,  600);

    Draw_Start_Titres();

    Draw_Table_Fly();

    Draw_Arrival();

    Draw_Main_Scene();

    Draw_Farewell();

    Draw_Final_Titres();

    return 0;

}

void Draw_Start_Titres()
{

    txSetFillColor ( TX_BLACK );

    txRectangle    (0, 0,   800, 600);

    txSetColor     ( TX_WHITE );

    txSelectFont   ("Times New Roman", 80, 0, FW_BOLD);

    txDrawText     (0, 100, 800, 300, "SOUTH PARK" );

    txSelectFont   ("Times New Roman", 60,0);

    txDrawText     (0, 350, 800, 400, "Free presentation from" );

    txSelectFont   ("Times New Roman", 60, 0, FW_BOLD);

    txDrawText     (0, 450, 800, 500, "Palamarchuk Ekaterina" );


    txSleep(3000);
}


void Draw_Arrival()
{
    int t=0;

    int ix=800;

    while (t<=350)
    {

        txClear();

        Draw_Landscape_Forrest();

        Draw_Table      (610,    200, 1,       1,       MY_TABLE);

        Draw_Sten       (ix-2*t, t,   0.003*t, 0.003*t, MY_BROWN, MY_FACE, MY_LIGHT_RED, 0, 0, 0, 0, 0, 0, 0, 1, 0 );

        t++;

        txSleep(20);

    }


    txSetColor     (TX_BLACK);

    txSelectFont   ("Times New Roman", 30, 0, FW_BOLD);

    txTextOut      (30, 500, "Sten Marsh");

    txSetColor     (TX_WHITE);


    t=0;

    while (t<=350)
    {

        txClear();

        Draw_Landscape_Forrest();

        txSetColor     (TX_BLACK);

        txSelectFont   ("Times New Roman", 30, 0, FW_BOLD);

        txTextOut      (30, 500, "Sten Marsh");

        txSetColor     (TX_WHITE);

        Draw_Table      (610,             200,          1,       1,       MY_TABLE);

        Draw_Sten       (103,             350, 1,       1,       MY_BROWN, MY_FACE, MY_LIGHT_RED,    0, 0, 0, 0, 0, 0, 0, 0, 0 );

        Draw_Broflovsky (ix-(int)(1.5*t), t,   0.003*t, 0.003*t, TX_ORANGE, MY_FACE, MY_LIGHT_GREEN, 0, 0, 0, 0, 0, 0, 0, 1, 0 );

        t++;

        txSleep(20);

    }

    txSetColor     (TX_BLACK);

    txSelectFont   ("Times New Roman", 30, 0, FW_BOLD);

    txTextOut      (205, 500, "Kyle Broflovski");

    txSetColor     (TX_WHITE);


    t=0;

    while (t<=350)
    {
        txClear();

        Draw_Landscape_Forrest();

        txSetColor     (TX_BLACK);

        txSelectFont   ("Times New Roman", 30, 0, FW_BOLD);

        txTextOut      (30, 500, "Sten Marsh");

        txTextOut      (205, 500, "Kyle Broflovski");

        txSetColor     (TX_WHITE);

        Draw_Table      (610,  200, 1,       1,       MY_TABLE);

        Draw_Sten       (100,  350, 1,       1,       MY_BROWN,  MY_FACE, MY_LIGHT_RED,   0, 0, 0, 0, 0, 0, 0, 0, 0);

        Draw_Broflovsky (275,  350, 1,       1,       TX_ORANGE, MY_FACE, MY_LIGHT_GREEN, 0, 0, 0, 0, 0, 0, 0, 0, 0);

        Draw_Kenny      (ix-t, t,   0.003*t, 0.003*t, TX_ORANGE, MY_FACE, MY_BROWN,       0, 0, 0, 0, 0, 0, 1, 0   );

        t++;

        txSleep(20);

    }

    txSetColor     (TX_BLACK);

    txSelectFont   ("Times New Roman", 30, 0, FW_BOLD);

    txTextOut      (410, 500, "Kenny McCormick");

    txSetColor     (TX_WHITE);


    txSleep(20);

    txClear();

    Draw_Landscape_Forrest();

    Draw_Table      (610, 200, 1, 1, MY_TABLE);

    Draw_Sten       (100, 350, 1, 1, MY_BROWN,  MY_FACE, MY_LIGHT_RED,   0, 0, 0, 0, 0, 0, 0, 0, 0 );

    Draw_Broflovsky (275, 350, 1, 1, TX_ORANGE, MY_FACE, MY_LIGHT_GREEN, 0, 0, 0, 0, 0, 0, 0, 0, 0 );

    Draw_Kenny      (450, 350, 1, 1, TX_ORANGE, MY_FACE, MY_BROWN,       0, 0, 0, 0, 0, 0, 0, 0    );

    txSetColor     (TX_BLACK);

    txSelectFont   ("Times New Roman", 30, 0, FW_BOLD);

    txTextOut      (30, 500, "Sten\n Marsh"     );

    txTextOut      (205, 500, "Kyle\n Broflovski");

    txTextOut      (410, 500, "Kenny\n McCormick");

    txSetColor     (TX_WHITE);


    txSleep(800);


}

void Draw_Table_Fly()
{
  int ix=610;

  int iy=350;

  int t=0;

  while (t<=100)

  {
        txClear();

        Draw_Landscape_Forrest();

        Draw_Table    ((int)(ix-5*t), (int)(iy-2.5*t), t/25, t/25, MY_TABLE);

        t++;

        txSleep(10);

  }

   txSleep(800);

}
void Draw_Greeting()
{
   int t=0;

   while (t<=100)

   {
        txClear();

        Draw_Landscape_Forrest();

        Draw_Kenny      (200, 80,  1, 1, TX_ORANGE, MY_FACE, MY_BROWN,       0, 0,    t%2, 0, 0, 0, 0, 0 );

        Draw_Table      (110, 150, 4, 4, MY_TABLE                                                                      );

        Draw_Sten       (100, 450, 1, 1, MY_BROWN,  MY_FACE, MY_LIGHT_RED,   0, 0, 0, 1,   0, 0, 0, 0, 0 );

        Draw_Broflovsky (620, 450, 1, 1, TX_ORANGE, MY_FACE, MY_LIGHT_GREEN, 0, 0, 1, 0,   0, 0, 0, 0, 0 );

        t++;

        txSleep(20);

   }

}

void Draw_Main_Scene()

{

    int t;

    Draw_Landscape_Town();

    txSleep(50);

    t=0;

    while (t<=150)

   {
        txClear();

        Draw_Landscape_Town();

        Draw_Sten       (-400+5*t, 390, 0.8, 0.8, MY_BROWN,  MY_FACE, MY_LIGHT_RED,   0, 0, 0, 0, 0, 0,       2*(t%2),   0, 1 );

        Draw_Broflovsky (-250+5*t, 390, 0.8, 0.8, TX_ORANGE, MY_FACE, MY_LIGHT_GREEN, 0, 0, 0, 0, 0, 0,       2*(t%2)+1, 0, 1 );

        Draw_Kenny      (-100+5*t, 390, 0.8, 0.8, TX_ORANGE, MY_FACE, MY_BROWN,       0, 0, 0, 0, 0, 2*(t%2), 0,         1    );

        t++;

        txSleep(70);
    }


    t=0;

    while (t<=27)

    {
        txClear();

        Draw_Landscape_Town();

        Draw_Sten       (350, 390,     0.8, 0.8, MY_BROWN,  MY_FACE, MY_LIGHT_RED,   0, 0, 0, 0, 0, 0, 0, 0, 1);

        Draw_Broflovsky (500, 390,     0.8, 0.8, TX_ORANGE, MY_FACE, MY_LIGHT_GREEN, 0, 0, 0, 0, 0, 0, 0, 0, 1);

        Draw_Kenny      (650, 390+5*t, 0.8, 0.8, TX_ORANGE, MY_FACE, MY_BROWN,       0, 0, 0, 0, 0, 0, 0, 0   );

        Draw_Trap       (TX_WHITE, TX_BLACK);

        t++;

        txSleep(15);
    }


    txClear();

    Draw_Landscape_Town();

    Draw_Sten       (350, 390,     0.8, 0.8, MY_BROWN,  MY_FACE, MY_LIGHT_RED,   0, 0, 0, 0, 0, 1, 0, 0, 0);

    Draw_Broflovsky (500, 390,     0.8, 0.8, TX_ORANGE, MY_FACE, MY_LIGHT_GREEN, 0, 0, 0, 0, 0, 1, 0, 0, 0);

}

void Draw_Farewell()
{

    int t;

    txClear();

    Draw_Landscape_Town();

    while(t<=100)
    {
        txClear();

        Draw_Landscape_Town();

        Draw_Sten       (350-1.5*t, 390-t, 0.8+t/100, 0.8+t/100, MY_BROWN,  MY_FACE, MY_LIGHT_RED,   0, 0, 0, 0, 0, 0, 0, 0, 0);

        Draw_Broflovsky (500+t/5,   390-t, 0.8+t/100, 0.8+t/100, TX_ORANGE, MY_FACE, MY_LIGHT_GREEN, 0, 0, 0, 0, 0, 0, 0, 0, 0);

        t++;

        txSleep(20);

    }

    txSleep(50);


    t=0;

    while(t<=50)
    {

        txClear();

        Draw_Landscape_Town();

        Draw_Sten       (200, 290, 1.8, 1.8, MY_BROWN,  MY_FACE, MY_LIGHT_RED,   0, 0, 0, 0, (t/10)%2, 0, 0, 0, 0);

        Draw_Broflovsky (520, 290, 1.8, 1.8, TX_ORANGE, MY_FACE, MY_LIGHT_GREEN, 0, 0, 0, 0, 0,        0, 0, 1, 0);

        t++;

        txSleep(20);

    }


    t=0;

    while(t<=50)
    {

        txClear();

        Draw_Landscape_Town();

        Draw_Sten       (200, 290, 1.8, 1.8, MY_BROWN,  MY_FACE, MY_LIGHT_RED,   0, 0, 0, 0, 0, (t/10)%2, 0, 0, 0);

        Draw_Broflovsky (520, 290, 1.8, 1.8, TX_ORANGE, MY_FACE, MY_LIGHT_GREEN, 0, 0, 0, 0, 0, 0,        0, 1, 0);

        t++;

        txSetColor     (TX_BLACK);

        txSelectFont   ("Times New Roman", 40, 0, FW_BOLD);

        txTextOut (50, 500, "They killed Kenny again!");

        txSleep(20);

    }


    txSleep(100);


    t=0;

    while(t<=50)
    {

        txClear();

        Draw_Landscape_Town();

        Draw_Sten       (200, 290, 1.8, 1.8, MY_BROWN,  MY_FACE, MY_LIGHT_RED,   0, 0, 0, 0, 0,        0, 0, 0, 1);

        Draw_Broflovsky (520, 290, 1.8, 1.8, TX_ORANGE, MY_FACE, MY_LIGHT_GREEN, 0, 0, 0, 0, (t/10)%2, 0, 0, 0, 0);

        t++;

        txSleep(20);

    }


    t=0;

    while(t<=51)
    {

        txClear();

        Draw_Landscape_Town();

        Draw_Sten       (200, 290, 1.8, 1.8, MY_BROWN,  MY_FACE, MY_LIGHT_RED,   0, 0, 0, 0, 0, 0,        0, 0, 1);

        Draw_Broflovsky (520, 290, 1.8, 1.8, TX_ORANGE, MY_FACE, MY_LIGHT_GREEN, 0, 0, 0, 0, 0, (t/10)%2, 0, 0, 0);

        t++;

        txSetColor     (TX_BLACK);

        txSelectFont   ("Times New Roman", 40, 0, FW_BOLD);

        txTextOut (450, 500, "Bastards!");

        txSleep(20);

    }


    txSleep(100);


    txClear();

    Draw_Landscape_Town();

    Draw_Sten       (200, 290, 1.8, 1.8, MY_BROWN,  MY_FACE, MY_LIGHT_RED,   0, 0, 0, 0, 0, 0, 0, 0, 0);

    Draw_Broflovsky (520, 290, 1.8, 1.8, TX_ORANGE, MY_FACE, MY_LIGHT_GREEN, 0, 0, 0, 0, 0, 0, 0, 0, 0);


    txSleep(500);

}

void Draw_Final_Titres()
{

    txSetFillColor ( TX_BLACK );

    txRectangle    (0, 0,   800, 600);

    txSetColor     ( TX_WHITE );

    txSelectFont   ("Times New Roman", 100, 0, FW_BOLD);

    txDrawText     (0, 200, 800, 300, "THE END" );

}

void Draw_Landscape_Forrest()
{
    Draw_Background (TX_LIGHTCYAN, TX_WHITE);

     Draw_Mountain_Chain();

     for (int i=0; i<4; i++)
     {
         Draw_Fir_tree ( 50+200*i, 400, MY_FIR_TREE);
     }

}
 void Draw_Window(int x, int y, int lx, int ly)
 {

    txSetFillColor ( TX_LIGHTCYAN );

    txSetColor     (MY_BROWN, 3);

    txRectangle    (x,      y,       x+lx,   y+ly  );

    txLine         (x,      y+ly/2,  x+lx,   y+ly/2);

    txLine         (x+lx/2, y,       x+lx/2, y+ly  );

    txSetColor     (TX_WHITE);

 }

void Draw_Landscape_Town()
{
    Draw_Background (TX_LIGHTCYAN, TX_WHITE);

    Draw_Mountain_Chain();


    txSetFillColor  ( TX_GREY );

    POINT Grey_House[5] = {{0, 400}, {0, 200}, {100, 100}, {200, 200},{200, 400}};

    txPolygon       ( Grey_House,5 );

    Draw_Window     (20,  200, 60, 60);

    Draw_Window     (120, 200, 60, 60);

    Draw_Window     (20,  300, 60, 60);

    Draw_Window     (120, 300, 60, 60);


    txSetFillColor ( TX_BLUE );

    POINT Blue_House[5] = {{200, 400}, {200, 300}, {400, 200}, {600, 300},{600, 400}};

    txPolygon      ( Blue_House,5 );

    Draw_Window    (220, 300, 60 , 60);

    Draw_Window    (520, 300, 60 , 60);

    Draw_Window    (460, 300, 60 , 60);



    txSetFillColor ( MY_BROWN );

    txRectangle    (320, 300, 400, 400);

    txSetFillColor ( TX_BROWN );

    POINT  Brown_House[5] = {{600, 400}, {600, 250}, {700, 150}, {800, 250},{800, 400}};

    txPolygon      ( Brown_House,5 );

    Draw_Window    (700, 300, 80, 60);

    txSetFillColor ( MY_BROWN );

    txRectangle    (620, 300, 670, 400);


    txSetFillColor ( TX_BLACK );

    txSetColor     ( TX_BLACK );

    txPie	       (600, 450, 700, 500, 0, 360);

}
void Draw_Background(COLORREF Sky_Color, COLORREF Ground_Color )
{

    txSetFillColor ( Sky_Color );

    txRectangle    (0, 0, 800, 600);


    txSetFillColor ( Ground_Color );

    txRectangle    (0, 400, 800, 600);

}

void Draw_Trap(COLORREF Ground_Color, COLORREF Trap_Color)
{

    txSetFillColor ( Ground_Color );

    txRectangle    (0, 475, 800, 600);


    txSetColor( TX_BLACK );

    txSetFillColor ( Trap_Color );

    txPie	( 600,450,700, 500, 180, 180);

}
void Draw_Mountain(int x, int y, COLORREF Mountain_Color )
{

    txSetFillColor ( Mountain_Color );

    POINT mountain[3] = {{x-250, y+280}, {x, y}, {x+250, y+280}};

    txPolygon (mountain, 3);

    txSetFillColor ( TX_WHITE );

    POINT Snow_Cap[3] = {{x-30,  y+30},  {x, y}, {x+30,  y+30 }};

    txPolygon (Snow_Cap, 3);

}
void Draw_Mountain_Chain()
{

    for (int i=0; i<4; i++)
    {
        i%2==1 ? Draw_Mountain (150+200*i, 120, TX_GREEN) : Draw_Mountain (150+200*i, 120, TX_CYAN);
    }

}

void Draw_Body(int x, int y, float sizeX, float sizeY, int Jump, COLORREF Color)
{
     txSetFillColor ( Color );

     POINT Body[4] = {{x-50*sizeX, y+90*sizeY+Jump},

                      {x-30*sizeX, y+20*sizeY+Jump},

                      {x+30*sizeX, y+20*sizeY+Jump},

                      {x+50*sizeX,y+90*sizeY+Jump}};

     txPolygon      (Body, 4);
}

void Draw_Left_Hand(int x, int y, float sizeX, float sizeY, int Jump, int Rise_Left_Hand, int Stretch_Left_Hand,

                    COLORREF Hand_Color, COLORREF Wrist_Color, int Turn_Left, int Turn_Right)
{
     txSetFillColor ( Hand_Color );

     POINT Left_Hand[4] =  {{x-50*sizeX+20*Rise_Left_Hand*sizeX-10*Stretch_Left_Hand*sizeX+40*Turn_Left*sizeX+40*Turn_Right*sizeX,

                             y+90*sizeY-70*Rise_Left_Hand*sizeY-50*Stretch_Left_Hand*sizeY+Jump},

                            {x-30*sizeX-30*Rise_Left_Hand*sizeX-30*Stretch_Left_Hand*sizeX+20*Turn_Left*sizeX+20*Turn_Right*sizeX,

                             y+20*sizeY-30*Rise_Left_Hand*sizeY+Jump},

                            {x-10*sizeX-30*Rise_Left_Hand*sizeX+20*Turn_Left*sizeX+20*Turn_Right*sizeX,

                             y+20*sizeY-30*Rise_Left_Hand*sizeY+Jump},

                            {x-30*sizeX+20*Rise_Left_Hand*sizeX+20*Stretch_Left_Hand*sizeX+40*Turn_Left*sizeX+40*Turn_Right*sizeX,

                             y+90*sizeY-70*Rise_Left_Hand*sizeY-50*Stretch_Left_Hand*sizeY+Jump}};

     txPolygon      (Left_Hand,4);

     txSetFillColor ( Wrist_Color );

     txCircle       (x-40*sizeX-20*Rise_Left_Hand*sizeX-20*Stretch_Left_Hand*sizeX+40*Turn_Left*sizeX+40*Turn_Right*sizeX,

                     y+80*sizeY-80*Rise_Left_Hand*sizeY-50*Stretch_Left_Hand*sizeY+Jump,

                     12*sizeX);

}

void Draw_Right_Hand (int x, int y, float sizeX, float sizeY, int Jump, int Rise_Right_Hand, int Stretch_Right_Hand,

                      COLORREF Hand_Color, COLORREF Wrist_Color, int Turn_Left, int Turn_Right)
{
     txSetFillColor ( Hand_Color );

     POINT Right_Hand[4] = {{x+30*sizeX-20*Rise_Right_Hand*sizeX-20*Stretch_Right_Hand*sizeX-40*Turn_Left*sizeX-40*Turn_Right*sizeX,

                             y+90*sizeY-70*Rise_Right_Hand*sizeY-50*Stretch_Right_Hand*sizeY+Jump},

                            {x+10*sizeX+30*Rise_Right_Hand*sizeX-20*Turn_Left*sizeX-20*Turn_Right*sizeX,

                             y+20*sizeY-30*Rise_Right_Hand*sizeY+Jump},

                            {x+30*sizeX+30*Rise_Right_Hand*sizeX+30*Stretch_Right_Hand*sizeX-20*Turn_Left*sizeX-20*Turn_Right*sizeX,

                             y+20*sizeY-30*Rise_Right_Hand*sizeY+Jump},

                            {x+50*sizeX-20*Rise_Right_Hand*sizeX+10*Stretch_Right_Hand*sizeX-40*Turn_Left*sizeX-40*Turn_Right*sizeX,

                             y+90*sizeY-70*Rise_Right_Hand*sizeY-50*Stretch_Right_Hand*sizeY+Jump}};

     txPolygon      (Right_Hand,4);

     txSetFillColor ( Wrist_Color );

     txCircle       (x+40*sizeX+20*Rise_Right_Hand*sizeX+20*Stretch_Right_Hand*sizeX-40*Turn_Left*sizeX-40*Turn_Right*sizeX,

                     y+80*sizeY-80*Rise_Right_Hand*sizeY-50*Stretch_Right_Hand*sizeY+Jump,

                     12*sizeX);

}

void Draw_Face( int x, int y, float sizeX, float sizeY, int Jump, COLORREF Face_Color)
{

     txSetFillColor ( Face_Color );

     txCircle       (x, y+Jump, 50*sizeX);

}

void Draw_Eyes(int x, int y, float sizeX, float sizeY, int Jump, int Close_Eyes, int Turn_Left, int Turn_Right)
{

    txSetFillColor ( TX_WHITE );

    txEllipse      (x-20*sizeX-20*Turn_Left*sizeX+40*Turn_Right*sizeX, y-10*sizeY+13*Close_Eyes*sizeY+Jump,

                    x-20*Turn_Left*sizeX+40*Turn_Right*sizeX,         y+20*sizeY-13*Close_Eyes*sizeY+Jump);


    txEllipse      (x-30*Turn_Left*sizeX+10*Turn_Right*sizeX,          y-10*sizeY+13*Close_Eyes*sizeY+Jump,

                    x+20*sizeX-30*Turn_Left*sizeX+10*Turn_Right*sizeX, y+20*sizeY-13*Close_Eyes*sizeY+Jump);


    txSetFillColor ( TX_BLACK );

    txCircle       (x-10*sizeX-20*Turn_Left*sizeX+40*Turn_Right*sizeX, y+5*sizeY+Jump, 3*sizeX);

    txCircle       (x+10*sizeX-30*Turn_Left*sizeX+10*Turn_Right*sizeX, y+5*sizeY+Jump, 3*sizeX);

}

void Draw_Mouth(int x, int y, float sizeX, float sizeY, int Jump, int Open_Mouth, int Turn_Left, int Turn_Right)
{

    txSetColor (TX_BLACK,3);

    txEllipse  (x-10*sizeX-20*Turn_Left*sizeX+30*Turn_Right*sizeX, y+30*sizeY+Jump,

                x+10*sizeX-30*Turn_Left*sizeX+20*Turn_Right*sizeX, y+32*sizeY+10*Open_Mouth+Jump);

}

void Draw_Legs(int x, int y, float sizeX, float sizeY,int Jump)
{

     txSetColor     (TX_WHITE);

     txRectangle    (x-40*sizeX, y+90*sizeY+Jump, x+40*sizeX, y+100*sizeY+Jump);

}

void Draw_Sten_Hat(int x, int y, float sizeX, float sizeY,int Jump)
{

     txSetFillColor ( TX_LIGHTBLUE );

     txPie	        (x-45*sizeX,y-50*sizeX+Jump,x+45*sizeX, y-Jump, 0, 180);

     txSetFillColor ( MY_LIGHT_RED );

     POINT Sten_Hat[4] = {{x-50*sizeX, y-15*sizeY+Jump},

                          {x-50*sizeX, y-25*sizeY+Jump},

                          {x+50*sizeX,y-25*sizeY+Jump},

                          {x+50*sizeX,y-15*sizeY+Jump}};

     txPolygon      ( Sten_Hat, 4 );

     txCircle       (x, y-50*sizeX+Jump, 10*sizeX);

}

void Draw_Broflovsky_Hat(int x, int y, float sizeX, float sizeY,int Jump, int Turn_Left, int Turn_Right)
{
     txSetFillColor ( MY_LIGHT_GREEN );

     txRectangle    (x-50*sizeX,  y-50*sizeY+Jump,   x+50*sizeX,   y-15*sizeY+Jump);


     txEllipse      (x-60*sizeX+40*Turn_Right*sizeX+60*Turn_Left*sizeX,  y-25*sizeY+Jump,

                     x-40*sizeX+40*Turn_Right*sizeX+60*Turn_Left*sizeX,   y+30*sizeY+Jump);


     txEllipse      (x+40*sizeX-60*Turn_Right*sizeX-40*Turn_Left*sizeX,  y-25*sizeY+Jump,

                     x+60*sizeX-60*Turn_Right*sizeX-40*Turn_Left*sizeX,   y+30*sizeY+Jump);


     txSetFillColor ( MY_GREEN );

     txRectangle    (x-40*sizeX+40*Turn_Right*sizeX-10*Turn_Left*sizeX, y-40*sizeY+Jump,

                     x+40*sizeX+10*Turn_Right*sizeX-40*Turn_Left*sizeX, y-15*sizeY+Jump);

}

void Draw_Sten ( int x, int y, float sizeX, float sizeY, COLORREF Body_Color, COLORREF Face_Color, COLORREF Wrist_Color,

                 int Rise_Left_Hand, int Rise_Right_Hand, int Stretch_Left_Hand, int Stretch_Right_Hand, int Close_Eyes, int Open_Mouth, int Jump, int Turn_Left, int Turn_Right )
{

     txSetColor      ( TX_WHITE );

     Draw_Body       (x, y, sizeX, sizeY, Jump, Body_Color                                                    );

     Draw_Left_Hand  (x, y, sizeX, sizeY, Jump, Rise_Left_Hand,  Stretch_Left_Hand,  Body_Color, Wrist_Color, Turn_Left, Turn_Right);

     Draw_Right_Hand (x, y, sizeX, sizeY, Jump, Rise_Right_Hand, Stretch_Right_Hand, Body_Color, Wrist_Color, Turn_Left, Turn_Right);

     Draw_Face       (x, y, sizeX, sizeY, Jump, Face_Color                                                     );

     Draw_Sten_Hat   (x, y, sizeX, sizeY, Jump                                                                 );

     Draw_Eyes       (x, y, sizeX, sizeY, Jump, Close_Eyes, Turn_Left, Turn_Right                              );

     Draw_Mouth      (x, y, sizeX, sizeY, Jump, Open_Mouth, Turn_Left, Turn_Right                              );

     Draw_Legs       (x, y, sizeX, sizeY, Jump                                                                 );


}

void Draw_Broflovsky ( int x, int y, float sizeX, float sizeY, COLORREF Body_Color, COLORREF Face_Color, COLORREF Wrist_Color,

                       int Rise_Left_Hand, int Rise_Right_Hand, int Stretch_Left_Hand, int Stretch_Right_Hand, int Close_Eyes, int Open_Mouth, int Jump, int Turn_Left, int Turn_Right )
{

     txSetColor          ( TX_WHITE );

     Draw_Body           (x, y, sizeX, sizeY, Jump, Body_Color                                                     );

     Draw_Left_Hand      (x, y, sizeX, sizeY, Jump, Rise_Left_Hand,  Stretch_Left_Hand,  Body_Color, Wrist_Color, Turn_Left, Turn_Right);

     Draw_Right_Hand     (x, y, sizeX, sizeY, Jump, Rise_Right_Hand, Stretch_Right_Hand, Body_Color, Wrist_Color, Turn_Left, Turn_Right);

     Draw_Face           (x, y, sizeX, sizeY, Jump, Face_Color                                                     );

     Draw_Broflovsky_Hat (x, y, sizeX, sizeY, Jump, Turn_Left,  Turn_Right                                         );

     Draw_Eyes           (x, y, sizeX, sizeY, Jump, Close_Eyes, Turn_Left, Turn_Right                              );

     Draw_Mouth          (x, y, sizeX, sizeY, Jump, Open_Mouth, Turn_Left, Turn_Right                              );

     Draw_Legs           (x, y, sizeX, sizeY,Jump                                                                  );

}

void Draw_Kenny_Had (int x, int y, float sizeX, float sizeY,int Jump, int Turn_Left, int Turn_Right)
{

    txSetFillColor ( TX_ORANGE );

    txCircle       (x, y+Jump, 60*sizeX);

    if ((Turn_Left==0)&&(Turn_Right==0))
    {

       txSetFillColor ( MY_BROWN );

       txCircle       (x,          y+Jump,          35*sizeX                   );

       txSetFillColor ( MY_FACE );

       txEllipse      (x-20*sizeX, y-35*sizeY+Jump, x+20*sizeX, y+35*sizeY     );

       txSetFillColor ( TX_WHITE );

       txEllipse      (x-20*sizeX, y-15*sizeY+Jump, x,          y+15*sizeY+Jump);

       txEllipse      (x,          y-15*sizeY+Jump, x+20*sizeX, y+15*sizeY+Jump);

       txSetFillColor ( TX_BLACK );

       txCircle       (x-10*sizeX, y+Jump,          3*sizeX);

       txCircle       (x+10*sizeX, y+Jump,          3*sizeX);

   }

   else
   {

     txSetFillColor ( MY_BROWN );

     txRectangle    (x-70*Turn_Left*sizeX+50*Turn_Right*sizeX,  y-35*sizeY+Jump,   x-50*Turn_Left*sizeX+70*Turn_Right*sizeX,   y+35*sizeY+Jump);
   }

}

void Draw_Kenny (int x, int y, float sizeX, float sizeY, COLORREF Body_Color, COLORREF Face_Color, COLORREF Wrist_Color,
                 int Rise_Left_Hand, int Rise_Right_Hand, int Stretch_Left_Hand, int Stretch_Right_Hand, int Close_Eyes, int Jump, int Turn_Left, int Turn_Right)
{

     txSetColor      ( TX_WHITE );

     Draw_Body       (x, y, sizeX, sizeY, Jump, Body_Color                                                     );

     Draw_Left_Hand  (x, y, sizeX, sizeY, Jump, Rise_Left_Hand,  Stretch_Left_Hand,  Body_Color, Wrist_Color, Turn_Left, Turn_Right);

     Draw_Right_Hand (x, y, sizeX, sizeY, Jump, Rise_Right_Hand, Stretch_Right_Hand, Body_Color, Wrist_Color, Turn_Left, Turn_Right);

     Draw_Kenny_Had  (x, y, sizeX, sizeY, Jump, Turn_Left, Turn_Right                                          );

     Draw_Legs       (x, y, sizeX, sizeY, Jump                                                                 );



}
void Draw_Fir_tree (int x, int y, COLORREF Fir_Tree_Color)
{

    for (int i=0; i<9; i++)
    {
        if (i%2!=0)

            txSetFillColor ( TX_WHITE );

        else
            txSetFillColor ( Fir_Tree_Color );

        POINT fir_tree[3] = {{x+10*i,y-i*30}, {x+75,y-50-i*30}, {x+150-10*i,y-i*30}};

        txPolygon (fir_tree, 3);

    }

}

void Draw_Table (int x, int y, float sizeX, float sizeY, COLORREF Table_Color)
{

     txSetFillColor ( Table_Color );

     txRectangle    (x,          y,           x+140*sizeX, y+100*sizeY                );

     txSetFillColor (RGB ( 128, 64, 0 ) );

     txRectangle    (x+60*sizeX, y+100*sizeY, x+70*sizeX,  y+250*sizeY                );

     txSetColor     ( TX_BLACK );

     txSelectFont   ("Times New Roman", 40*sizeX, 0, FW_BOLD);

     txDrawText     (x,          y,           x+140*sizeX, y+100*sizeY, "SOUTH \nPARK");

     txSetColor     ( TX_WHITE );

}
