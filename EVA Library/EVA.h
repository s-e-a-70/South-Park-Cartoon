
//-----------------------------------------------------------------------------
//! @mainpage
//!
//! ��� ���������� ������� ��� ����� �������
//!
//!        ������������ ����� ����������
//!        ��������, 2021
//!
//! @date 2021
//!
//!
//-----------------------------------------------------------------------------

# include "TXlib.h"

void DrawMotorWay      (int x, int y, double sizeX, double sizeY, int width,
                        COLORREF colorWay, COLORREF colorBand);

void DrawTrafficlights (int x, int y, double sizeX, double sizeY,
                        COLORREF colorMain, int Red, int Green, int Blue);

void DrawTree          (int x, int y, double sizeX, double sizeY, int DFruit,
                        int WobbleCrown, int HeightTrunk, int HeightCrown,
                        COLORREF colorFruit1, COLORREF colorFruit2, COLORREF colorFruit3);

void DrawFlower        (int x, int y, double sizeX, double sizeY, int Disclosure,
                        int UpSheet, int Swinging, COLORREF colorFlower);

void DrawSun           (int x, int y, double sizeX, double sizeY, int Beamlength,
                        COLORREF colorSun, COLORREF colorCloud, COLORREF colorEye);

void DrawBird          (int x, int y, double sizeX, double sizeY, int PositionWing,
                        COLORREF colorWing, COLORREF colorBody, COLORREF colorHead);

void DrawDog           (int x, int y, double sizeX, double sizeY, int TailShift, int EarShift,
                        COLORREF colorBody, COLORREF colorHead, COLORREF colorTail);

void DrawCar           (int x, int y, double sizeX, double sizeY, int RWheel,
                        COLORREF colorCar, COLORREF colorWheel, int DistanceWheel);

void DrawGirl          (int x, int y, double sizeX, double sizeY, int HandUp,int LegRight,
                        COLORREF colorDress, COLORREF colorLipstick, COLORREF colorEye);

void DrawFactory       (int x, int y, double sizeX, double sizeY, int PipeHeight,
                        COLORREF colorFactory);

void City              (int x, int y, double sizeX, double sizeY, COLORREF colorCity);


//{----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//! ������ ������ � ���������� �������
//!
//! @param x         ���������� ������ �������� ���� ������
//! @param y         ���������� ������ �������� ���� ������
//! @param sizeX     ������ ������ <i>(����������� ������ �� �����������)</i>
//! @param sizeY     ������ ������ <i>(����������� ������ �� ���������)</i>
//! @param width     ������ �����
//! @param colorWay  ���� ������
//! @param colorBand ���� �����
//!
//! @par             ������ �������������:
//! @code
//!                  DrawMotorWay (0, 400, 1, 1, 10, TX_DARKGREY, TX_WHITE);
//! @endcode
//}----------------------------------------------------------------------------

void DrawMotorWay (int x, int y, double sizeX, double sizeY, int width,
                   COLORREF colorWay, COLORREF colorBand)
    {
    txSetFillColor (colorWay);
    txSetColor     (colorWay);
    txRectangle    (x, y, x + 800, y + 100);

    txSetFillColor (colorBand);
    txRectangle (x + 175 * sizeX, y + 12 * sizeY, x + 300 * sizeX, y + 12 * sizeY + width);
    txRectangle (x + 175 * sizeX, y + 38 * sizeY, x + 300 * sizeX, y + 38 * sizeY + width);
    txRectangle (x + 175 * sizeX, y + 62 * sizeY, x + 300 * sizeX, y + 62 * sizeY + width);
    txRectangle (x + 175 * sizeX, y + 87 * sizeY, x + 300 * sizeX, y + 87 * sizeY + width);
    }

//{----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//! ������ �������� � ����� ������
//!
//! @param x         ���������� ������ �������� ���� ���������
//! @param y         ���������� ������ �������� ���� ���������
//! @param sizeX     ������ ��������� <i>(����������� ������ �� �����������)</i>
//! @param sizeY     ������ ��������� <i>(����������� ������ �� ���������)</i>
//! @param colorMain ���� ���������
//! @param Red       ������������� �������� <i>(� ��������� �� 0 �� 255)</i>
//! @param Green     ������������� �������� <i>(� ��������� �� 0 �� 255)</i>
//! @param Blue      ������������� ������ <i>(� ��������� �� 0 �� 255)</i>
//!
//! @warning         ��������� ��� ��������� �������� (1, 0, 0), ������� (1, 1, 0), �������� (0, 1, 0)
//!
//! @par             ������ �������������:
//! @code
//!                  DrawTrafficlights (95, 200, 1, 1, TX_DARKGREY, 255, 0, 0);
//! @endcode
//}----------------------------------------------------------------------------

