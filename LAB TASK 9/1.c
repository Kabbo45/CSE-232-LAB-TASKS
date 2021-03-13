#include <stdio.h>
#include <stdlib.h>

struct node
{
    int num;
    struct node *nextptr;
}*stnode;


void insertNodeAtEnd(int data)
{
    struct node *newNode, *temp;

    newNode = (struct node*)malloc(sizeof(struct node));

    if(newNode == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        newNode -> num = data;
        newNode -> nextptr = NULL;

        temp = stnode;

        while(temp != NULL && temp->nextptr != NULL)
            temp = temp -> nextptr;

        temp -> nextptr = newNode;

        printf("Node inserted successfully\n");
    }
}

int main()
{
    int n, c, data, pos;
    printf("\n\n Linked List : To create and display Singly Linked List :\n");
    printf("-------------------------------------------------------------\n");

    printf(" Input the number of nodes : ");
    scanf("%d", &n);
    createNodeList(n);
    printf("\n Data entered in the list : \n");
    displayList();

    do
    {
        printf("\n1 for First Insert\n2 for Last Insert\n3 for Middle Insert\n4 for Display");
        scanf("%d",&c);
        switch (c)
        {
        case 1:
            printf("\nEnter value:");
            scanf("%d",&data);
            insertfirst(data);
            break;
        case 2:
            printf("\nEnter value:");
            scanf("%d",&data);
            insertNodeAtEnd(data);
            break;
        case 3:
            printf("\nEnter value:");
            scanf("%d",&data);
            printf("\nEnter position:");
            scanf("%d",&pos);
            middleinsert(data, pos);
        case 4:
            displayList();
            break;
        default:
            printf("Wrong input");
            break;
        }
    }
    while (c!=5);
    return 0;
}


void middleinsert(int data, int pos)
{
    int i;
    struct node *newNode, *temp;

    newNode = (struct node*)malloc(sizeof(struct node));

    if(newNode == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        newNode -> num = data;
        newNode -> nextptr = NULL;

        temp = stnode;

        for(i = 2; i <= pos; i++)
        {
            temp = temp -> nextptr;

            if(temp == NULL)
                break;
        }

        if(temp != NULL)
        {
            newNode -> nextptr = temp -> nextptr;
            temp -> nextptr = newNode;
            printf("Node inserted successfully.\n");
        }

        else
        {
            printf("Unable to insert.\n");
        }
    }
}

void createNodeList(int n)
{
    struct node *fnNode, *tmp;
    int num, i;
    stnode = (struct node *)malloc(sizeof(struct node));

    if(stnode == NULL)
    {
        printf("Memory can not be allocated.");
    }
    else
    {


        printf("Input data for node 1 : ");
        scanf("%d", &num);

        stnode->num = num;
        stnode->nextptr = NULL;
        tmp = stnode;

        for(i=2; i<=n; i++)
        {
            fnNode = (struct node *)malloc(sizeof(struct node));
            if(fnNode == NULL)
            {
                printf("Memory can not be allocated.");
                break;
            }
            else
            {
                printf(" Input data for node %d : ", i);
                scanf(" %d", &num);

                fnNode->num = num;
                fnNode->nextptr = NULL;

                tmp->nextptr = fnNode;
                tmp = tmp->nextptr;
            }
        }
    }
}
void displayList()
{
    struct node *tmp;
    if(stnode == NULL)
    {
        printf(" List is empty.");
    }
    else
    {
        tmp = stnode;
        while(tmp != NULL)
        {
            printf(" Data = %x  %d  %x",tmp, tmp->num,tmp->nextptr);
            printf("\n");
            tmp = tmp->nextptr;
        }
    }
}


void insertfirst(int data)
{
    struct node *newnode, *tmp;
    newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode==NULL)
        printf("Memory can't be allocated");
    else
        newnode->num=data;
    newnode->nextptr=stnode;
    stnode=newnode;
    printf("\nNode inserted successfully./n");
}
