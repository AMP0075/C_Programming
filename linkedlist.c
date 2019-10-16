#include<stdio.h>
#include<stdlib.h>
 struct list 
{
     int val;
     struct list *next;
}node;

 void main()
{
      typedef struct list node;
      int ch,data,pos,i,flg=-1;
      node *c,*front,*rear,*d,*s,*t;
    
      while(1)
     {        
              printf("\n");
              printf("\nCREATE=1");
             printf("\nINSERT AT BEGINING=2");
             printf("\nINSERT AT END=3");
             printf("\nDISPLAY=4");
             printf("\nINSERT AT DESIRES POSITION=5");
             printf("\nDELETE FROM BEGINIG=6");
             printf("\nDELETE AT END=7");
              printf("\nDELETE AT A DESIRED POSITION=8");
              printf("\n");
             printf("\nWhat is your choice:\t");
             scanf("%i",&ch);
          switch(ch)
        {
              case  1 : c=(node*)malloc(sizeof(node));
                            front=(node*)malloc(sizeof(node));   
                            rear=(node*)malloc(sizeof(node)); 
                            printf("\nEnter data:\t");
                            scanf("%i",&data);
                            c->val=data;
                            c->next=NULL;
 			    front=c;
			     rear=c; flg++; 
                             break;
                           
           
             case  2:   c=(node*)malloc(sizeof(node));
                              printf("\nEnter data:\t");
                              scanf("%i",&data);
                             c->val=data;
                             c->next=front;
                             front=c;flg++;
                            
                             break;
                          
             case 3 :    c=(node*)malloc(sizeof(node));
                             printf("\nEnter data:\t");
                              scanf("%i",&data);
                               t=rear;
                              c->val=data;
                              rear->next=c;
                              c->next=NULL;
                               rear=c;flg++;break;
        
              case 4:     printf("\nThe linked list: \t");
                                d=front;
                           if(flg==-1)
                         {
                               printf("\nEmpty list");
                         }
                         else
                         {

                             while(d!=NULL)    
                             {
                                 printf("%i\t",d->val);
                                 d=d->next;
                              }
                          } 
                              break;
      
              case 5:    c=(node*)malloc(sizeof(node));
                             printf("\nEnter data:\t");
                              scanf("%i",&data);
                              
                              printf("\nEnter the position:\t");
                             scanf("%i",&pos);
                             d=front;
                             c->val=data;
                             for(i=1;i<pos-1;i++)
                             d=d->next;
                             s=d->next;
                               d->next=c;
                              c->next=s;flg++;
                              break;
                                                          
                                 
                      
              case 6 :  d=front;
                             front=front->next;
                            free(d);
                             break;
        
              case 7:      free(t->next);
                                t->next=NULL;
                                break;
 
               case 8:   printf("\nEnter the position:\t");
                             scanf("%i",&pos);
                             d=front;
                          
                             for(i=1;i<pos-1;i++)
                             d=d->next;
                             s=d->next;
                            d->next=s->next;
                            free(s);break;
               
              case 9: exit(1);
                          

               
    
                               
                           
                             
                                
       }
   }
}
         
                            
                             
                            

