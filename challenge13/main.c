#include <stdio.h>
#include <stdlib.h>

    struct personne{
        char matricule[10];
        char nom[10];
        int age;
        float note;
    };

//    void nombre_personne(int nbr_p ,int nbr_note){
//        for(int i=0;i<nbr_p;i++){
//        scanf("%s",&per[i].matricule);
//        scanf("%s",&per[i].nom);
//        scanf("%d",&per[i].age);
//        for(j = 0;j<nbr_note;j++){
//            printf("note %d :",j+1);
//            scanf("%f",&per[j].note);
//        }
//    }
//
//    };

int main(){

//    int n,i;
//    int nbr;
//    struct personne per[50];
//    printf("donner nombre de personne : ");
//    scanf("%d",&n);
//
//    for(i=0;i<n;i++){
//        printf("Personne nombre %d \n",i+1);
//        printf("Donner ton matricule : ");
//        scanf("%s",&per[i].matricule);
//        printf("Donner ton nom : ");
//        scanf("%s",&per[i].nom);
//        printf("Donner ton age : ");
//        scanf("%d",&per[i].age);
//        printf("entrer le nombres des notes");
//        scanf("%d",&nbr);
//        for(int i = 1;i<=nbr;i++){
//        scanf("%f",&per[i].note);
//        }
//    }
//    printf("---------les information-----------\n");
//    for(i=0;i<n;i++){
//        printf("matricule: %s\n",per[i].matricule);
//        printf("nom : %s\n",per[i].nom);
//        printf("age : %d\n",per[i].age);
//    for(int i = 1;i<=nbr;i++){
//        printf("note : %.2f\n",per[i].note);
//    }
//
//    printf("\n");
//    }

//    int nbr;
//    printf("entrer le nombres des notes");
//    scanf("%d",&nbr);
//    int notes[nbr];
//    for(int i = 0;i<=nbr-1;i++){
//        scanf("%d",&notes[i]);
//    }
//    for(int i = 0;i<=nbr-1;i++){
//        printf("\n %d",notes[i]);
//


    int nbr_p,nbr_note,i,j;
    printf("Enter nombre personne : ");
    scanf("%d",&nbr_p);
    printf("Enter nombre des note : ");
    scanf("%d",&nbr_note);
    struct personne per[nbr_p];
    char liste[nbr_note];
    for(i=0;i<nbr_p;i++){
        printf("Personne nombre %d \n",i+1);
        printf("Donner ton matricule : ");
        scanf("%s",&per[i].matricule);
        printf("Donner ton nom : ");
        scanf("%s",&per[i].nom);
        printf("Donner ton age : ");
        scanf("%d",&per[i].age);
        for(j = 0;j<nbr_note;j++){
            printf("note %d :",j+1);
            scanf("%f",&per[j].note);
        }
    }
    printf("--------les information--------\n");
    for(i=0;i<nbr_p;i++){
        printf("Matricle est : %s \n",per[i].matricule);
        printf("Nom est : %s\n",per[i].nom);
        printf("Age est :%d \n",per[i].age);
        for(j=0;j<nbr_note;j++){
        printf("note %d : %.2f \n",j+1,per[j].note);
        }
        printf("\n");
    }

    return 0;
}

