//! @file SouthParkLib.h
//! @brief Библиотека SOUTH PARK

#include "TXlib.h"

#include "config.h"

//=================================================================================================================
//           Интерфейс библиотеки
//=================================================================================================================

void Draw_Body           (int x, int y, float sizeX, float sizeY, int Jump, COLORREF Color, int is_Cartman);
//=================================================================================================================
//! @brief Рисование туловище героя
//! @note  Центр фигуры героя - центр окружности головы)))

//! @param         int x              - координата X центра фигуры героя (центр головы) 
//! @param         int y              - координата Y центра фигуры героя (центр головы) 
//! @param         float sizeX        - масштабный коэффициент по оси X                     
//! @param         float sizeY        - масштабный коэффициент по оси Y
//! @param         int Jump           - высота прыжка
//! @param         COLORREF Color     - цвет 
//! @param         int is_Cartman     - признак Картмана (0 - это не Картман, 1 - это Картман)
//=================================================================================================================
void Draw_Left_Hand      (int x, int y, float sizeX, float sizeY, int Jump, int Rise_Left_Hand, int Stretch_Left_Hand,

                          COLORREF Hand_Color, COLORREF Wrist_Color,

                          int Turn_Left, int Turn_Right, int is_Cartman);

//! @brief Рисование левой руки
//! @note  Центр фигуры героя - центр окружности головы)))
//! @param int x                    - координата X центра героя (центр головы) 
//! @param int y                    - координата Y центра героя (центр головы) 
//! @param float sizeX              - масштабный коэффициент по оси X 
//! @param float sizeY              - масштабный коэффициент по оси Y 
//! @param int Jump                 - высота прыжка
//! @param int Rise_Left_Hand       - признак поднятия левой руки (0 - нет поднятия руки , 1 - есть поднятие руки ) 
//! @param int Stretch_Left_Hand    - признак вытягивания левой руки (0 - нет вытягивания руки , 1 - есть вытягивание руки ) 
//! @param COLORREF Hand_Color      - цвет руки
//! @param COLORREF Wrist_Color     - цвет кисти
//! @param int Turn_Left            - признак поворота героя влево (0 - нет поворота влево, 1 - есть поворот влево) 
//! @param int Turn_Right           - признак поворота героя вправо (0 - нет поворота вправо, 1 - есть поворот вправо) 
//! @param int is_Cartman          -  признак Картмана (0 - это не Картман, 1 - это Картман)

//=================================================================================================================

void Draw_Right_Hand     (int x, int y, float sizeX, float sizeY, int Jump, int Rise_Right_Hand, int Stretch_Right_Hand,

                          COLORREF Hand_Color, COLORREF Wrist_Color,

                          int Turn_Left, int Turn_Right, int is_Cartman);

//! @brief Рисование правой руки
//! @note  Центр фигуры героя - центр окружности головы)))
//! @param int x                    - координата X центра героя (центр головы) 
//! @param int y                    - координата Y центра героя (центр головы) 
//! @param float sizeX              - масштабный коэффициент по оси X 
//! @param float sizeY              - масштабный коэффициент по оси Y 
//! @param int Jump                 - высота прыжка
//! @param int Rise_Right_Hand      - признак поднятия правой руки (0 - нет поднятия руки , 1 - есть поднятие руки ) 
//! @param int Stretch_Right_Hand   - признак вытягивания правой руки (0 - нет вытягивания руки , 1 - есть вытягивание руки ) 
//! @param COLORREF Hand_Color      - цвет руки
//! @param COLORREF Wrist_Color     - цвет кисти
//! @param int Turn_Left            - признак поворота героя влево (0 - нет поворота влево, 1 - есть поворот влево) 
//! @param int Turn_Right           - признак поворота героя вправо (0 - нет поворота вправо, 1 - есть поворот вправо) 
//! @param int is_Cartman           - признак Картмана (0 - это не Картман, 1 - это Картман)
//=================================================================================================================

void Draw_Face           (int x, int y, float sizeX, float sizeY, int Jump, COLORREF Face_Color, int is_Cartman);
//! @brief Рисование лица
//! @note  Центр фигуры героя - центр окружности головы)))
//! @param int x                     - координата X центра героя (центр головы) 
//! @param int y                     - координата Y центра героя (центр головы)  
//! @param float sizeX               - масштабный коэффициент по оси X 
//! @param float sizeY               - масштабный коэффициент по оси Y
//! @param int Jump                  - высота прыжка
//! @param COLORREF Face_Color       - цвет
//! @param int is_Cartman            - признак Картмана (0 - это не Картман, 1 - это Картман)
//=================================================================================================================

void Draw_Eyes           (int x, int y, float sizeX, float sizeY, int Jump, int Close_Eyes, int Turn_Left, int Turn_Right);
//! @brief Рисование глаз
//! @note  Центр фигуры героя - центр окружности головы)))
//! @param int x                      - координата X центра героя (центр головы)  
//! @param int y                      - координата Y центра героя (центр головы)  
//! @param float sizeX                - масштабный коэффициент по оси X
//! @param float sizeY                - масштабный коэффициент по оси Y 
//! @param int Jump                   - высота прыжка
//! @param int Close_Eyes             - признак закрытия глаз (0 - нет закрытия глаз, 1 - есть закрытие глаз) 
//! @param int Turn_Left              - признак поворота героя влево (0 - нет поворота влево, 1 - есть поворот влево)
//! @param int Turn_Right             - признак поворота героя вправо (0 - нет поворота вправо, 1 - есть поворот вправо)
//=================================================================================================================

