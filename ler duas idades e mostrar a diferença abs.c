/******************************************************************************

ler duas idades e mostrar a diferença delas 

*******************************************************************************/
#include <stdio.h>
int leidade () {
int i;

    printf("digite a idade de 0 a 110: ");
    scanf("%d", &i);
    while (i<0 || i> 110) {
        printf("digite novamente");
        scanf("%d",&i);
        
    }

    return i;
}
int abs (int x) {
    if (x <0) x=(-1) * x;
    return x;
}
 
int main () {
    int id1, id2;
     id1 = leidade();
     id2 = leidade();
     printf ("diferença = %d", abs (id1-id2));
     
     return 0;
}
