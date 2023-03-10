#include<stdio.h>
int main()
{
  int r,c,s;
  for(r=5; r>=1; r--)
  {
    for(s=1; s<r; s++)
    printf(" ");
    for(c=5; c>=r; c--)
      printf("%d",r);
    printf("\n");
  }
  return 0;
}

