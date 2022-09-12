#include <stdio.h>
#include <stdlib.h>


//Déclaration de la function
void echange(int a,int b){
    //Déclaration les varaible locale
    int c;
    //traitement de la function
    c = a;
    a = b;
    b = c;
  printf("resultat est : a = %d \t b = %d ", a, b);
}
int main()
{
    //Déclaration les varaible locale
    int a, b;
    printf("Donner deux nombre :");
    scanf("%d%d", &a, &b);
    //Appeler la function
    echange(a,b);
    return 0;
}
