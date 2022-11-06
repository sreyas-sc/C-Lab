#include<stdio.h>
struct Node
{
    int dt;
    struct Node *next;
};
struct Node *rear;
struct Node *front;
void insert()
{
    struct Node *newnode=(struct Node*)malloc(sizeof(struct Node));
    printf("\n Enter the value: ");
    scanf("%d",&newnode->dt);
    if(front==NULL)
    {
       
        front=newnode;
        rear=newnode;
        front->next=NULL;
        rear->next=NULL;
    }
    else{
        rear->next=newnode;
        rear=newnode;
        newnode->next=NULL;
    }
    printf("Item pushed:");
}

void delete()
{
    int item;
    struct Node *ptr;
    if(front==NULL)
    printf("Stack Underflow: \n");
    else
    {
        item=front->dt;
        ptr=front;
        front=front->next;
        free(ptr);
        printf("Item %d popped",item);
    }
    
}

void display()
{
    struct Node *p;
    if(front==NULL)
    printf("Queue is empty:\n");
    else
    {
        p=front;
        while(p!=NULL)
        {
            printf("%d ",p->dt);
            p=p->next;
        }
    }
}

void main()
{
int choice=0;     
    while(choice != 4)  
    {  
        printf("\n\nChose one from the below options...\n");  
        printf("\n1.insert\n2.delete\n3.Show\n4.Exit");  
        printf("\n Enter your choice \n");        
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            {   
                insert();  
                break;  
            }  
            case 2:  
            {  
                delete();  
                break;  
            }  
            case 3:  
            {  
                display();  
                break;  
            }  
            case 4:   
            {  
                printf("Exiting....");  
                break;   
            }  
            default:  
            {  
                printf("Please Enter valid choice ");  
            }   
    };  
}  
}