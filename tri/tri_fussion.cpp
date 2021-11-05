#include<stdio.h>
void fussion(int t[],unsigned a,unsigned c,unsigned b){
unsigned n=b-a;	
int tab[b-a];
int i=a;
int j=c;
int k=0;
do{
if(t[i]<=t[j]&&i<c){
    tab[k]=t[i];
    k++;
    i++;
}
else{
    tab[k]=t[j];
    k++;
    j++;
}
if(i==c&&j<b){
    for(;j<b;j++){
        tab[k]=t[j];
        k++;
    }
}
if(i<c&&j==b){
    for(;i<c;i++){
        tab[k]=t[i];
        k++;
    }
}

}while(i<c||j<b);
for(i=0;i<n;i++){
	t[a]=tab[i];
	a++;
}
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
int main()
{
	int a[20];
	remplir(a,10);
	fussion(a,0,5,10);
	affiche(a,10);
    return 0;
}
