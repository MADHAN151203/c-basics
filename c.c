#include<stdio.h>
int main()
{
	float radi,area,peri;
	float pi=3.14;
	scanf("%f",&radi);
	area=pi*radi*radi;
	peri=2*pi*radi;
	printf("%.2f\n",area);
	printf("%.5f",peri);
}