void Draw_Mouth          (int x, int y, float sizeX, float sizeY, int Jump, int Open_Mouth, int Turn_Left, int Turn_Right);
//! @brief Рисование рта
//! @note  Центр фигуры героя - центр окружности головы)))
//! @param int x                      - координата X центра героя (центр головы)
//! @param int y                      - координата Y центра героя (центр головы)  
//! @param float sizeX                - масштабный коэффициент по оси X                   
//! @param float sizeY                - масштабный коэффициент по оси Y                 
//! @param int Jump                   - высота прыжка
//! @param int Open_Mouth             - признак открытого рта (0 - нет зоткрытого рта , 1 - есть открытый рот) 
//! @param int Turn_Left              - признак поворота героя влево (0 - нет поворота влево, 1 - есть поворот влево)
//! @param int Turn_Right             - признак поворота героя вправо (0 - нет поворота вправо, 1 - есть поворот вправо)
//=================================================================================================================

void Draw_Legs           (int x, int y, float sizeX, float sizeY,int Jump, int is_Cartman);
//! @brief Рисование ног
//! @param int x                      - координата X центра героя (центр головы)
//! @param int y,                     - координата Y центра героя (центр головы) 
//! @param float sizeX,               - масштабный коэффициент по оси X 
//! @param float sizeY,               - масштабный коэффициент по оси Y                 
//! @param int Jump,                  - высота прыжка
//! @param int is_Cartman             - признак Картмана (0 - это не Картман, 1 - это Картман)
//=================================================================================================================

void Draw_Hat            (int x, int y, float sizeX, float sizeY,int Jump, COLORREF Hat_Color, COLORREF Pompon_Color, int is_Cartman);
//! @brief Рисование шапки 
//! @param int x                      - координата X центра героя (центр головы)
//! @param int y                      - координата Y центра героя (центр головы)
//! @param float sizeX                - масштабный коэффициент по оси X 
//! @param float sizeY                - масштабный коэффициент по оси Y 
//! @param int Jump                   - высота прыжка
//! @param COLORREF Hat_Color         - цвет шапки
//! @param COLORREF Pompon_Color      - цвет помпона
//! @param int is_Cartman             - признак Картмана (0 - это не Картман, 1 - это Картман)
//=================================================================================================================
void Draw_Broflovsky_Hat (int x, int y, float sizeX, float sizeY,int Jump, int Turn_Left, int Turn_Right);
//! @brief Рисование шапки Брофловского
//! @param int x              - координата X центра героя (центр головы)
//! @param int y              - координата Y центра героя (центр головы)
//! @param float sizeX        - масштабный коэффициент по оси X
//! @param float sizeY        - масштабный коэффициент по оси Y
//! @param int Jump           - высота прыжка
//! @param int Turn_Left      - признак поворота героя влево (0 - нет поворота влево, 1 - есть поворот влево)
//! @param int Turn_Right     - признак поворота героя вправо (0 - нет поворота вправо, 1 - есть поворот вправо)

//=================================================================================================================
void Draw_Kenny_Had      (int x, int y, float sizeX, float sizeY, int Jump);
//! @brief Рисование головы Кенни
//! @param int x              - координата X центра героя (центр головы)
//! @param int y              - координата Y центра героя (центр головы)
//! @param float sizeX        - масштабный коэффициент по оси X
//! @param float sizeY        - масштабный коэффициент по оси Y
//! @param int Jump           - высота прыжка

//=================================================================================================================
void Draw_Sten           (int x, int y, float sizeX, float sizeY,

                          COLORREF Body_Color, COLORREF Face_Color, COLORREF Wrist_Color,

                          int Rise_Left_Hand, int Rise_Right_Hand, int Stretch_Left_Hand, int Stretch_Right_Hand, int Close_Eyes,

                          int Open_Mouth, int Jump, int Turn_Left, int Turn_Right );
//=================================================================================================================
//! @brief Рисование Стена Марша
//! @param int x                   - координата X центра героя (центр головы) 
//! @param int y                   - координата Y центра героя (центр головы)
//! @param float sizeX             - масштабный коэффициент по оси X
//! @param float sizeY             - масштабный коэффициент по оси Y
//! @param COLORREF Body_Color     - цвет туловища 
//! @param COLORREF Face_Color     - цвет лица 
//! @param COLORREF Wrist_Color    - цвет кисти рук
//! @param int Rise_Left_Hand      - признак поднятия левой руки (0 - нет поднятия руки , 1 - есть поднятие руки ) 
//! @param int Rise_Right_Hand     - признак поднятия правой руки (0 - нет поднятия руки , 1 - есть поднятие руки ) 
//! @param int Stretch_Left_Hand   - признак вытягивания левой руки (0 - нет вытягивания руки , 1 - есть выиягивание руки ) 
//! @param int Stretch_Right_Hand  - признак вытягивания правой руки (0 - нет вытягивания руки , 1 - есть выиягивание руки ) 
//! @param int Close_Eyes,         - признак закрытия глаз (0 - нет закрытия глаз, 1 - есть закрытие глаз)
//! @param int Open_Mouth,         - признак открытого рта (0 - нет зоткрытого рта , 1 - есть открытый рот) 
//! @param int Jump,               - высота прыжка
//! @param int Turn_Left,          - признак поворота героя влево (0 - нет поворота влево, 1 - есть поворот влево)
//! @param int Turn_Right          - признак поворота героя вправо (0 - нет поворота вправо, 1 - есть поворот вправо)              
//=================================================================================================================

