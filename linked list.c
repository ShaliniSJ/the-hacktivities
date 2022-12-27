#include<stdio.h> 
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};
struct node *head;
void add_at_end() 
{
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    struct node *temp;
    if (head == NULL){
        ptr->link = NULL;
        printf("Enter the value : ");
        scanf("%d",&ptr->data);
        head = ptr;
    }
    else{
        temp = head;
        while(temp->link != NULL){
            temp = temp->link;
        }
        printf("Enter the data : ");
        scanf(" %d",&ptr->data);
        temp->link = ptr;
        ptr->link = NULL;
    }  
}
void show(){
    struct node *ptr ;
    ptr = head;
    printf("Printing values : \n");
    while(ptr != NULL){
        printf("%d ",ptr->data);
        ptr = ptr->link;
    }
}
int main(){
    
    int useropp ;
    char n;
    while(1){
        printf("~~~~~~~~~~~~~WELCOME~~~~~~~~~~~~~~~\n");
        printf("Select your option below \n");
        printf("1.Insert element at the end of the linked list\n");
        printf("Enter your option : ");
        scanf(" %d",&useropp);
        switch (useropp){
            case 1:
                add_at_end(head);
                break;
            default:
                printf("Enter a valid input\n");
        }
        show();
        printf("\nYou wanna continue : ");
        scanf("%s",&n);
        if (n == 'n'|n=='N')
        break;
    }
    return 0;
}
