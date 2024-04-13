// Linear search in array
#include<stdio.h>
void main()
{
	int a,x=0,y,z,j,k;
	printf("Enter the number of elements:");
	scanf("%d",&a);
        int lin[a];
        printf("Enter %d integers:",a);
        for(x=0;x<a;x=x+1){
        	scanf("%d",&lin[x]);
        	
        	}
        	
        printf("Enter the element to be searched:");
        
        scanf("%d",&j);
        	
        for(y=0;y<a;y++){
        	z=lin[y];
        	if(z==j){
        		printf("Element found at position %d\n",y);
        		k=1;
        		break;
        		}
        	else
        	{
        		k=0;
        		continue;}}
        if(k==0){
        	printf("Element not found in the list\n");
        	}
}        	
