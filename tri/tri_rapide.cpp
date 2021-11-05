#include<stdio.h>
/* tri rapide*/
unsigned pos(int tab[],unsigned a,unsigned b){
	unsigned i=a; 
	unsigned j=b-1;
	int pivot=tab[a];
	unsigned pos_pivot=i;
	while(i<j)
	{
		while(tab[pos_pivot]<=tab[j]&&j>pos_pivot)
		{
			j--;
		}
		if(tab[pos_pivot]>tab[j])
		{
			tab[pos_pivot]=tab[j];
			tab[j]=pivot;
			pos_pivot=j;
		}
		while(tab[pos_pivot]>=tab[i]&&i<pos_pivot)
		{
			i++;
		}
		if(tab[pos_pivot]<tab[i]){
			tab[pos_pivot]=tab[i];
			tab[i]=pivot;
			pos_pivot=i;
		}
	}
	return pos_pivot;
}
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
void tri_rapide(int tab[],unsigned a,unsigned b){
	unsigned pos_p;
	if(a<b)
	pos_p=pos(tab,a,b);
if(pos_p==b-1&&a<pos_p){
	tri_rapide(tab,a,b-1);
}else if(pos_p==a&&b>pos_p){
	tri_rapide(tab,a+1,b);
}else if(pos_p<b&&pos_p>a){
	tri_rapide(tab,a,pos_p-1);
	tri_rapide(tab,pos_p+1,b);
}


}

main()
{
	int tab[20];
	unsigned n=10;
	remplir(tab,n);
	tri_rapide(tab,0,n);
	affiche(tab,n);
	
}
