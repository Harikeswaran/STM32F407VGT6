#include <stdio.h>

int main()
{
    unsigned char distanceA2B = 160;
    unsigned char distanceB2C = 40;
    
    unsigned char distanceA2C;
    distanceA2C = distanceA2B+distanceB2C;
    printf("Total distance from A2C = %d km\n", distanceA2C);
    //hex equivalent of the above code will look like:
    printf("Total distance from A2C = %x km\n", distanceA2C);
    //octal format of the above code will look like:
    printf("Total distance from A2C = %o km\n", distanceA2C);
    //character format of the above code will look like:
     printf("Total distance from A2C = %c km\n", distanceA2C);
    return 0;
}
