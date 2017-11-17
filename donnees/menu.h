#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>




void csv(){

    }



  int *croissant(int* tableau) //ascending sorting function
{

 


    int passage = 0;
    bool permutation = true;
    int cas = 0;
   
    while (permutation) { //using the bubble sort algorithm
        permutation = false;
        passage ++; 
        for (cas=0;tableau[cas +1] != NULL;cas++) { //starts at cas = 0, adds +1 to cas everytime it loops, ends when tableau[cas +1] is NULL
            if (tableau[cas]>tableau[cas+1]){ //if is true if for example, frame 4 is higher than frame 5, in order to swap those frames
                permutation = true;
                int temp = tableau[cas]; 		//  swaps the two
                tableau[cas] = tableau[cas+1];  //  following frames 
                tableau[cas+1] = temp;			//  in the board 
                   
            }
          
        }
       
    }
    return (tableau);
}

int *decroissant(int* tableau)
{

 


    int passage = 0;
    bool permutation = true;
    int cas = 0;
   
    while (permutation) {
        permutation = false;
        passage ++; 
        for (cas=0;tableau[cas +1] != NULL;cas++) { //starts at cas = 0, adds +1 to cas everytime it loops, ends when tableau[cas +1] is NULL
            if (tableau[cas]<tableau[cas+1]){
                permutation = true;
                int temp = tableau[cas];		//  swaps the two
                tableau[cas] = tableau[cas+1];  //  following frames 
                tableau[cas+1] = temp;			//  in the board 
                   
            }
          
        }
       
    }
    return (tableau);
}

int recherche(int *tableau, int valeur) // research algorithm
{
	int print = 0;
  int cas = 9;
 
  tableau[0] = 97;
  tableau[1] = 42;
  tableau[2] = 89;
  tableau[3] = 21;
  tableau[4] = 14;
  tableau[5] = 36;
  tableau[6] = 58;
  tableau[7] = 65;
  tableau[8] = 73;

for (cas = 0; tableau[cas] != NULL; cas++) {
if (tableau[cas] = valeur) {
return(cas);
}
}

}

void ligneMemoire()
{


}

void poulsMin()
{

  
}

void poulsMax()
{

  
}

void quit()
{


}
