int rare= -1; 
int front = -1; 


int Insert(int arr[],int n,int element)
{
       
    if(rare==n-1)
    {
        printf("queue is full");
    }
    
    
    else if(rare==-1 && front ==-1){
        rare=front=0;
        arr[rare]=element;
    }
    else{
        rare++;
        arr[rare]=element;
    }
    }

 
int Insert2(int arr[],int n,int element)
{
    
 char a;
    
    
    printf("\nenter:-");
    scanf("%d",&a);
    
    if(rare==n-1){
        printf("queue is full");
    }
    if(a=="right")
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
       front--;
        arr[front]=element;
        
      
    }
 
}
}
int Delete(int arr[]) 
{ 
    char a; 
     

    printf("\nenter:-"); 
    scanf("%d",&a); 
     if(rare==-1 && front == -1){ 
         printf("queue is empty!"); 
     } 
if(a=="right") 
{ 
      if(front==rare){ 
         front=rare=5; 
     } 
     else{ 
         printf("%d\n",arr[rare]); 
        rare--; 
     } 
} 
else 
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
    Insert(arr,n,40); 

Display(arr); 
 
    Insert2(arr,n,50); 
 
    Display(arr); 
 
  
 
 
 
 
 
    return 0; 
}
