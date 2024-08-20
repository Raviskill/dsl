#include <stdio.h> 
#include <stdlib.h> 
 
 
struct Node { 
    int data; 
    struct Node* next; 
}; 
void insert(struct Node** head, int data) 
{ 
 
    
    struct Node* ptr1 = (struct Node*)malloc(sizeof(struct Node)); 
    ptr1->data = data; 
    ptr1->next = *head; 
 
    if (*head != NULL) { 
 
       
        struct Node* temp = *head; 
        while (temp->next != *head) 
            temp = temp->next; 
        temp->next = ptr1; 
    } 
    else 
 
        ptr1->next = ptr1; 
 
    *head= ptr1; 
} 
 
 
void display(struct Node* head) 
{ 
    struct Node* temp = head; 
    if (head != NULL) { 
        do { 
            printf("%d ", temp->data); 
            temp = temp->next; 
        } while (temp != head); 
    } 
 
    printf("\n"); 
} 
 
 
void deleteNode(struct Node** head, int key) 
{ 
 
    if (head == NULL) 
        return; 
 
 
    if ((*head)->data == key && (*head)->next == *head)
    { 
        free(head); 
        *head = NULL; 
        return; 
    } 
 
    struct Node *last = *head, *d; 
 
    if ((*head)->data == key)
    { 
 
        while (last->next != *head) 
            last = last->next; 
 
 
        last->next = (*head)->next; 
        free(*head); 
        *head = last->next; 
        return; 
    } 
 
 
    while (last->next != *head && last->next->data != key) { 
        last = last->next; 
    } 
 
    if (last->next->data == key) { 
        d = last->next; 
        last->next = d->next; 
        free(d); 
    } 
    else 
        printf("node is not found \n"); 
} 
 
int main() 
{ 
    struct Node* head = NULL; 
 
 
    insert(&head, 2); 
    insert(&head, 5); 
    insert(&head, 7); 
    insert(&head, 8); 
    insert(&head, 10); 
 
     
    display(head); 
 
    deleteNode(&head, 7); 
 
    display(head); 
 
    return 0; 
}