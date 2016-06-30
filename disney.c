#include<stdio.h>
int main()
{
float x1,y1,x2,y2, a,b;
  printf("Enter x1\n");
  scanf("%f ",&x1);
  printf("Enter y1\n");
  scanf("%f",&y1);
  printf("Enter x2\n");
  scanf("%f ",&x2);
  printf("Enter y2\n");
  scanf("%f ",&y2);
  a=(x1+x2)/2;
  b=(y1+y2)/2;
 printf("Resort is located at (%2.1f , %2.1f)",a,b);
  return 0;
}
