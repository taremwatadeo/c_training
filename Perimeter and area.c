#include <stdio.h>

int main()
{
    int l=7;
    int w=5;
    int Perimeter;
    int Area;
   
    Perimeter = 2*(l+w);
    Area = l*w;
    getchar();
   
    printf("Perimeter = 2*(l+w)\nPerimeter of rectangle is %d \n" , Perimeter);
    printf("Area = l*w\nArea of the rectangle is %d \n", Area);
    getchar();
}