void Draw_Broflovsky     (int x, int y, float sizeX, float sizeY, COLORREF Body_Color, COLORREF Face_Color, COLORREF Wrist_Color,

                          int Rise_Left_Hand, int Rise_Right_Hand, int Stretch_Left_Hand, int Stretch_Right_Hand, int Close_Eyes,

                          int Open_Mouth, int Jump, int Turn_Left, int Turn_Right );
//=================================================================================================================
//! @brief Рисование Кайла Брофловски
//! @param int x                   - координата X центра героя (центр головы) 
//! @param int y                   - координата Y центра героя (центр головы)
//! @param float sizeX             - масштабный коэффициент по оси X
//! @param float sizeY             - масштабный коэффициент по оси Y
//! @param COLORREF Body_Color     - цвет туловища 
//! @param COLORREF Face_Color     - цвет лица 
//! @param COLORREF Wrist_Color    - цвет кисти рук
//! @param int Rise_Left_Hand      - признак поднятия левой руки (0 - нет поднятия руки , 1 - есть поднятие руки ) 
//! @param int Rise_Right_Hand     - признак поднятия правой руки (0 - нет поднятия руки , 1 - есть поднятие руки ) 
//! @param int Stretch_Left_Hand   - признак вытягивания левой руки (0 - нет вытягивания руки , 1 - есть выиягивание руки ) 
//! @param int Stretch_Right_Hand  - признак вытягивания правой руки (0 - нет вытягивания руки , 1 - есть выиягивание руки ) 
//! @param int Close_Eyes,         - признак закрытия глаз (0 - нет закрытия глаз, 1 - есть закрытие глаз)
//! @param int Open_Mouth,         - признак открытого рта (0 - нет зоткрытого рта , 1 - есть открытый рот) 
//! @param int Jump,               - высота прыжка
//! @param int Turn_Left,          - признак поворота героя влево (0 - нет поворота влево, 1 - есть поворот влево)
//! @param int Turn_Right          - признак поворота героя вправо (0 - нет поворота вправо, 1 - есть поворот вправо)  
//=================================================================================================================
void Draw_Kenny          (int x, int y, float sizeX, float sizeY, COLORREF Body_Color, COLORREF Face_Color, COLORREF Wrist_Color,

                          int Rise_Left_Hand, int Rise_Right_Hand, int Stretch_Left_Hand, int Stretch_Right_Hand, int Close_Eyes, int Jump, int Turn_Left, int Turn_Right);
//=================================================================================================================
//! @brief Рисование Кенни Маккормика
//! @param int x                   - координата X центра героя (центр головы) 
//! @param int y                   - координата Y центра героя (центр головы)
//! @param float sizeX             - масштабный коэффициент по оси X
//! @param float sizeY             - масштабный коэффициент по оси Y
//! @param COLORREF Body_Color     - цвет туловища 
//! @param COLORREF Face_Color     - цвет лица 
//! @param COLORREF Wrist_Color    - цвет кисти рук
//! @param int Rise_Left_Hand      - признак поднятия левой руки (0 - нет поднятия руки , 1 - есть поднятие руки ) 
//! @param int Rise_Right_Hand     - признак поднятия правой руки (0 - нет поднятия руки , 1 - есть поднятие руки ) 
//! @param int Stretch_Left_Hand   - признак вытягивания левой руки (0 - нет вытягивания руки , 1 - есть выиягивание руки ) 
//! @param int Stretch_Right_Hand  - признак вытягивания правой руки (0 - нет вытягивания руки , 1 - есть выиягивание руки ) 
//! @param int Close_Eyes,         - признак закрытия глаз (0 - нет закрытия глаз, 1 - есть закрытие глаз)
//! @param int Jump,               - высота прыжка
//! @param int Turn_Left,          - признак поворота героя влево (0 - нет поворота влево, 1 - есть поворот влево)
//! @param int Turn_Right          - признак поворота героя вправо (0 - нет поворота вправо, 1 - есть поворот вправо)    
//=================================================================================================================

void Draw_Cartman        (int x, int y, float sizeX, float sizeY, COLORREF Body_Color, COLORREF Face_Color, COLORREF Wrist_Color,

                          int Rise_Left_Hand, int Rise_Right_Hand, int Stretch_Left_Hand, int Stretch_Right_Hand, int Close_Eyes,

                          int Open_Mouth, int Jump, int Turn_Left, int Turn_Right);
