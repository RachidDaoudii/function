#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//Déclaration de la function
bool ispremier(int a){
    //Déclaration les varaible
    int i;
    bool nombre = false;
    //traitement de la function
    for(i=2;i<a;i++){
        if(a%i==0){
            nombre = true;
            break;
        }
    }
    //Afficher résultat de traitement
    if(nombre==false)
   {
       printf("nombre %d est un nombre premier.",a);
   }
   else
   {
      printf("nombre %d n'est pas un nombre premier.",a);
   }
}
int main()
{
    //Déclaration les varaible locale
    int a;
    printf("donner un nombre : ");
    scanf("%d",&a);
    //Appeler la function
    ispremier(a);

    return 0;

}
