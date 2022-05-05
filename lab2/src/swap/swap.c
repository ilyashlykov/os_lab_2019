#include "swap.h"

void Swap(char *left, char *right)
{
	char buf1,buf2;
  buf1=*left;
  buf2=*right;
  *left=buf2;
  *right=buf1;
}
