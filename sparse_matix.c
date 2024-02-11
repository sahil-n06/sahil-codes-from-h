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
}s;
void create(struct sparse *s){
  printf("Enter number of rows : ");
  scanf("%d",&s->m);
  printf("Enter the number of columns : ");
  scanf("%d",&s->n);
  printf("Enter how many non-zero elemnt are present in a matrice : ");
  scanf("%d",&s->num);
  s->e=(struct element*)malloc(s->num*sizeof(struct element));
  for(int i=0;i<s->num;i++){
    scanf("%d %d %d",&s->e[i].i,&s->e[i].j,&s->e[i].x);
  }
}
void display(struct sparse *s){
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
}
void main(){
  create(&s);
  display(&s);
  free(s.e);

}
