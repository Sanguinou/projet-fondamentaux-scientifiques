#include <stdio.h>
#include <stdlib.h>
#include "menu.h"



void menuPrincipal(void) //function that print the first menu.
{  
	printf("------------------------------------------------\n");
	printf("|                    |menu|                    |\n");
	printf("|                    ------                    |\n");
	printf("|                                              |\n");
	printf("| Choix du mode de clignotement du coeur:      |\n");
	printf("|   1 -> toute les LEDs.                       |\n");
	printf("|   2 -> une LED sur 2.                        |\n");
	printf("|   3 -> droite / gauche.                      |\n");
	printf("|   4 -> une LED sur 3.                        |\n");
	printf("|   5 -> degrade.                              |\n");
	printf("|   6 -> chenille (tout allumer).              |\n");
	printf("|   7 -> chenille (1 LED).                     |\n");
	printf("|   8 -> chenille (3 LED).                     |\n");
	printf("|   9 -> LED unique.                           |\n");
	printf("|                                              |\n");
	printf("|                  0 pour Quitter le programme.|\n");
	printf("------------------------------------------------\n");
}
void menuDouble(void) //function that print the 1 per 2 menu.
{
	printf("------------------------------------------------\n");
  printf("|                  |menu LED|                  |\n");
  printf("|                    ------                    |\n");
  printf("|             LED 5 x     x LED 7              |\n");
  printf("|         LED 4 x      x      x LED 8          |\n");
  printf("|                    LED 6                     |\n");
  printf("|       LED 3 x                 x LED 9        |\n");
  printf("|                                              |\n");
  printf("|            LED 2 x       x LED 10            |\n"); 
  printf("|                                              |\n");
  printf("|                      x LED 1                 |\n");
  printf("|                                              |\n");
  printf("| Choix du mode du clignotement du coeur:      |\n");
  printf("|                                              |\n");
  printf("|   1 -> Paire.                                |\n");
  printf("|   2 -> Impaire.                              |\n");
  printf("|   3 -> Alternance                            |\n");
	printf("|                                              |\n");
	printf("|                  0 pour Quitter le programme.|\n");
  printf("------------------------------------------------\n");
}

void menuDegrade(void)  //function that print the fade menu.
{    
  printf("------------------------------------------------\n");
  printf("|                  |menu LED|                  |\n");
  printf("|                    ------                    |\n");
  printf("|                                              |\n");
  printf("| Choix du mode de dégradation du coeur:       |\n");
  printf("|                                              |\n");
  printf("| Verticale :                                  |\n");
  printf("|   1 -> haut vers bas.                        |\n");
  printf("|   2 -> bas vers haut.                        |\n");
  printf("| Horizontale :                                |\n");
  printf("|   3 -> gauche vers droite.                   |\n");
  printf("|   4 -> droite vers gauche.                   |\n");
  printf("|                                              |\n");
  printf("|                  0 pour Quitter le programme.|\n");
  printf("------------------------------------------------\n");
}
    
void menuChenille(void) //function that print the chain menu.
{   
 	printf("------------------------------------------------\n");
 	printf("|                  |menu LED|                  |\n");
  printf("|                  ----------                  |\n");
  printf("|             LED 8 x     x LED 9              |\n");
  printf("|         LED 6 x      x      x LED 7          |\n");
  printf("|                   LED 10                     |\n");
  printf("|       LED 4 x                 x LED 5        |\n");
  printf("|                                              |\n");
  printf("|            LED 2 x       x LED 3             |\n"); 
  printf("|                                              |\n");
  printf("|                      x LED 1                 |\n");
  printf("|                                              |\n");
  printf("| Choix du sens de déplacement de la chenille :|\n");
  printf("|   1 -> De la gauche vers la droite           |\n");
  printf("|   2 -> De la droite vers la gauche           |\n");
  printf("|                                              |\n");
  printf("|                  0 pour Quitter le programme.|\n");
  printf("------------------------------------------------\n");
}

void menuLED(void)  //function that print the 1 LED menu.
{    
  printf("------------------------------------------------\n");
  printf("|                  |menu LED|                  |\n");
  printf("|                  ----------                  |\n");
  printf("|            LED 8  x     x  LED 9             |\n");
  printf("|      LED 6    x      x      x  LED 7         |\n");
  printf("|                    LED 10                    |\n");
  printf("|      LED 4  x                 x  LED 5       |\n");
  printf("|                                              |\n");
  printf("|           LED 2  x       x  LED 3            |\n"); 
  printf("|                                              |\n");
  printf("|                      x LED 1                 |\n");
  printf("|                                              |\n");
  printf("| Choix du mode de clignotement du coeur:      |\n");
  printf("|   1 -> LED 1.                                |\n");
  printf("|   2 -> LED 2.                                |\n");
  printf("|   3 -> LED 3.                                |\n");
  printf("|   4 -> LED 4.                                |\n");
  printf("|   5 -> LED 5.                                |\n");
  printf("|   6 -> LED 6.                                |\n");
  printf("|   7 -> LED 7.                                |\n");
  printf("|   8 -> LED 8.                                |\n");
  printf("|   9 -> LED 9.                                |\n");
  printf("|  10 -> LED 10.                               |\n");
  printf("|                                              |\n");
  printf("|                  0 pour Quitter le programme.|\n");
  printf("------------------------------------------------\n");
    
}
void errorMessage(void) //function that print a error message and quit the program.

{
  printf("------------------------------------------------\n");
  printf("|        ERROR 404 : COMMAND NOT FOUND         |\n");
  printf("------------------------------------------------\n");
}
    

void quitMessage(void)  //function that print a bye message and quit the program.
{
	printf("------------------------------------------------\n");
  printf("|                   BYE BYE !                  |\n");
  printf("------------------------------------------------\n");
}
