//tour hanoi
#include<stdio.h>
void deplacer(char a,char b)
{
	printf("\n%c  >>>  %c",a,b);
}

void tour_hanoi(unsigned n,char a,char b,char c)
{
	if(n==1)
	deplacer(a,c);
	if(n>1)
	{
		tour_hanoi(n-1,a,c,b);
		deplacer(a,c);
		tour_hanoi(n-1,b,a,c);
	}
}
int main()
{
	tour_hanoi(3,'A','B','C');
	return 0;
}
