#include<stdio.h>
#include<stdlib.h>
 
 typedef struct node_type
{  int info;
   struct node_type *next;
 }node_type;
   node_type *first, *node, *last;
   node_type *add(node_type *first, int info)
{  
  node= (node_type*)malloc(sizeof(node_type));
   node->info=info;
   node->next=NULL;
      if (first==NULL)
          first=node;
       else 
          last->next=node;
          last=node;
return first;
   }
    
   void display(node_type *first)
   {
     node_type *temp;
     temp=first;
     printf("\n Elements of Linked List are:");;
      while(temp!=NULL)
       { 
         printf("%d \n",temp->info);
	temp=temp->next; 
         }
    }

    int main()
  {
    int info,ch;
    first=node=last=NULL;
    do
    {
	printf("enter choice no.\n");
	printf("1.enter a element \n");
	printf("2.print result \n");
	printf("3.exit\n");        
	scanf("\n %d",&ch);
 	switch(ch)
	{
	case 1: printf("enter no.\n");
		scanf("%d",&info);;
 		first=add(first,info);
		break;
	case 2: display(first);
		break; 
	case 3: exit(0);
	default: printf("\n wrong cchoice");  
    }} while(ch!=3);
	return 0;
}