//=================================================================================================================
//! @brief Рисование Эрика Картмана
//! @param int x                   - координата X центра героя (центр головы) 
//! @param int y                   - координата Y центра героя (центр головы)
//! @param float sizeX             - масштабный коэффициент по оси X
//! @param float sizeY             - масштабный коэффициент по оси Y
//! @param COLORREF Body_Color     - цвет туловища 
//! @param COLORREF Face_Color     - цвет лица 
//! @param COLORREF Wrist_Color    - цвет кисти рук
//! @param int Rise_Left_Hand      - признак поднятия левой руки (0 - нет поднятия руки , 1 - есть поднятие руки ) 
//! @param int Rise_Right_Hand     - признак поднятия правой руки (0 - нет поднятия руки , 1 - есть поднятие руки ) 
//! @param int Stretch_Left_Hand   - признак вытягивания левой руки (0 - нет вытягивания руки , 1 - есть выиягивание руки ) 
//! @param int Stretch_Right_Hand  - признак вытягивания правой руки (0 - нет вытягивания руки , 1 - есть выиягивание руки ) 
//! @param int Close_Eyes,         - признак закрытия глаз (0 - нет закрытия глаз, 1 - есть закрытие глаз)
//! @param int Open_Mouth,         - признак открытого рта (0 - нет зоткрытого рта , 1 - есть открытый рот) 
//! @param int Jump,               - высота прыжка
//! @param int Turn_Left,          - признак поворота героя влево (0 - нет поворота влево, 1 - есть поворот влево)
//! @param int Turn_Right          - признак поворота героя вправо (0 - нет поворота вправо, 1 - есть поворот вправо)  
//=================================================================================================================

void Draw_Landscape_Town ();
//! @brief Рисование городского пейзажа

//=================================================================================================================
void Draw_Mountain_Chain ();
//! @brief Рисование горной цепи
//=================================================================================================================
void Draw_Trap           (COLORREF Ground_Color, COLORREF Trap_Color);
//! @brief Рисование канализационного люка
//! @param COLORREF Ground_Color          - цвет земли 
//! @param COLORREF Trap_Color            - цвет люка

//=================================================================================================================
void Draw_Background     (COLORREF Sky_Color,    COLORREF Ground_Color);
//! @brief Рисование фона
//! @param COLORREF Sky_Color    - цвет неба
//! @param COLORREF Ground_Color  - цвет земли                      
//=================================================================================================================
void Draw_Mountain       (int x, int y,          COLORREF Mountain_Color );
//! @brief Рисование горы
//! @param int x                    - координата X вершины
//! @param int y                    - координата Y вершины 
//! @param COLORREF Mountain_Color  - цвет

//=================================================================================================================
void Draw_Fir_tree       (int x, int y, int swing, COLORREF Fir_Tree_Color);
//! @brief Рисование елки
//! @param int x                   - координата X левой точки нижней ветки
//! @param int y                   - координата Y левой точки нижней ветки 
//! @param COLORREF Fir_Tree_Color - цвет елки
//=================================================================================================================

void Draw_Table          (int x, int y, float sizeX, float sizeY, COLORREF Table_Color);
//! @brief Рисование таблички "South Park"
//! @param int x                       - координата X левого верхнего угла
//! @param int y                       - координата Y левого верхнего угла 
//! @param float sizeX                 - масштабный коэффициент по оси X
//! @param float sizeY                 - масштабный коэффициент по оси Y
//! @param COLORREF Table_Color        - цвет  

//=================================================================================================================
void Draw_Window         (int x, int y, int lx,      int ly);
//! @brief Рисование окна дома
int x,                        - координата X левого верхнего угла 
int y,                        - координата Y левого верхнего угла   
int lx,                       - ширина
                 int ly)                       - высота

//=================================================================================================================
void Draw_Landscape_Forrest (int swing);
//=================================================================================================================


void Draw_Body           (int x, int y, float sizeX, float sizeY, int Jump, COLORREF Color, int is_Cartman)
{

     txSetFillColor (Color);

     POINT Body[4] = {{ x - 50 * sizeX - 10 * sizeX * is_Cartman, y + 90 * sizeY + Jump},

                      { x - 30 * sizeX - 10 * sizeX * is_Cartman, y + 20 * sizeY + Jump},

                      { x + 30 * sizeX + 10 * sizeX * is_Cartman, y + 20 * sizeY + Jump},

                      { x + 50 * sizeX + 10 * sizeX * is_Cartman, y + 90 * sizeY + Jump}};

     txPolygon      (Body, 4);

}

