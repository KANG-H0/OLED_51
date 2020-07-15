
#include <reg52.h>
#include "OLED.h"
//#include "PictureBMP.h"

sbit LED = P1 ^ 0;

//主函数
void main()
{
    OLED_Init();
    while (1)
    {
        LED = ~LED;
        OLED_DisplayChar(64, 0, 'K', TextSize6x8);
        OLED_DisplayStr(0, 1, "(^_^)", TextSize8x16);
        OLED_DisplayStr(0, 3, "ABCdef123!@#/", TextSize8x16);
        OLED_DisplayCN(40, 5, 0);
        OLED_DisplayCN(56, 5, 1);
        OLED_DisplayCN(72, 5, 2);
        OLED_DisplayCN(88, 5, 3);
        //OLED_DisplayBMP(0, 2, 128, 8, Picture01);
    }
}
