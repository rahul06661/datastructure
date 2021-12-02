#include<stdio.h>
#include<malloc.h>

struct node
{
    int data;
    struct node* next;
};

struct node* start;

void insert(int data)
    {
        struct node* node1;
        node1=malloc(sizeof(struct node*));
        if(start==NULL)
        {
            start=node1;
            node1->data=data;
            node1->next=NULL;
            printf("vljsnvlkjsvfnskd");
        }
        else
        {
            node1->data=data;
            node1->next=start;
            start=node1;
            printf("###################################");
        }
    printf("Node created");
    }

void display(struct node* p)
{
     while(p!=NULL)
    {
    printf("%d \t",p->data);
    p=p->next;
    }
}

void main()
{
    int data;
    printf("\n enter data");
    scanf("%d",&data);
    insert(10);
    insert(101);
    insert(102);
    insert(104);
    insert(106);
    display(start);



}