void DrawTrafficlights (int x, int y, double sizeX, double sizeY,
                        COLORREF colorMain, int Red, int Green, int Blue)
    {
    txSetColor     (TX_BLACK);
    txSetFillColor (colorMain);
    txRectangle (x + 22 * sizeX, y +  50 * sizeY, x + 28 * sizeX, y + 200 * sizeY);
    txRectangle (x             , y              , x + 50 * sizeX, y +  50 * sizeY);

    txSetColor     (RGB (Red, Green, Blue));
    txSetFillColor (RGB (Red, Green, Blue));
    txCircle (x + 25 * sizeX, y +  25 * sizeY, 15 * sizeX);
    }

//{----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//! ������ ����������
//!
//! @param x             ���������� ������ �������� ���� ����������
//! @param y             ���������� ������ �������� ���� ����������
//! @param sizeX         ������ ���������� <i>(����������� ������ �� �����������)</i>
//! @param sizeY         ������ ���������� <i>(����������� ������ �� ���������)</i>
//! @param RWheel        ������ ������
//! @param colorCar      ���� ����������
//! @param colorWheel    ���� ������
//! @param DistanceWheel ��������� ���������� ����� �������� <i>(�� ��������� 150 ���)</i>
//!
//! @par                 ������ �������������:
//! @code
//!                      DrawCar (800, 375, 1, 1, 20, TX_RED, TX_ORANGE, 20);
//! @endcode
//}----------------------------------------------------------------------------

void DrawCar (int x, int y, double sizeX, double sizeY,int RWheel,
              COLORREF colorCar, COLORREF colorWheel, int DistanceWheel)
    {
    txSetColor     (colorCar, 5);
    txSetFillColor (colorCar   );
    txRectangle (x              , y             , x + 275 * sizeX, y + 50 * sizeY);
    txRectangle (x + 149 * sizeX, y - 50 * sizeY, x + 152 * sizeX, y             );
    txLine      (x +  50 * sizeX, y             , x + 100 * sizeX, y - 50 * sizeY);
    txLine      (x + 100 * sizeX, y - 50 * sizeY, x + 200 * sizeX, y - 50 * sizeY);
    txLine      (x + 200 * sizeX, y - 50 * sizeY, x + 250 * sizeX, y             );

    txSetColor     (colorWheel);
    txSetFillColor (colorWheel);
    txCircle (x +  50 * sizeX + DistanceWheel, y + 50 * sizeY, RWheel * sizeY);
    txCircle (x + 200 * sizeX - DistanceWheel, y + 50 * sizeY, RWheel * sizeY);

    txSetColor     (TX_BLACK);
    txSetFillColor (TX_BLACK);
    txCircle (x +  50 * sizeX + DistanceWheel, y + 50 * sizeY, 10 * sizeY);
    txCircle (x + 200 * sizeX - DistanceWheel, y + 50 * sizeY, 10 * sizeY);
    }

//{----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//! ������ �������
//!
//! @param x             ���������� ��������� ���
//! @param y             ���������� ��������� ���
//! @param sizeX         ������ ������� <i>(����������� ������ �� �����������)</i>
//! @param sizeY         ������ ������� <i>(����������� ������ �� ���������)</i>
//! @param HandUp        �������� ��������� ������� ���
//! @param LegRight      �������� ��������� ��������� ������ ����
//! @param colorDress    ���� ������
//! @param colorLipstick ���� ������
//! @param colorEye      ���� ����
//!
//! @par                 ������ �������������:
//! @code
//!                      DrawGirl (175, 275, 1, 1, 10, 5, TX_RED, TX_GREEN, TX_BLACK);
//! @endcode
//}----------------------------------------------------------------------------

