#include <stdio.h>
#include <stdlib.h>
#include "pile.h"
#include "hanoi.h"

int deplacer(PILE *source, PILE *dest)
{
	if(*dest != NULL)
	{
		if( (*(*source)).elem < (*(*dest)).elem || (*dest ==NULL) )
		{
			*dest = Empiler(*dest, Depiler(source));
			return(0);
		}else{
			error1("wollah frrrr");
			return (1);
	}else{
		int val = Depiler(source);
		*dest=Empiler(*dest,val);
		return(0);
	}
}

int hanoi(int N, PILE *depart,PILE *arrive,PILE *passage )
{
	if(N!=0)
	{
		hanoi(N-1,depart, passage, arrive);
		deplacer(depart,arrive);
		hanoi(N-1,passage, arrive, depart);
	}
	return(0);
}
