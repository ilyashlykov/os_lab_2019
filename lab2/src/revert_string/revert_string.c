#include "revert_string.h"
#include <string.h>
#include <stdlib.h>
void RevertString(char *str)
{
  int  N=strlen(str);
	char *buf=malloc(sizeof(char)*(N+1));
  strcpy (buf,str);
  for(int i=0;i<N;i++)
    str [N-1-i]=buf [i];
  free(buf);
}
