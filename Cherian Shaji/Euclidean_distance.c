#include <stdio.h>
#include <math.h>

int main()
{
    int x1,y1,z1,x2,y2,z2;
    float distance;
    printf("Enter the coordinates of the first point:\n");
    scanf("%d%d%d",&x1,&y1,&z1);
    printf("Enter the coordinates of the second point:\n");
    scanf("%d%d%d",&x2,&y2,&z2);
    distance=sqrt(pow((x2-x1),2)+pow((y2-y1),2)+pow((z2-z1),2));
    printf("The distance between the two given points is:%f\n",distance);


    return 0;
}

