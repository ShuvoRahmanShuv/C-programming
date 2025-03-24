#include <stdio.h>
#include <stdlib.h>

int main()
{
    float PI=3.1416;
    int radius;
    float area;
    printf("Enter the radius of a circle: ");
    scanf("%d", &radius);
    area = PI * radius * radius;
    printf("The area of circle is: %f\n", area);
    if(area < 5)
    {
        printf("YES!\n");
    }
    else{
        printf("NO!\n");
    }
    return 0;
}