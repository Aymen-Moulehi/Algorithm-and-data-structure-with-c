#ifndef __FILE__H__
#define __FILE__H__

struct file{
    int data[6];
    unsigned in;
    unsigned out;
};

void cree_file(struct file *f);
unsigned vide(struct file f);
void encrement(unsigned *x);
unsigned pleine(struct file f);
int first_of_file(struct file f);
void enfiler(struct file *f,int x);
void defiler(struct file *f);




#endif