void DrawGirl (int x, int y, double sizeX, double sizeY, int HandUp, int LegRight,
               COLORREF colorDress, COLORREF colorLipstick, COLORREF colorEye)
    {
    txSetColor     (TX_PINK);
    txSetFillColor (TX_PINK);
    txCircle (x             , y - 10 * sizeY,     12 * sizeX);
    txLine   (x -  3 * sizeX, y + 88 * sizeY, x -  3 * sizeX,            y + 112 * sizeY         );
    txLine   (x +  3 * sizeX, y + 88 * sizeY, x +  3 * sizeX + LegRight, y + 112 * sizeY         );
    txLine   (x - 13 * sizeX, y + 38 * sizeY, x - 25 * sizeX,            y +  50 * sizeY - HandUp);
    txLine   (x + 10 * sizeX, y + 38 * sizeY, x + 25 * sizeX,            y +  50 * sizeY - HandUp);

    txSetColor     (colorLipstick);
    txSetFillColor (colorLipstick);
    txEllipse (x - 5 * sizeX, y - 5 * sizeY, x + 5 * sizeX, y - 2 * sizeY);

    txSetColor     (colorEye);
    txSetFillColor (colorEye);
    txCircle (x - 5 * sizeX, y - 10 * sizeY, 2);
    txCircle (x + 5 * sizeX, y - 10 * sizeY, 2);

    txSetColor     (colorDress);
    txSetFillColor (colorDress);
    POINT dress [] = {{x, y}, {x - 25 * sizeX, y + 88 * sizeY},
                      {x + 25 * sizeX, y + 88 * sizeY}, {x, y}};
    txPolygon (dress, 3);
    }

//{----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//! ������ ��������� ������
//!
//! @param x           ���������� ��������� ������
//! @param y           ���������� ��������� ������
//! @param sizeX       ������ ������ <i>(����������� ������ �� �����������)</i>
//! @param sizeY       ������ ������ <i>(����������� ������ �� ���������)</i>
//! @param DFruit      ������ ������
//! @param WobbleCrown �������� ��������� ����� ������
//! @param HeightTrunk �������� ��������� ������ ������
//! @param HeightCrown �������� ��������� ������ �����
//! @param colorFruit1 ���� ������
//! @param colorFruit2 ���� ������
//! @param colorFruit3 ���� ������
//!
//! @par               ������ �������������:
//! @code
//!                    DrawTree (200, 300, 1, 1, 8, 5, 0, 5, TX_RED, TX_ORANGE, TX_YELLOW);
//! @endcode
//}----------------------------------------------------------------------------

void DrawTree (int x, int y, double sizeX, double sizeY, int DFruit,
               int WobbleCrown, int HeightTrunk, int HeightCrown,
               COLORREF colorFruit1, COLORREF colorFruit2, COLORREF colorFruit3)
    {
    txSetColor     (TX_BROWN);
    txSetFillColor (TX_BROWN);
    txRectangle (x, y - 150 * sizeY, x + 25 * sizeX, y + HeightTrunk);

    txSetColor     (TX_GREEN);
    txSetFillColor (TX_GREEN);
    POINT tree [] = {{x - 25 * sizeX              , y - 150 * sizeY              },
                     {x - 50 * sizeX + WobbleCrown, y - 200 * sizeY              },
                     {x + 12 * sizeX + WobbleCrown, y - 350 * sizeY + HeightCrown},
                     {x + 75 * sizeX + WobbleCrown, y - 200 * sizeY              },
                     {x + 50 * sizeX + WobbleCrown, y - 150 * sizeY              },
                     {x - 25 * sizeX              , y - 150 * sizeY              }};
    txPolygon (tree, 5);

    txSetColor     (colorFruit1);
    txSetFillColor (colorFruit1);
    txCircle (x + 25 * sizeX + WobbleCrown, y - 275 * sizeY, DFruit * sizeY);
    txCircle (x              + WobbleCrown, y - 225 * sizeY, DFruit * sizeY);
    txCircle (x + 50 * sizeX + WobbleCrown, y - 200 * sizeY, DFruit * sizeY);

    txSetColor     (colorFruit2);
    txSetFillColor (colorFruit2);
    txCircle (x + 25 * sizeX + WobbleCrown, y - 200 * sizeY, DFruit * sizeY);
    txCircle (x              + WobbleCrown, y - 250 * sizeY, DFruit * sizeY);

    txSetColor     (colorFruit3);
    txSetFillColor (colorFruit3);
    txCircle (x - 25 * sizeX + WobbleCrown, y - 225 * sizeY, DFruit * sizeY);
    txCircle (x              + WobbleCrown, y - 175 * sizeY, DFruit * sizeY);
    }

