#include <stdio.h>
#include <stdlib.h>


//D�claration de la function
int Somme (int a, int b){
    //traitement de la function
    return a+b;
}

int main()
{
    //D�claration les varaible locale
    int a,b;
    printf("Donner deux nombre a et b :");
    scanf("%d%d",&a,&b);
    //Appeler la function
    printf("la somme de deux nombre est : %d",Somme(a,b));
    return 0;
}
