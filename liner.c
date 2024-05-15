#include<stdio.h>
int liner(int arr[],int size,int tamp)
{
     
     int not=0;
     printf("Enter the size: ");
    scanf("%d", &size);
    
    

    for( int i=0;i<size;i++)
    {
        arr[i]=(rand()%50)+1;
    }
for (int k = 0; k < size; k++) {
       printf("%d\t",arr[k]);
    }
    printf("tnter the eliment");
    scanf("%d",&tamp);
    for(int k=0;k<size;k++)
    {
        if(arr[k]==tamp)
        {
            not=1;
            printf("the tampe aliment pogisan is :-%d",k);
            break;
        }
         }
    if(not==0)
    {
        printf("\n not find value in array");
    }
    }
   
    



int main()

{
     int arr[50];
     int size=5;
     int tamp;
     liner(arr,size,tamp);
     
     
     return 0;

}