void Draw_Left_Hand      (int x, int y, float sizeX, float sizeY, int Jump, int Rise_Left_Hand, int Stretch_Left_Hand,

                    COLORREF Hand_Color, COLORREF Wrist_Color, int Turn_Left, int Turn_Right, int is_Cartman)
{
     txSetFillColor (Hand_Color);

     POINT Left_Hand[4] =  {{x - 50 * sizeX - 10 * sizeX * is_Cartman + 20 * Rise_Left_Hand * sizeX - 10 * Stretch_Left_Hand * sizeX + (40 + 10 * is_Cartman) * Turn_Left * sizeX + (40 + 10 * is_Cartman) * Turn_Right*sizeX,

                             y + 90 * sizeY - 70 * Rise_Left_Hand * sizeY - 50 * Stretch_Left_Hand * sizeY + Jump},

                            {x - 30 * sizeX - 10 * sizeX * is_Cartman - 30 * Rise_Left_Hand * sizeX - 30 * Stretch_Left_Hand * sizeX + (20 + 10 * is_Cartman) * Turn_Left * sizeX + (20 + 10 * is_Cartman) * Turn_Right * sizeX,

                             y + 20 * sizeY - 30 * Rise_Left_Hand * sizeY + Jump},

                            {x - 10 * sizeX - 10 * sizeX * is_Cartman - 30 * Rise_Left_Hand * sizeX + (20 + 10 * is_Cartman) * Turn_Left * sizeX + (20 + 10 * is_Cartman) * Turn_Right * sizeX,

                             y + 20 * sizeY - 30  *Rise_Left_Hand * sizeY + Jump},

                            {x - 30 * sizeX - 10 * sizeX * is_Cartman + 20 * Rise_Left_Hand * sizeX + 20 * Stretch_Left_Hand * sizeX + (40 + 10 * is_Cartman)* Turn_Left * sizeX + (40 + 10 * is_Cartman) * Turn_Right * sizeX,

                             y + 90 * sizeY - 70 * Rise_Left_Hand * sizeY - 50 * Stretch_Left_Hand * sizeY + Jump}};

     txPolygon      (Left_Hand,4);

     txSetFillColor (Wrist_Color);

     txCircle (x - 40 * sizeX - 10 * sizeX * is_Cartman - 20 * Rise_Left_Hand * sizeX - 20 * Stretch_Left_Hand * sizeX + (40 + 10 * is_Cartman) * Turn_Left * sizeX + (40 + 10 * is_Cartman) * Turn_Right * sizeX,

                     y + 80 * sizeY - 80 * Rise_Left_Hand * sizeY - 50 * Stretch_Left_Hand * sizeY + Jump,

                     12*sizeX);

}

void Draw_Right_Hand     (int x, int y, float sizeX, float sizeY, int Jump, int Rise_Right_Hand, int Stretch_Right_Hand,

                          COLORREF Hand_Color, COLORREF Wrist_Color, int Turn_Left, int Turn_Right, int is_Cartman)
{
     txSetFillColor (Hand_Color);

     POINT Right_Hand[4] = {{x + 30 * sizeX + 10 * sizeX * is_Cartman-20 * Rise_Right_Hand * sizeX - 20 * Stretch_Right_Hand * sizeX - (40 + 10 * is_Cartman) * Turn_Left * sizeX - (40 + 10 * is_Cartman) * Turn_Right * sizeX,

                             y + 90 * sizeY - 70 * Rise_Right_Hand * sizeY - 50 * Stretch_Right_Hand * sizeY + Jump},

                            {x + 10 * sizeX + 10 * sizeX * is_Cartman + 30 * Rise_Right_Hand * sizeX - (20 + 10 * is_Cartman) * Turn_Left * sizeX - (20 + 10 * is_Cartman) * Turn_Right * sizeX,

                             y + 20 * sizeY - 30 * Rise_Right_Hand * sizeY + Jump},

                            {x + 30 * sizeX + 10 * sizeX * is_Cartman + 30 * Rise_Right_Hand * sizeX + 30 * Stretch_Right_Hand * sizeX - (20 + 10 * is_Cartman) * Turn_Left * sizeX - (20 + 10 * is_Cartman) * Turn_Right * sizeX,

                             y + 20 * sizeY - 30 * Rise_Right_Hand * sizeY + Jump},

                            {x + 50 * sizeX + 10 * sizeX * is_Cartman - 20 * Rise_Right_Hand * sizeX + 10 * Stretch_Right_Hand * sizeX - (40 + 10 * is_Cartman) * Turn_Left * sizeX - (40 + 10 * is_Cartman) * Turn_Right * sizeX,

                             y + 90 * sizeY - 70 * Rise_Right_Hand * sizeY - 50 * Stretch_Right_Hand * sizeY + Jump}};

     txPolygon (Right_Hand, 4);

     txSetFillColor (Wrist_Color);

     txCircle (x + 40 * sizeX + 10 * sizeX * is_Cartman + 20 * Rise_Right_Hand * sizeX + 20 * Stretch_Right_Hand * sizeX - (40 + 10 * is_Cartman) * Turn_Left * sizeX - (40 + 10 * is_Cartman) * Turn_Right * sizeX,

               y + 80 * sizeY - 80 * Rise_Right_Hand * sizeY - 50 * Stretch_Right_Hand * sizeY+Jump,

               12 * sizeX);

}

void Draw_Face           (int x, int y, float sizeX, float sizeY, int Jump, COLORREF Face_Color, int is_Cartman)
{

     txSetFillColor (Face_Color);

     txEllipse       (x - 50 * sizeX - 10 * sizeX * is_Cartman, y - 50 * sizeY + Jump,

                      x + 50 * sizeX + 10 * sizeX * is_Cartman, y + 50 * sizeY + Jump);

}

