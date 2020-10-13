#include <stdio.h>
#include <stdlib.h>
#include "pile.h"

int error1(char *message)
{
	fprintf(stderr,"%s \n", message);
        //exit(-1);
	return(1);
}

PILE InitPile()
{
	return NULL;
}

void afficherPile (PILE pile)
{
	while( pile != NULL)
	{
		fprintf(stdout, "%d \n", (*pile).elem);
		pile = (*pile).suivant;	
	}
}

PILE Empiler (PILE pile, int val)
{
	PILE pileDeb= malloc(sizeof(*pile));
	(*pileDeb).elem = val;
	(*pileDeb).suivant = pile;

	return pileDeb; 
}	

int Depiler(PILE* pile)
{


	PILE ancienne = *pile;
	
	if(ancienne ==NULL) error1("error");

	int val = (*(*pile)).elem;	
	*pile = (*(*pile)).suivant;
	
	free(ancienne);
	
	return val;
	
}	


