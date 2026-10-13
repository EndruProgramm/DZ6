#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int Big(double x, double y)
{
    int Big;
    Big = (x >= -3.0 && x <= 5.0 && y >= 2.0 && y <= 5.0);
    return Big;
}
int Small(double x, double y)
{
    int Small;
    Small = (x >= 5.0 && x <= 8.0 && y >= 2.0 && y <= 3.0);
    return Small;
}
int main() {
    setlocale(LC_ALL, "Rus");
    double x, y;
    printf("Введите координаты точки (x и y): ");
    scanf("%lf %lf", &x, &y);
    int Big1 = Big(x, y);
    int Small1 = Small(x, y);
    if (Big1 || Small1) {
        printf("Точка (%.2f; %.2f) ПРИНАДЛЕЖИТ заштрихованной области.\n", x, y);
    }
    else {
        printf("Точка (%.2f; %.2f) НЕ ПРИНАДЛЕЖИТ заштрихованной области.\n", x, y);
    }
    return 0;
}//контрольный пример х = 3 и у = 5 принадлжеать





/*
int main() {
  
    setlocale(LC_ALL, "Rus");

    double x, y;

    
    printf("Введите координаты точки (x и y): ");
    scanf("%lf %lf", &x, &y);

    int Big = (x >= -3.0 && x <= 5.0 && y >= 2.0 && y <= 5.0);
    int Small = (x >= 5.0 && x <= 8.0 && y >= 2.0 && y <= 3.0);
    //контрольный пример х = 3 и у = 5 принадлжеать
   
    if (Big || Small) {
        printf("Точка (%.2f; %.2f) ПРИНАДЛЕЖИТ заштрихованной области.\n", x, y);
    }
    else {
        printf("Точка (%.2f; %.2f) НЕ ПРИНАДЛЕЖИТ заштрихованной области.\n", x, y);
    }

    return 0;
}
*/