#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


//Déclaration les varaible global
//int res;
//Déclaration de la function
//void divededby(int a,int b){
//    if(b==0){
//        printf("Erreur de nombre B=0");
//        exit( EXIT_SUCCESS );
//    }
//    else{
//        res = a/b;
//        printf("%d \n",res);
//    }
//}
//Déclaration de la function
bool dividedby(int a,int b){
    //Déclaration les varaible
        int i,res;
        bool nombre = false;
    if(b==0){
        printf("Erreur de nombre B=0");
        exit( EXIT_SUCCESS );
    }
    else{
        res = a/b;
        printf("%d \n",res);
    }
    //traitement de la function
    for(i=2;i<res;i++){
        if(res%i==0){
            nombre = true;
            break;
        }
    }
    //Afficher resultat de traitement
    if(nombre==false)
   {
       printf("nombre %d est un nombre premier.",res);
   }
   else
   {
      printf("nombre %d n'est pas un nombre premier.",res);
   }
}
int main()
{
    //Déclaration les varaible locale
    int a,b;
    printf("donner un nombre : ");
    scanf("%d",&a);
    printf("donner un nombre : ");
    scanf("%d",&b);
    //Appeler la function
//    divededby(a,b);
    dividedby(a,b);

    return 0;

}