//{----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//! ������ �����
//!
//! @param x            ���������� ������ ������� ���� ������
//! @param y            ���������� ������ ������� ���� ������
//! @param sizeX        ������ ������ <i>(����������� ������ �� �����������)</i>
//! @param sizeY        ������ ������ <i>(����������� ������ �� ���������)</i>
//! @param PipeHeight   �������� ��������� ������ �����
//! @param colorFactory ���� ������
//!
//! @par                ������ �������������:
//! @code
//!                     DrawFactory (100, 200, 1, 1, 3, TX_GREY);
//! @endcode
//}----------------------------------------------------------------------------

void DrawFactory (int x, int y, double sizeX, double sizeY, int PipeHeight,
                  COLORREF colorFactory)
    {
    txSetColor     (colorFactory);
    txSetFillColor (colorFactory);
    POINT factory [] = {{x       * sizeX, y      * sizeY             },
                        {x       * sizeX, y - 10 * sizeY             },
                        {x +  10 * sizeX, y - 10 * sizeY             },
                        {x +  10 * sizeX, y - 20 * sizeY             },
                        {x +  30 * sizeX, y - 20 * sizeY             },
                        {x +  30 * sizeX, y - 60 * sizeY - PipeHeight},
                        {x +  40 * sizeX, y - 60 * sizeY - PipeHeight},
                        {x +  40 * sizeX, y - 20 * sizeY             },
                        {x +  50 * sizeX, y - 20 * sizeY             },
                        {x +  50 * sizeX, y - 30 * sizeY             },
                        {x +  60 * sizeX, y - 30 * sizeY             },
                        {x +  60 * sizeX, y - 40 * sizeY             },
                        {x +  80 * sizeX, y - 40 * sizeY             },
                        {x +  80 * sizeX, y - 80 * sizeY - PipeHeight},
                        {x +  90 * sizeX, y - 80 * sizeY - PipeHeight},
                        {x +  90 * sizeX, y - 80 * sizeY             },
                        {x +  90 * sizeX, y - 40 * sizeY             },
                        {x + 110 * sizeX, y - 40 * sizeY             },
                        {x + 110 * sizeX, y - 30 * sizeY             },
                        {x + 120 * sizeX, y - 30 * sizeY             },
                        {x + 120 * sizeX, y - 20 * sizeY             },
                        {x + 130 * sizeX, y - 20 * sizeY             },
                        {x + 130 * sizeX, y - 10 * sizeY             },
                        {x + 140 * sizeX, y - 10 * sizeY             },
                        {x + 140 * sizeX, y      * sizeY             },
                        {x       * sizeX, y      * sizeY             }};
    txPolygon (factory, 26);
    }

//{----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//! ������ ������ � ������
//!
//! @param x          ���������� ������ ������
//! @param y          ���������� ������ ������
//! @param sizeX      ������ ������ <i>(����������� ������ �� �����������)</i>
//! @param sizeY      ������ ������ <i>(����������� ������ �� ���������)</i>
//! @param Beamlength ����� ����
//! @param �olorSun   ���� ������
//! @param colorCloud ���� ������
//! @param colorEye   ���� ����
//!
//! @par              ������ �������������:
//! @code
//!                   DrawSun (500, 50, 1, 1, 10, TX_YELLOW, TX_BLUE, TX_WHITE);
//! @endcode
//}----------------------------------------------------------------------------

