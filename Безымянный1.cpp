#include <iostream>
#include <stdio.h>
#include<locale.h>

int main(void) 
{ 
setlocale(0,"rus"); 
int PI=3.14, r, s; 
char c; 
printf("��� ��������� ��������� ������� �����\n"); 
do{ 
printf("\������� ������ r="); 
scanf("%d",&r); 
s=4*PI*(r*r); 
printf("��� ������� %d ������� ����� ����� %d \n",r,s); 
printf("���������� ������? (Y\N):"); 
scanf(" %c",&c); 
} while (c=='Y'); 
//system("pause"); 
//}while (true); 
return 0; 
}
