#include <stdio.h>
#include <stdlib.h>
#include "generationCode.h"


int ouvertureDuFichier(int *param, int *sousparam) //function that open the param.h and print the constant that will be use by the ARDUINO.
{
	int mode = *param;	//add the value to "mode".
	int sousmode = *sousparam; //add the value to "mode".

	FILE *f = NULL;
 
    f = fopen("coeur/param.h", "w+"); //Open the param.h file.
    
    if (!f) //test if the file exist.
    {
    	printf("fichier non lu");
		fclose(f);		
	}
 
	fprintf(f, "extern int param = %d;\n", mode); //print the constant in the file.
	fprintf(f, "extern int sousparam = %d;\n", sousmode); //print the second constant in the file.

	fclose(f); //close the file.
}