void DrawSun (int x, int y, double sizeX, double sizeY, int Beamlength,
              COLORREF colorSun, COLORREF colorCloud, COLORREF colorEye)
    {
    txSetColor     (colorSun);
    txSetFillColor (colorSun);
    txCircle (x,  y, 25 * sizeX);
    txLine   (x - 75 * sizeX - Beamlength, y -              Beamlength, x, y);
    txLine   (x - 50 * sizeX - Beamlength, y + 50 * sizeY - Beamlength, x, y);
    txLine   (x + 25 * sizeX - Beamlength, y + 25 * sizeY - Beamlength, x, y);
    txLine   (x - Beamlength,              y + 75 * sizeY - Beamlength, x, y);

    txSetColor     (colorEye);
    txSetFillColor (colorEye);
    txCircle (x - 10 * sizeX, y -  5 * sizeY,     5 * sizeX);
    txCircle (x + 10 * sizeX, y -  5 * sizeY,     5 * sizeX);
    txLine   (x             , y + 10 * sizeY, x - 5 * sizeX, y + 5 * sizeY);
    txLine   (x             , y + 10 * sizeY, x + 5 * sizeX, y + 5 * sizeY);

    txSetColor     (colorCloud);
    txSetFillColor (colorCloud);
    txEllipse (x - 200 * sizeX, y             , x - 100 * sizeX, y + 50 * sizeY);
    txEllipse (x - 150 * sizeX, y + 25 * sizeY, x -  50 * sizeX, y + 75 * sizeY);

    txSetColor     (colorCloud);
    txSetFillColor (colorCloud);
    txEllipse (x + 25 * sizeX, y + 25 * sizeY, x + 100 * sizeX, y + 50 * sizeY);
    txEllipse (x - 25 * sizeX, y + 50 * sizeY, x +  25 * sizeX, y + 75 * sizeY);

    txSetColor     (RGB(0, 100, 255));
    txSetFillColor (RGB(0, 100, 255));
    txEllipse (x - 150 * sizeX, y + 25 * sizeY, x - 50 * sizeX,  y + 75 * sizeY);
    }

//{----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//! ������ �����
//!
//! @param x            ���������� ��������� ���
//! @param y            ���������� ��������� ���
//! @param sizeX        ������ ����� <i>(����������� ������ �� �����������)</i>
//! @param sizeY        ������ ����� <i>(����������� ������ �� ���������)</i>
//! @param PositionWing �������� ��������� ������� �����
//! @param colorWing    ���� �������
//! @param colorBody    ���� ����
//! @param colorHead    ���� ������
//!
//! @par              ������ �������������:
//! @code
//!                   DrawBird (800, 175, 1, 1, 5, TX_ORANGE, TX_WHITE, TX_WHITE);
//! @endcode
//}----------------------------------------------------------------------------

void DrawBird (int x, int y, double sizeX, double sizeY, int PositionWing,
               COLORREF colorWing, COLORREF colorBody, COLORREF colorHead)
    {
    txSetColor     (colorWing);
    txSetFillColor (colorWing);
    POINT wind [] = {{x + 10 * sizeX +   PositionWing, y - 15 * sizeY -     PositionWing},
                     {x + 10 * sizeX,                  y -  5 * sizeY                   },
                     {x + 20 * sizeX,                  y +  5 * sizeY                   },
                     {x + 20 * sizeX + 2*PositionWing, y + 15 * sizeY - 2 * PositionWing},
                     {x + 15 * sizeX,                  y + 10 * sizeY                   },
                     {x + 15 * sizeX,                  y +  5 * sizeY                   },
                     {x +  5 * sizeX,                  y -  5 * sizeY                   },
                     {x +  5 * sizeX,                  y - 10 * sizeY                   },
                     {x + 10 * sizeX,                  y - 15 * sizeY                   }};
    txPolygon (wind, 9);

    POINT tail [] = {{x + 25 * sizeX, y -  5 * sizeY}, {x + 35 * sizeX, y - 15 * sizeY},
                     {x + 40 * sizeX, y - 10 * sizeY}, {x + 25 * sizeX, y -  5 * sizeY}};
    txPolygon (tail, 4);

    txSetColor     (colorHead);
    txSetFillColor (colorHead);
    txCircle (x - 3 * sizeX, y, 3 * sizeY);

    txSetColor     (colorBody);
    txSetFillColor (colorBody);
    POINT body [] = {{x, y},
                     {x + 25 * sizeX, y - 5 * sizeY},
                     {x + 10 * sizeX, y + 5 * sizeY},
                     {x, y}};
    txPolygon (body, 4);
    }

