#include <iostream>
#include <stdio.h>
#include<locale.h>

int main() {
	setlocale(0,"rus");
	float PI=3.14, r, s;
	printf("Эта программа вычесляет площадь поверхности сферы\n");
	printf("\nВведите радиус :");
	scanf("%f",&r);
	s=4*PI*(r*r);
	printf("При радиусе %.2f площадь сферы равна %.2f \n",r,s);
	return 0;
}
