
#include <stdio.h>

#define PI 3.1415926f

int main(void)
{
   float v, r;
  
   printf("Enter the radius of the sphere in meters: ");
   scanf("%f", &r);

   v = 4.0f * PI * r * r * r / 3.0f;
   printf("The volume of a sphere with %.2f radius is %.2f cubic meters.\n", r, v);
   
   return 0;
}



