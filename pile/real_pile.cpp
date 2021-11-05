#include<stdio.h>
#include<assert.h>
#include<stdlib.h>


typedef struct element
{
	int value;
	struct element *suivant;
};

static element *sommet;

void cree()
{
	sommet==NULL;
}

unsigned vide ()
{
	return(sommet==NULL);
}

int last()
{
	assert(!vide());
	return sommet->value;
}

void enpiler(int x)    //x est la valeur ajoute dans la pile
{
	element *p;
	p=(element*)malloc(sizeof(element));
	p->value=x;
	p->suivant=sommet;
	sommet=p;
}

void depiler()
{
	element *p;
	p=sommet;
	sommet=p->suivant;
	free(p);
	
}

main()
{
	int i;
	enpiler(1);
	enpiler(2);
	enpiler(3);
	enpiler(4);
	for(i=0;i<4;i++){
		printf("[%d]\n",sommet->value);
		depiler();
		
	}
	if(vide()){
		printf("la pile est deja vide");
	}
	else{
		printf("la pile est non vide");
	}
	
	
	
}
