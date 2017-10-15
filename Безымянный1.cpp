#include <iostream>
#include <stdio.h>
#include<locale.h>

int main(void) 
{ 
setlocale(0,"rus"); 
float PI=3.14, r, s; 
char c; 
printf("Эта программа вычесляет площадь сферы\n"); 
do{ 
printf("\Введите радиус r="); 
scanf("%f",&r); 
s=4*PI*(r*r); 
printf("При радиусе %f площадь сферы равна %f \n",r,s); 
printf("Продолжить работу? (Y\N):"); 
scanf(" %c",&c); 
} while (c=='Y'); 
//system("pause"); 
//}while (true); 
return 0; 
}
