#include<stdio.h>
void main()
{
	int h,m,total_minutes;
	scanf("%d",& total_minutes);
	h= total_minutes/60;
	m= total_minutes%60;
	printf("%d hour(s) %d minute(s)",h,m);
}
