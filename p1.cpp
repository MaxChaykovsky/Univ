#include <iostream>
#include <stdio.h>
#include<locale.h>

int main() {
	setlocale(0,"rus");
	float PI=3.14, r, s;
	printf("��� ��������� ��������� ������� ����������� �����\n");
	printf("\n������� ������ :");
	scanf("%f",&r);
	s=4*PI*(r*r);
	printf("��� ������� %.2f ������� ����� ����� %.2f \n",r,s);
	return 0;
}
