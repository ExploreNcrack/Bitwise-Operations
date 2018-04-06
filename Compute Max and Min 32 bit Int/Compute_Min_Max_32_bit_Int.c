# include <stdio.h>

int main (void){


 //make a mask of  1000 0000 0000 0000 0000 0000 0000 0000
 //this is also the min int
 int bit32thMask  = 1<<31;

 printf("\nThe bit mask of 1000 0000 0000 0000 0000 0000 0000 0000 is :\n%d\n",bit32thMask);
 printf("This is also the min signed int.\n\n");


 //since signed int need 1 bit at the front to represent positive
 //there are 31 bits of 1

 int max = ~(0)& ~(bit32thMask);
 
 printf("Negation of zero: %d\n\n",~(0));

 printf("The max signed int: %d\n\n", max);



return 0;

}
