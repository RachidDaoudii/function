#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


//D�claration les varaible global
int res;
//D�claration de la function
void divededby(int a,int b){
        return res = a/b;
}
//D�claration de la function
bool isPremier(){
    //D�claration les varaible
//        int i,res;
//
//    if(b==0){
//        printf("Erreur de nombre B=0");
//        exit( EXIT_SUCCESS );
//    }
//    else{
//        res = a/b;
//        printf("%d \n",res);
//    }
    bool nombre = false;
    int i;
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
    //D�claration les varaible locale
    int a,b;
    printf("donner un nombre : ");
    scanf("%d",&a);
    printf("donner un nombre : ");
    scanf("%d",&b);

    if(b<1)
        printf("Erreur de nombre  b=0");
    //Appeler la function
    divededby(a,b);
    isPremier();

    return 0;

}


