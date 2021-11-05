#include<stdio.h>
#include"file.h"


int main(){
    struct file fi;
    cree_file(&fi);
    enfiler(&fi,2);
    enfiler(&fi,3);
    printf(" ==> %d ",first_of_file(fi));
    defiler(&fi);
    printf(" ==> %d ",first_of_file(fi));
    enfiler(&fi,4);
    return 0;
}