void Draw_Eyes           (int x, int y, float sizeX, float sizeY, int Jump, int Close_Eyes, int Turn_Left, int Turn_Right)
{

    txSetFillColor (TX_WHITE);

    txEllipse      (x - 20 * sizeX - 20 * Turn_Left * sizeX + 40 * Turn_Right * sizeX, y - 10 * sizeY + 13 * Close_Eyes * sizeY + Jump,

                    x - 20 * Turn_Left * sizeX+40 * Turn_Right * sizeX,                y + 20 * sizeY - 13 * Close_Eyes * sizeY + Jump);


    txEllipse      (x - 30 * Turn_Left * sizeX+10 * Turn_Right * sizeX,                y - 10 * sizeY + 13 * Close_Eyes * sizeY + Jump,

                    x + 20 * sizeX-30 * Turn_Left * sizeX + 10 * Turn_Right * sizeX,   y + 20 * sizeY - 13 * Close_Eyes * sizeY + Jump);


    txSetFillColor (TX_BLACK);

    txCircle       (x - 10 * sizeX - 20 * Turn_Left * sizeX + 40 * Turn_Right * sizeX, y + 5 * sizeY + Jump, 3 * sizeX);

    txCircle       (x + 10 * sizeX - 30 * Turn_Left * sizeX + 10 * Turn_Right * sizeX, y + 5 * sizeY + Jump, 3 * sizeX);

}

void Draw_Mouth          (int x, int y, float sizeX, float sizeY, int Jump, int Open_Mouth, int Turn_Left, int Turn_Right)
{

    txSetColor     (TX_BLACK, 3);

    txEllipse      (x - 10 * sizeX - 20 * Turn_Left * sizeX + 30 * Turn_Right * sizeX, y + 30 * sizeY + Jump,

                    x + 10 * sizeX - 30 * Turn_Left * sizeX + 20 * Turn_Right * sizeX, y + 32 * sizeY + 10 * Open_Mouth + Jump);

}

void Draw_Legs           (int x, int y, float sizeX, float sizeY, int Jump, int is_Cartman)
{

     txSetColor     (TX_WHITE);

     txRectangle    (x - 40 * sizeX - 10 * sizeX * is_Cartman, y + 90  * sizeY + Jump,

                     x + 40 * sizeX + 10 * sizeX * is_Cartman, y + 100 * sizeY + Jump);

}

void Draw_Hat            (int x, int y, float sizeX, float sizeY, int Jump, COLORREF Hat_Color, COLORREF Pompon_Color, int is_Cartman)
{

     txSetFillColor (Hat_Color);

     txPie	        (x - 45 * sizeX - 10 * sizeX * is_Cartman,  y - 50 * sizeY + Jump,

                     x + 45 * sizeX + 10 * sizeX * is_Cartman,  y + Jump,              sizeY >= 0 ? 0:180, 180);

     txSetFillColor (Pompon_Color);

     POINT Hat[4] = {{x - 50 * sizeX - 10 * sizeX * is_Cartman, y - 15 * sizeY + Jump},

                     {x - 50 * sizeX - 10 * sizeX * is_Cartman, y - 25 * sizeY + Jump},

                     {x + 50 * sizeX + 10 * sizeX * is_Cartman, y - 25 * sizeY + Jump},

                     {x + 50 * sizeX + 10 * sizeX * is_Cartman, y - 15 * sizeY + Jump}};

     txPolygon      (Hat, 4);

     txCircle       (x, y - 50 * sizeY + Jump, 10 * sizeX);

}

void Draw_Broflovsky_Hat (int x, int y, float sizeX, float sizeY,int Jump, int Turn_Left, int Turn_Right)
{

     txSetFillColor (MY_LIGHT_GREEN);

     txRectangle    (x - 50 * sizeX,                                                   y - 50 * sizeY + Jump,

                     x + 50 * sizeX,                                                   y - 15 * sizeY + Jump);


     txEllipse      (x - 60 * sizeX + 40 * Turn_Right * sizeX + 60 * Turn_Left * sizeX, y - 25 * sizeY + Jump,

                     x - 40 * sizeX + 40 * Turn_Right * sizeX + 60 * Turn_Left * sizeX, y + 30 * sizeY + Jump);


     txEllipse      (x + 40 * sizeX - 60 * Turn_Right * sizeX - 40 * Turn_Left * sizeX, y - 25 * sizeY + Jump,

                     x + 60 * sizeX - 60 * Turn_Right * sizeX - 40 * Turn_Left * sizeX, y + 30 * sizeY + Jump);


     txSetFillColor (MY_GREEN);

     txRectangle    (x - 40 * sizeX + 40 * Turn_Right * sizeX - 10 * Turn_Left * sizeX, y - 40 * sizeY + Jump,

                     x + 40 * sizeX + 10 * Turn_Right * sizeX - 40 * Turn_Left * sizeX, y - 15 * sizeY + Jump);

}