//{----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//! ������ ������
//!
//! @param x         ���������� ��������� ���
//! @param y         ���������� ��������� ���
//! @param sizeX     ������ ������ <i>(����������� ������ �� �����������)</i>
//! @param sizeY     ������ ������ <i>(����������� ������ �� ���������)</i>
//! @param TailShift �������� ��������� ������� ������
//! @param EarShift  �������� ��������� ������� ���
//! @param colorBody ���� ��������
//! @param colorHead ���� ������
//! @param colorTail ���� ������
//!
//! @par             ������ �������������:
//! @code
//!                  DrawDog (700, 470, 1, 1, 2, 5, TX_BLACK, TX_WHITE, TX_GREY);
//! @endcode
//}----------------------------------------------------------------------------
void DrawDog (int x, int y, double sizeX, double sizeY, int TailShift, int EarShift,
              COLORREF colorBody, COLORREF colorHead, COLORREF colorTail)
    {
    txSetColor     (colorBody);
    txSetFillColor (colorBody);
    POINT body [] = {{x             , y -  5 * sizeY }, {x             , y             }, {x -  5 * sizeX, y + 15 * sizeY},
                     {x             , y + 15 * sizeY }, {x +  5 * sizeX, y +  5 * sizeY}, {x + 20 * sizeX, y +  5 * sizeY},
                     {x + 25 * sizeX, y +  5 * sizeY }, {x + 25 * sizeX, y + 15 * sizeY}, {x + 30 * sizeX, y + 15 * sizeY},
                     {x + 30 * sizeX, y +  5 * sizeY }, {x + 25 * sizeX, y             }, {x + 25 * sizeX, y - 10 * sizeY},
                     {x +  5 * sizeX, y - 10 * sizeY }, {x             , y -  5 * sizeY}};
    txPolygon (body, 14);

    txSetColor     (colorHead);
    txSetFillColor (colorHead);
    txCircle (x - 5 * sizeX, y - 15 * sizeY, 5 * sizeX);

    POINT neck [] = {{x +  5 * sizeX, y - 10 * sizeY},
                     {x             , y -  5 * sizeY},
                     {x -  5 * sizeX, y - 10 * sizeY},
                     {x - 15 * sizeX, y - 10 * sizeY},
                     {x - 15 * sizeX, y - 13 * sizeY},
                     {x - 10 * sizeX, y - 15 * sizeY},
                     {x +   EarShift, y - 25 * sizeY},
                     {x             , y - 15 * sizeY},
                     {x +  5 * sizeX, y - 10 * sizeY}};
    txPolygon (neck, 9);

    txSetColor     (TX_BLACK);
    txSetFillColor (TX_BLACK);
    txCircle (x - 8 * sizeX, y - 15 * sizeY, 2 * sizeX);

    txSetColor     (colorTail);
    txSetFillColor (colorTail);
    POINT tail [] = {{x + 25 * sizeX            , y - 10 * sizeY},
                     {x + 30 * sizeX            , y - 15 * sizeY},
                     {x + 35 * sizeX - TailShift, y - 25 * sizeY},
                     {x + 35 * sizeX            , y - 15 * sizeY},
                     {x + 25 * sizeX            , y -  5 * sizeY},
                     {x + 25 * sizeX            , y - 10 * sizeY}};
    txPolygon (tail, 6);

    txRectangle (x + 5 * sizeX, y + 5 * sizeY, x + 10 * sizeX, y + 15 * sizeY);

    POINT lapa [] = {{x + 15 * sizeX, y +  5 * sizeY}, {x + 15 * sizeX, y + 10 * sizeY},
                     {x + 10 * sizeX, y + 15 * sizeY}, {x + 15 * sizeX, y + 15 * sizeY},
                     {x + 20 * sizeX, y + 10 * sizeY}, {x + 20 * sizeX, y +  5 * sizeY},
                     {x + 15 * sizeX, y +  5 * sizeY}};
    txPolygon (lapa, 7);
    }

//{----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//! ������ ������
//!
//! @param x           ���������� ��������� ������
//! @param y           ���������� ��������� ������
//! @param sizeX       ������ ������ <i>(����������� ������ �� �����������)</i>
//! @param sizeY       ������ ������ <i>(����������� ������ �� ���������)</i>
//! @param Disclosure  �������� ��������� ������
//! @param UpSheet     �������� ��������� �������� �����
//! @param Swinging    �������� ������������ ������
//! @param colorFlower ���� ������
//!
//! @par               ������ �������������:
//! @code
//!                    DrawFlower (100, 300, 3, 3, 5, 3, 10, TX_RED);
//! @endcode
//}----------------------------------------------------------------------------

