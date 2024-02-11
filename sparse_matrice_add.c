#include<stdio.h>
#include<stdlib.h>
struct element{
  int i;
  int j;
  int x;
}e;
struct sparse{
  int m;
  int n;
  int num;
  struct element *e;
}s,s1;

int sum(struct sparse *s,struct sparse *s1){
  int i=0,j=0,k=0;
  if(s.m!=s1.m||s.m!=s1.n){
    return 0;
  }
  s2=(struct element*)malloc(s->num*sizeof(struct element));
  s2->e=(struct element*)malloc(s->num*sizeof(struct element));
  while(i<s->num&&s1->num){
    if(s->e[i].i<s1->[j].i)
    s2->e[k++]=s->e[i++];
    else if(s->e[i].j>s1->e[j].j)
    s2->e[i++]=s1->e[j++];
    else
    s2->e[k++]=s1->e[k++].x+s1;
  }
  return 1;
}

void create(struct sparse *s,struct sparse *s1){
  printf("Enter number of rows of matrice 1 : ");
  scanf("%d",&s->m);
  printf("Enter the number of columns of matrice 1 : ");
  scanf("%d",&s->n);
  printf("Enter how many non-zero elemnt are present in a matrice 1 : ");
  scanf("%d",&s->num);


  printf("Enter number of rows of matrice 2 : ");
  scanf("%d",&s1->m);
  printf("Enter the number of columns of matrice 2 : ");
  scanf("%d",&s1->n);
  printf("Enter how many non-zero elemnt are present in a matrice 2 : ");
  scanf("%d",&s1->num);



  s->e=(struct element*)malloc(s->num*sizeof(struct element));
  for(int i=0;i<s->num;i++){
    scanf("%d %d %d",&s->e[i].i,&s->e[i].j,&s->e[i].x);
  }


  s1->e=(struct element*)malloc(s1->num*sizeof(struct element));
  for(int i=0;i<s1->num;i++){
    scanf("%d %d %d",&s1->e[i].i,&s1->e[i].j,&s1->e[i].x);
  }



}
void display(struct sparse *s,struct sparse *s1){
  printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");
  int i,j,k=0;
  for(i=0;i<s->m;i++){
    for(j=0;j<s->n;j++){
      if(i==s->e[k].i&&j==s->e[k].j){
        printf("%d",s->e[k++].x);
      }
      else
      printf("0");
    }
    printf("\n");
  }
printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");printf("\n");
k=0;
  for(i=0;i<s1->m;i++){
    for(j=0;j<s1->n;j++){
      if(i==s1->e[k].i&&j==s1->e[k].j){
        printf("%d",s1->e[k++].x);
      }
      else
      printf("0");
    }
    printf("\n");
  }
}
void main(){
  create(&s,&s1);
  display(&s,&s1);
  sum(&s,&s1);
  free(s.e);
  free(s1.e);

}