void Draw_Sten           (int x, int y, float sizeX, float sizeY, COLORREF Body_Color, COLORREF Face_Color, COLORREF Wrist_Color,

                          int Rise_Left_Hand, int Rise_Right_Hand, int Stretch_Left_Hand, int Stretch_Right_Hand, int Close_Eyes,

                          int Open_Mouth, int Jump, int Turn_Left, int Turn_Right )
{

     txSetColor      (TX_WHITE);

     Draw_Body       (x, y, sizeX, sizeY, Jump, Body_Color,      0);

     Draw_Left_Hand  (x, y, sizeX, sizeY, Jump, Rise_Left_Hand,  Stretch_Left_Hand,  Body_Color, Wrist_Color, Turn_Left, Turn_Right, 0);

     Draw_Right_Hand (x, y, sizeX, sizeY, Jump, Rise_Right_Hand, Stretch_Right_Hand, Body_Color, Wrist_Color, Turn_Left, Turn_Right, 0);

     Draw_Face       (x, y, sizeX, sizeY, Jump, Face_Color,      0);

     Draw_Hat        (x, y, sizeX, sizeY, Jump, TX_LIGHTBLUE,    MY_LIGHT_RED,       0);

     Draw_Eyes       (x, y, sizeX, sizeY, Jump, Close_Eyes,      Turn_Left,          Turn_Right);

     Draw_Mouth      (x, y, sizeX, sizeY, Jump, Open_Mouth,      Turn_Left,          Turn_Right);

     Draw_Legs       (x, y, sizeX, sizeY, Jump, 0);


}

void Draw_Broflovsky     (int x, int y, float sizeX, float sizeY, COLORREF Body_Color, COLORREF Face_Color, COLORREF Wrist_Color,

                          int Rise_Left_Hand, int Rise_Right_Hand, int Stretch_Left_Hand, int Stretch_Right_Hand, int Close_Eyes,

                          int Open_Mouth, int Jump, int Turn_Left, int Turn_Right )
{

     txSetColor          (TX_WHITE);

     Draw_Body           (x, y, sizeX, sizeY, Jump, Body_Color, 0);

     Draw_Left_Hand      (x, y, sizeX, sizeY, Jump, Rise_Left_Hand,  Stretch_Left_Hand,  Body_Color, Wrist_Color, Turn_Left, Turn_Right,0);

     Draw_Right_Hand     (x, y, sizeX, sizeY, Jump, Rise_Right_Hand, Stretch_Right_Hand, Body_Color, Wrist_Color, Turn_Left, Turn_Right,0);

     Draw_Face           (x, y, sizeX, sizeY, Jump, Face_Color, 0);

     Draw_Broflovsky_Hat (x, y, sizeX, sizeY, Jump, Turn_Left,  Turn_Right);

     Draw_Eyes           (x, y, sizeX, sizeY, Jump, Close_Eyes, Turn_Left, Turn_Right);

     Draw_Mouth          (x, y, sizeX, sizeY, Jump, Open_Mouth, Turn_Left, Turn_Right);

     Draw_Legs           (x, y, sizeX, sizeY, Jump, 0);

}

void Draw_Kenny_Had      (int x, int y, float sizeX, float sizeY, int Jump, int Turn_Left, int Turn_Right)
{

     txSetFillColor      (TX_ORANGE);

     txCircle            (x, y + Jump, 60 * sizeX);

     if ((Turn_Left == 0) && (Turn_Right == 0))

     {

        txSetFillColor (MY_BROWN);

        txCircle       (x,              y + Jump, 35 * sizeX);

        txSetFillColor (MY_FACE);

        txEllipse      (x - 20 * sizeX, y - 35 * sizeY + Jump, x + 20 * sizeX, y + 35 * sizeY       );

        txSetFillColor ( TX_WHITE );

        txEllipse      (x - 20 * sizeX, y - 15 * sizeY + Jump, x,              y + 15 * sizeY + Jump);

        txEllipse      (x,              y-15*sizeY+Jump,       x+20*sizeX,     y+15*sizeY+Jump      );

        txSetFillColor (TX_BLACK);

        txCircle       (x - 10 * sizeX, y + Jump, 3 * sizeX);

        txCircle       (x + 10 * sizeX, y + Jump, 3 * sizeX);

   }

   else

   {

        txSetFillColor (MY_BROWN);

        txRectangle    (x - 70 * Turn_Left * sizeX + 50 * Turn_Right * sizeX, y - 35 * sizeY + Jump,

                        x - 50 * Turn_Left * sizeX + 70 * Turn_Right * sizeX, y + 35 * sizeY + Jump);

   }

}

void Draw_Kenny          (int x, int y, float sizeX, float sizeY, COLORREF Body_Color, COLORREF Face_Color, COLORREF Wrist_Color,

                          int Rise_Left_Hand, int Rise_Right_Hand, int Stretch_Left_Hand, int Stretch_Right_Hand, int Close_Eyes, int Jump, int Turn_Left, int Turn_Right)
{

     txSetColor        (TX_WHITE);

     Draw_Body         (x, y, sizeX, sizeY, Jump, Body_Color,      0                                                                    );

     Draw_Left_Hand    (x, y, sizeX, sizeY, Jump, Rise_Left_Hand,  Stretch_Left_Hand,  Body_Color, Wrist_Color, Turn_Left, Turn_Right, 0);

     Draw_Right_Hand   (x, y, sizeX, sizeY, Jump, Rise_Right_Hand, Stretch_Right_Hand, Body_Color, Wrist_Color, Turn_Left, Turn_Right, 0);

     Draw_Kenny_Had    (x, y, sizeX, sizeY, Jump, Turn_Left,       Turn_Right                                                           );

     Draw_Legs         (x, y, sizeX, sizeY, Jump,                  0                                                                    );



}

