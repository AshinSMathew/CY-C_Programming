#include <stdio.h>

int main()
{
    int a,b,i=0,j=0;
    printf("Enter the length of the two strings to be concatenated(including'$'):\n");
    scanf("%d%d",&a,&b);
    char arr1[a],arr2[b],arr3[a+b];
    printf("Enter two strings each ending with'$'\n");
    scanf("%s%s",arr1,arr2);

    while(arr1[i]!='\0')
    {
        arr3[j]=arr1[i];
        i++;
        j++;

    }
    i=0;
    while(arr2[i]!='\0')
    {
        arr3[j]=arr2[i];
        i++;
        j++;
    }
    printf("%s",arr3);
    return 0;
}
