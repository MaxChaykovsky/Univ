#include <iostream>
#include <stdio.h>
#include<locale.h>

int main(void) 
{ 
setlocale(0,"rus"); 
int PI=3.14, r, s; 
char c; 
printf("Эта программа вычесляет площадь сферы\n"); 
do{ 
printf("\Введите радиус r="); 
scanf("%d",&r); 
s=4*PI*(r*r); 
printf("При радиусе %d площадь сферы равна %d \n",r,s); 
printf("Продолжить работу? (Y\N):"); 
scanf(" %c",&c); 
} while (c=='Y'); 
//system("pause"); 
//}while (true); 
return 0; 
}
