#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
}*head=NULL;

int count(struct node*p){
    int c=0;
    while(p!=NULL){
        c++;
        p=p->next;
    }return c;
}
void stack_create(struct stack *st){

}

void create(int a[],int n){
    struct node *temp,*last;
head=(struct node*)malloc(sizeof(struct node));
head->data=a[0];
head->next=NULL;
last = head;
for(int i=1;i<n;i++){
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=a[i];
    temp->next=NULL;
    last->next=temp;
    last=temp;
}
}

// void endinsert(struct node *p,int data){
//     struct node *et;
//     et=(struct node *)malloc(sizeof(struct node *));
//
//     et->data=data;
//     et->next=NULL;
//     while(p->next!=NULL){
//         p=p->next;
//     }
//     p->next=et;
// }

void deletion(struct node *p,int index){
    int c=count(head);
    if(index==0){
        int x;
        head = head->next;
        x=p->data;
        free(p);
        p=NULL;
    }
    if(index==c){
        int x;
    while(p->next->next!=NULL){
        p=p->next;
    }
    x=p->next->data;
    p->next=NULL;
    free(p->next);

    }
    if(index>0&&index<c){
        struct node *q;
     q=(struct node*)malloc(sizeof(struct node*));
    q=NULL;
    for(int i=0;i<index-1;i++){
        q=p;
        p=p->next;
    }
    int z=p->next->data;
    q->next=p->next;
    p->next=NULL;
    free(p);

    }
}

void insert(struct node *p,int value,int index){
  int c=count(head);
  if(index==0){
  struct node *temp;
  temp=(struct node*)malloc(sizeof(struct node*));
  temp->data=value;
  temp->next=p;
  head=temp;
  }

  if(index==c){
  struct node *temp;
  temp=(struct node*)malloc(sizeof(struct node*));
  temp->data=value;
  temp->next=NULL;
  while(p->next!=NULL){
     p=p->next;
  }
  p->next=temp;
}
if(index>0&&index<c){
 struct node *temp,*q;
 temp=(struct node*)malloc(sizeof(struct node*));
 temp->data=value;
 temp->next=NULL;
 q=(struct node*)malloc(sizeof(struct node*));
 q=NULL;
 for(int i=0;i<index;i++){
    q=p;
    p=p->next;
 }
 temp->next=q->next;
 q->next=temp;
}
}

void display(struct node *p){
    while(p!=NULL){
printf("%d  ",p->data);
p=p->next;
    }
}

int delete_first(struct node *p){
  int x;
  head = head->next;
  x=p->data;
  free(p);
  p=NULL;
  return x;
}

int delete_last(struct node *p){
    int x;
    while(p->next->next!=NULL){
        // x=p->data;
        // p=NULL;
        // free(p->next);
        p=p->next;
    }
    x=p->next->data;
    p->next=NULL;
    free(p->next);

    return x;
}

void reverse(struct node *p){
  struct node *q;
  q=(struct node*)malloc(sizeof(struct node*));
  q=NULL;
  struct node *r;
  r=(struct node*)malloc(sizeof(struct node*));
  r=NULL;
  while(p!=NULL){
    r=q;
    q=p;
    p=p->next;
    q->next=r;
  }
  head=q;
}

void recursion_reverse(struct node *q,struct node *p){
  if(p!=NULL){
  recursion_reverse(p,p->next);
  p->next=q;}
  else
  head=q;
}

int delete_at_given_index(struct node *p,int index){
    struct node *q;
     q=(struct node*)malloc(sizeof(struct node*));
    q=NULL;
    for(int i=0;i<index-1;i++){
        q=p;
        p=p->next;
    }
    int z=p->next->data;
    q->next=p->next;
    p->next=NULL;
    free(p);
    return z;

}

void remove_duplicate_linked_list(struct node *p){
  struct node *q;
  q=(struct node*)malloc(sizeof(struct node*));
  q=NULL;
  while(p->next!=NULL){
        if(p->data==p->next->data){
            q=p->next->next;
            free(p->next);
            p->next=q;
        }
        else{
            p=p->next;
        }
    }

//   while(p!=NULL&&p->next!=NULL){
//     temp=head;
//   while(temp->next!=NULL){
//     if(p->data==temp->next->data){
//       q = temp->next;
//       temp->next=temp->next->next;
//       free(q);
//     }
//     else
//     temp=temp->next;
//   }
//   p=p->next;
// }
}


void main(){

    int a[]={1,1,2};
    create(a,3);
    //
    // rdisplay(head);
    //  display(head);
    //  reverse(head);
    //  printf("\n");
    //  printf("After reversing : ");
    //  display(head);
    //  printf("\n");
    //  printf("After reversing with recursion : ");
    //  recursion_reverse(NULL,head);
     display(head);
     remove_duplicate_linked_list(head);
    printf("\n");
     display(head);

    //      printf("\n");
    // insert(head,1000,3);
    // display(head);
    // int y = delete_first(head);
    // printf("\n");
    // printf("%d\n",y);
    // display(head);
    //
    // int x = delete_last(head);
    // printf("\n");
    // printf("%d\n",x);
    // display(head);
    //
    //  int z = delete_at_given_index(head,3);
    // printf("\n");
    // printf("%d\n",z);
    //     printf("\n");
    //     deletion(head,0);
    //     deletion(head,0);
    // display(head);
    // // delete_last(head);
    // // delete_last(head);
    // // delete_last(head);
    //     printf("\n");
    //   display(head);
    //     printf("\n");
    //       printf("\n");


    // free(temp);
    free(head);
    head=NULL;

}
// void display(struct node *p){
//     while(p!=NULL){
// printf("%d  ",p->data);
// p=p->next;`  `
//     }
// }
int rdisplay(struct node*p){
    if(p!=NULL){
printf("%d  ",p->data);
return rdisplay(p->next);
    }return 0;
}
// int count(struct node*p){
//     int c=0;
//     while(p!=NULL){
//         c++;
//         p=p->next;
//     }return c;
// }
