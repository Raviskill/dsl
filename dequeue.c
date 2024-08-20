#include <stdio.h>

int rare= -1;
int front = -1;

int Insert(int arr[],int n,int element)
{
        int a;
    
    
    printf("\nenter:-");
    scanf("%d",&a);
    
    if(rare==n-1){
        printf("queue is full");
    }
    if(a==1)
    {
     if(rare==-1 && front ==-1){
        rare=front=0;
        arr[rare]=element;
    }
    else{
        rare++;
        arr[rare]=element;
    }
    }
    else
    {
        if(rare==-1 && front ==-1){
        rare=front=5;
        arr[front]=element;
        }
        else
        {
        rare--;
        arr[front]=element;
        
      
    }
    
    
}
}
int Delete(int arr[])
{
    int a;
    
    printf("right side to Delete to enter 1");
    printf("\nright side to Delete to enter 2");
    printf("\nenter:-");
    scanf("%d",&a);
     if(rare==-1 && front == -1){
         printf("queue is empty!");
     }


{
      if(front==rare){
         front=rare=5;
     }
     else{
         printf("%d\n",arr[rare]);
        rare--;
     }
}

{
    if(front==rare)
    {
        front=rare=-1;
    }
         else{
         printf("%d\n",arr[front]);
        front++;
     }
    
}


}
int Display(int arr[])

{
    
    
{
    if(rare==-1 && front==-1){
        printf("data not found");
    }
    else{
        for(int i=front; i<rare+1; i++){
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
}
}

int main() 
{
    
    int n=5;
    int arr[n];
    int element = 52;

    Insert(arr,n,10);
    Insert(arr,n,20);
    Insert(arr,n,30);
    
    


    Display(arr);
    

    





    return 0;
}
    