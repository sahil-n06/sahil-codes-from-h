#include <stdio.h>
#include <stdlib.h>
struct stack
{int size;
int top;
int * arr;
};

void create(struct stack *st){
printf("Enter the size of stack : ");
scanf("%d",&st->size);
st->top=-1;
st->arr=(int *)malloc(sizeof(int)*st->size);
}
void display(struct stack *st){
  for(int i=st->top;i>=0;i--){
    printf("%d\n",st->arr[i]);
  }
}
void push( struct stack * st,int data){
  if(st->top==st->size-1){
    printf("stack overflow");
  }
  else{
    st->top++;
    st->arr[st->top]=data;
  }
}

void reverse(struct stack *st){
  int move;
  int temp;
  move=st->top;
  int q;
  q=move-1;
  if(st->top==-1||st->size==0){
       return ;
   }
  for(int i=0;i<st->size/2-1;i++){
    for(int j=0;j<(st->size-1-i)&&(q!=0||move!=0);j++){
      temp=st->arr[move];
      st->arr[move]=st->arr[q];
      st->arr[q]=temp;
      move=q;
      q=move-1;
    }
    move=st->top-i;
  }
}

int pop(struct stack *st){
  int val=-1;
  if(st->top==-1){
    printf("stack underflow");
  }
  else{
    val=st->arr[st->top];
  }
  return val;
}
void peek(struct stack *st){
  if(st->top==-1){
    printf("stack underflow");
  }
  else{
    printf("%d\n",st->arr[st->top]);
  }
}
int size(struct stack *st){
return st->top+1;
}
int main(){
    struct stack st1;
    struct stack st2;
    int arr[]={1,2,3,4,5,6,7,8};
    for(int i=0;i<8;i++){
      if(i%2==0)
      push(&st2,arr[i]);
      else
      push(&st1,arr[i]);
    }
    display(&st1);
    printf("\n");
    display(&st2);
  return 0;
}
