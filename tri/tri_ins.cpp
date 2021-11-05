#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<time.h>
void affiche(int t[],unsigned n){
	int i;
	for(i=0;i<n;i++){
		printf("%d|",t[i]);
	}
}
void remplir(int t[],unsigned n){
	int i;
	for(i=0;i<n;i++){
		printf("donner T[%d]: ",i);
		scanf("%d",&t[i]);
	}
}

void tri_inserstion(int tab[],int n)
{
	int i;
	int m;
	int j;
	for(i=0;i<n;i++)
	{
		m=tab[i];
		j=i;
		while(j>0&&m<tab[j-1])
		{
			tab[j]=tab[j-1];
			j--;
			
		}
		tab[j]=m;
		 system("CLS");
		affiche(tab,5);
		sleep(2);
	}
}
unsigned rech(int tab[],unsigned n,int x)
{
	unsigned g=0;
	unsigned d=n-1;
	unsigned m;
	while(d>=g){
		m=(g+d)/2;
		if(tab[m]==x)
		return 1;
		if(x>tab[m]){
			g=m+1;
		}else{
			d=m-1;
		}
		
	}
	return 0;
	
}


main()
{
	int tab[20];
	int h;
	remplir(tab,5);
	tri_inserstion(tab,5);
	h=rech(tab,5,4);
	printf("\n%d",h);
	

}