void Draw_Cartman        (int x, int y, float sizeX, float sizeY, COLORREF Body_Color, COLORREF Face_Color, COLORREF Wrist_Color,

                          int Rise_Left_Hand, int Rise_Right_Hand, int Stretch_Left_Hand, int Stretch_Right_Hand, int Close_Eyes,

                          int Open_Mouth, int Jump, int Turn_Left, int Turn_Right)
{

    txSetColor          (TX_WHITE);

    Draw_Body           (x, y, sizeX, sizeY, Jump, Body_Color ,     1);

    Draw_Left_Hand      (x, y, sizeX, sizeY, Jump, Rise_Left_Hand,  Stretch_Left_Hand,  Body_Color, Wrist_Color, Turn_Left, Turn_Right, 1);

    Draw_Right_Hand     (x, y, sizeX, sizeY, Jump, Rise_Right_Hand, Stretch_Right_Hand, Body_Color, Wrist_Color, Turn_Left, Turn_Right, 1);

    Draw_Face           (x, y, sizeX, sizeY, Jump, Face_Color,      1);

    Draw_Hat            (x, y, sizeX, sizeY, Jump, MY_LIGHT_BLUE,   TX_YELLOW,          1);

    Draw_Eyes           (x, y, sizeX, sizeY, Jump, Close_Eyes,      Turn_Left,          Turn_Right);

    Draw_Mouth          (x, y, sizeX, sizeY, Jump, Open_Mouth,      Turn_Left,          Turn_Right);

    Draw_Legs           (x, y, sizeX, sizeY, Jump, 1);


}

void Draw_Landscape_Forrest(int swing)
{

    Draw_Background (TX_LIGHTCYAN, TX_WHITE);

    Draw_Mountain_Chain();

    for (int i = 0; i < 4; i ++)

        {

            Draw_Fir_tree ( 50 + 200 * i, 400, swing, MY_FIR_TREE);

        }

}

 void Draw_Window(int x, int y, int lx, int ly)
{

    txSetFillColor (TX_LIGHTCYAN);

    txSetColor     (MY_BROWN, 3);

    txRectangle    (x,          y,         x + lx,     y + ly  );

    txLine         (x,          y + ly/2,  x + lx,     y + ly / 2);

    txLine         (x + lx / 2, y,         x + lx / 2, y + ly  );

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

    txPie	       (500, 450, 600, 500, 0, 360);

}

void Draw_Background(COLORREF Sky_Color, COLORREF Ground_Color)
{

    txSetFillColor (Sky_Color);

    txRectangle    (0, 0, 800, 600);


    txSetFillColor (Ground_Color);

    txRectangle    (0, 400, 800, 600);

}

void Draw_Trap(COLORREF Ground_Color, COLORREF Trap_Color)
{

    txSetFillColor (Ground_Color);

    txRectangle (0, 475, 800, 600);


    txSetColor (TX_BLACK);

    txSetFillColor (Trap_Color);

    txPie (500, 450, 600, 500, 180, 180);

}

void Draw_Mountain (int x, int y, COLORREF Mountain_Color)
{

    txSetFillColor (Mountain_Color);

    POINT mountain[3] = {{x - 250, y + 280}, {x, y}, {x + 250, y + 280}};

    txPolygon (mountain, 3);

    txSetFillColor (TX_WHITE);

    POINT Snow_Cap[3] = {{ x - 30, y + 30},  {x, y}, {x + 30,  y + 30 }};

    txPolygon (Snow_Cap, 3);

}

void Draw_Mountain_Chain()
{

    for (int i = 0; i < 4; i ++)

    {

        Draw_Mountain (150 + 200 * i, 120,  i % 2 == 1 ?  TX_GREEN : TX_CYAN);

    }

}


void Draw_Fir_tree (int x, int y, int swing, COLORREF Fir_Tree_Color)
{

    for (int i = 0; i < 9; i++)

    {

        txSetFillColor (i % 2 != 0 ? TX_WHITE : Fir_Tree_Color);

        POINT fir_tree[3] = {{x + 10 * i + swing * i, y - i * 30}, {x + 75 + swing * i, y - 50 - i * 30}, {x + 150 - 10 * i + swing * i, y - i * 30}};

        txPolygon (fir_tree, 3);

    }

}

void Draw_Table (int x, int y, float sizeX, float sizeY, COLORREF Table_Color)
{

     txSetFillColor (Table_Color);

     txRectangle    (x,              y,               x + 140 * sizeX, y + 100 * sizeY);

     txSetFillColor (RGB ( 128, 64, 0 ));

     txRectangle    (x + 60 * sizeX, y + 100 * sizeY, x + 70 * sizeX,  y + 250 * sizeY);

     txSetColor     (TX_BLACK);

     txSelectFont   ("Times New Roman", 40 * sizeX, 0, FW_BOLD);

     txDrawText     (x,               y,              x + 140 * sizeX, y + 100 * sizeY, "SOUTH \nPARK");

     txSetColor     (TX_WHITE);

}