void DrawFlower (int x, int y, double sizeX, double sizeY, int Disclosure,
                 int UpSheet, int Swinging, COLORREF colorFlower)
    {
    txSetColor     (RGB (50, 200, 50));
    txSetFillColor (RGB (50, 200, 50));
    txLine (x, y, x + Swinging, y-5 * sizeY);
    POINT sheet [] =   {{x +             Swinging, y - 1 * sizeY          },
                        {x + 2 * sizeX + Swinging, y - 3 * sizeY + UpSheet},
                        {x + 3 * sizeX + Swinging, y - 3 * sizeY + UpSheet},
                        {x + 3 * sizeX + Swinging, y - 2 * sizeY + UpSheet},
                        {x +             Swinging, y - 1 * sizeY          }};
    txPolygon (sheet, 5);

    POINT pedicel [] = {{x +             Swinging, y - 5 * sizeY},
                        {x - 1 * sizeX + Swinging, y - 6 * sizeY},
                        {x + 1 * sizeX + Swinging, y - 6 * sizeY},
                        {x +             Swinging, y - 5 * sizeY}};
    txPolygon (pedicel, 4);

    txSetColor     (colorFlower);
    txSetFillColor (colorFlower);
    POINT bud [] = {{x - 1 * sizeX + Swinging             , y -  6 * sizeY},
                    {x - 2 * sizeX + Swinging             , y -  7 * sizeY},
                    {x - 2 * sizeX + Disclosure + Swinging, y - 10 * sizeY},
                    {x - 1 * sizeX + Swinging             , y -  9 * sizeY},
                    {x             + Swinging             , y - 10 * sizeY},
                    {x + 1 * sizeX + Swinging             , y -  9 * sizeY},
                    {x + 2 * sizeX - Disclosure + Swinging, y - 10 * sizeY},
                    {x + 2 * sizeX + Swinging             , y -  7 * sizeY},
                    {x + 1 * sizeX + Swinging             , y -  6 * sizeY},
                    {x - 1 * sizeX + Swinging             , y -  6 * sizeY}};
    txPolygon (bud, 10);
    }

//{----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
//! ������ ��������� ������
//!
//! @param x         ���������� ������ ������� ���� ������
//! @param y         ���������� ������ ������� ���� ������
//! @param sizeX     ������ ������ <i>(����������� ������ �� �����������)</i>
//! @param sizeY     ������ ������ <i>(����������� ������ �� ���������)</i>
//! @param colorCity ���� ������
//!
//! @par             ������ �������������:
//! @code
//!                  City (0, 0, 1, 1, TX_GREY);
//! @endcode
//}----------------------------------------------------------------------------

void City (int x, int y, double sizeX, double sizeY, COLORREF colorCity)
    {
    txSetColor     (colorCity);
    txSetFillColor (colorCity);
    txRectangle ( 50 + x * sizeX, 50 + y * sizeY, 100 + x * sizeX, 200 + y * sizeY);
    txRectangle (125 + x * sizeX, 50 + y * sizeY, 175 + x * sizeX, 200 + y * sizeY);
    txRectangle (200 + x * sizeX, 25 + y * sizeY, 250 + x * sizeX, 200 + y * sizeY);
    txRectangle (275 + x * sizeX, 75 + y * sizeY, 325 + x * sizeX, 200 + y * sizeY);
    txRectangle (350 + x * sizeX, 75 + y * sizeY, 400 + x * sizeX, 200 + y * sizeY);
    txRectangle (425 + x * sizeX, 75 + y * sizeY, 475 + x * sizeX, 200 + y * sizeY);
    txRectangle (500 + x * sizeX, 25 + y * sizeY, 550 + x * sizeX, 200 + y * sizeY);
    txRectangle (575 + x * sizeX, 50 + y * sizeY, 625 + x * sizeX, 200 + y * sizeY);
    txRectangle (675 + x * sizeX, 75 + y * sizeY, 725 + x * sizeX, 200 + y * sizeY);
    }
