#include<stdio.h>
 int sorting(int arr[])
 {
    int i;
    int j;
    int tampp;

    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(arr[i]>arr[j])
            {
                tampp=arr[i];
                arr[i]=arr[j];
                arr[j]=tampp;
            }
        } 

        
    }
            for(i=0;i<5;i++)
        {
            printf("\t%d",arr[i]);
        }   



 }
 
 
int main()
{
    int arr[5]={10,1,3,18,15};
    
    
    

    sorting(arr);
    return 0;
}