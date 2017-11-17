
#include <stdio.h>
#include <stdlib.h>
#include "menu.h"


int choix; //this variable is for the choice of in the menu

int main(int argc, char const *argv[])
{
    printf("O------------------------------------------------------------------O\n");
    printf("|                   |MENU CARDIO-FREQUENCEMETRE|                   |\n");
    printf("|                              --------                            |\n");
    printf("|                                                                  |\n");
    printf("|Choix des options d'affichage :                                   |\n");
    printf("|                                                                  |\n");
    printf("|1. Afficher les donnees dans l'ordre du fichier .csv              |\n");
    printf("|2. Afficher les donnees en ordre croissant                        |\n");
    printf("|3. Afficher les données en ordre decroissant                      |\n");
    printf("|4. Rechercher et afficher les données pour un temps particulier   |\n");
    printf("|5. Afficher la moyenne de pouls dans une plage de temps donnee    |\n");
    printf("|6. Afficher le nombre de lignes de donnees actuellement en memoire|\n");
    printf("|7. Rechercher et afficher le minimum de pouls                     |\n");
    printf("|8. Rechercher et afficher le maximum de pouls                     |\n");
    printf("|9. Quitter l'application                                          |\n");
    printf("O------------------------------------------------------------------O\n");
   
  scanf("%d", &choix); //asks the user to choose one of the menu functions.
  printf("Vous avez choisi: %d\n", choix);
          
   if (choix == 1) //Opening the .csv file in read only, if it fails, it sends an error.
         {
 FILE* fichier = NULL; 
  fichier = fopen("battements.csv","r"); 

    if (fichier != NULL)
    {
        //lire ou écrire
      
      fclose(fichier);
    }
    else
    {
        printf("Impossible d'ouvrir le fichier");
    }
}
     
        
   if (choix == 2) //ascending sorting, 
         {
     int print = 0;
    int cas = 9; 			// board's frames initialisation
    int tableau[cas]; 	//table initialisation
    tableau[0] = 97;       tableau[1] = 42;
    tableau[2] = 89;
    tableau[3] = 21;
    tableau[4] = 14;
    tableau[5] = 36;
    tableau[6] = 58;
    tableau[7] = 65;
    tableau[8] = 73; 

int *result = croissant(tableau); //gets the croissant function's table results
 for (print = 0; print<cas;print ++) { 		//For function in order to show the sorting
 	printf("%d\n", result[print]); 
 }
           
         }
        
   if (choix == 3)	 //descending sorting
         {
         	
    int print = 0;
    int cas = 9; 		// board's frames initialisation
    int tableau[cas]; //table initialisation
    tableau[0] = 97;
    tableau[1] = 42;
    tableau[2] = 89;
    tableau[3] = 21;
    tableau[4] = 14;
    tableau[5] = 36;
    tableau[6] = 58;
    tableau[7] = 65;
    tableau[8] = 73;

int *result = decroissant(tableau); // gets the decroissant function's table results
 for (print = 0; print<cas;print ++) {
 	printf("%d\n", result[print]); //For function in order to show the sorting
         
         }
     }
        
   if (choix == 4) //research algorithm
         {
         	int valeur;
         	printf("Veuillez rentrer la valeur que vous voulez rechercher : ");
         	scanf("%d", &valeur);
  int cas;
 int tableau[cas];
  tableau[0] = 97;
  tableau[1] = 42;
  tableau[2] = 89;
  tableau[3] = 21;
  tableau[4] = 14;
  tableau[5] = 36;
  tableau[6] = 58;
  tableau[7] = 65;
  tableau[8] = 73;
  int *result = recherche;

for (cas = 0; tableau[cas] != NULL; cas++) {
if (tableau[cas]= valeur) {

         }
     }
     	printf("%d\n", cas);
 }
        
   if (choix == 5)
   {
   	
   }
   

   if (choix == 6)
         {
           //ligneMemoire();
         }
        
   if (choix == 7)
         {
           //poulsMin();
         }
        
   if (choix == 8)
         {
           //poulsMax();
         }
        
  if (choix == 9)
         {
           return 0;
         } 
         
    
  if(choix>9||choix<1) //if the choice variable is not from 1 to 9, prints an error and asks to chose again
         {
            printf("Erreur\n"); 
            scanf("%d\n", &choix);
            printf("Vous avez choisi: %d\n", choix);
         }
  
  return 0;
}
