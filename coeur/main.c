#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "menu.h"
#include "generationCode.h"

int main(int argc, char *argv[])
{	
	int choixmode = 0;	//reset the "choixmode" variable.
	int choixsousmode = 0;	//reset the "choixsousmode" cariable.
	int *param = &choixmode; //add a pointer at "choixmode".
	int *sousparam = &choixsousmode;	//add a pointer at "choixsousmode".
	
	menuPrincipal(); //call the "menuPrincipal" function.
	
	scanf("%d", &choixmode); //choose the blink mode.

	switch(choixmode)
	{
		case 0:
		quitMessage(); //call the "quitMessage" function.
		break;

		case 1:;
		choixsousmode = 0;
		break;

		case 2:
		menuDouble(); //call the "menuDouble" function.
		scanf("%d", &choixsousmode); //choose the sub blink mode.
		
		if (choixsousmode == 0)
		{
			quitMessage(); //call the "quitMessage" function.
		}
		break;

		case 3:
		choixsousmode = 0;
		break;

		case 4:
		choixsousmode = 0;
		break;

		case 5:
		menuDegrade(); //call the "menuDegrade" function.
		scanf("%d", &choixsousmode); //choose the sub blink mode.

		if (choixsousmode == 0)
		{
			quitMessage(); //call the "quitMessage" function.
		}

		case 6:
		menuChenille(); //call the "menuChenille" function.
		scanf("%d", &choixsousmode); //choose the sub blink mode.

		if (choixsousmode == 0)
		{
			quitMessage(); //call the "quitMessage" function.
		}
		break;

		case 7:
		menuChenille(); //call the "menuChenille" function.
		scanf("%d", &choixsousmode); //choose the sub blink mode.

		if (choixsousmode == 0)
		{
			quitMessage(); //call the "quitMessage" function.
		}
		break;

		case 8:
		menuChenille();	//call the "menuChenille" function.
		scanf("%d", &choixsousmode); //choose the sub blink mode.

		if (choixsousmode == 0)
		{
			quitMessage(); //call the "quitMessage" function.
		}
		break;

		case 9:
		menuLED(); //call the "menuLED" fonction.
		scanf("%d", &choixsousmode); //choose the sub blink mode.
		if (choixsousmode == 0)
		{
			quitMessage(); //call the "quitMessage" function.
		}
		break;

		default:
		errorMessage(); //call the "errorMessage" function.

	}

	ouvertureDuFichier(&choixmode, &choixsousmode);
	
	return 0;
}

