#include<stdio.h>
#include<assert.h>
#include"file.h"


void cree_file(struct file *f){
    f->in=0;
    f->out=0;
}

unsigned vide(struct file f){
    return f.in == f.out ;
}

void encrement(unsigned *x){
    if(*x < 5)
        (*x)++;
    else
        (*x)==0;
}

unsigned pleine(struct file f){
    unsigned test = f.in;
    encrement(&test);
    return test == f.out ;
}

int first_of_file(struct file f){
    assert(!vide(f));
    return f.data[f.out+1];
}

void enfiler(struct file *f,int x){
    assert(!pleine(*f));
    encrement(&(f->in));
    f->data[f->in]=x;
}

void defiler(struct file *f){
    assert(!vide(*f));
    encrement(&(f->out));
}