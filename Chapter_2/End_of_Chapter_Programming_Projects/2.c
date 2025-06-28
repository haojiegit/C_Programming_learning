#include <stdio.h>

#define PI 3.1415926f

int main(void)
{
   float v, r = 10.0f;
   
   v = 4.0f * PI * r * r * r / 3.0f;
   printf("The volume of a sphere with 10-meter raidus is %.2f cubic meters.\n", v);
   
   return 0;
}



