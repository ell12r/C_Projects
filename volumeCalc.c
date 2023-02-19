#include <stdio.h>
#include <stdlib.h>

    int l=20;
    double w=10.5;
    double h=19.5;
    int perimult=4;
    double PeriMeter;
    double volume;
int main(){
    PeriMeter=perimult*(l+w+h);
    volume=(w*l*h);
    printf("The perimeter of the cuboid is : %.2f cm\n", PeriMeter);
    printf("The volume of the cuboid is : %.2f cubic centimeters\n", volume);
return 0;
}
