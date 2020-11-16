#include <stdio.h>
#include <stdlib.h>
typedef struct student{
	int num;
	int score;
	struct student *link;
}NODE;

NODE *creat(){
	NODE *head,*p1,*p2;
	int n=0;
	p1=p2 =(NODE *)malloc(sizeof(NODE));
	printf("input num and score:\n");
	scanf("%d,%d",&p1->num,&p1->score);
	head = NULL;
	while(p1->num!=0)
	{
		n=n+1;
		if(n==1)head = p1;
		else p2->link = p1;
		p2=p1;
		p1 = (NODE *)malloc(sizeof(NODE));
		scanf("%d,%d",&p1->num,&p1->score);
	}
	p2->link = NULL;
	return(head); 
}

int count(NODE *p){
	int sum=0;
	while(p!=NULL)
	{
		if(p->score>=90)
			sum++;
		p=p->link;
	}
	return(sum);
}

int main(){
	NODE *p;
	p=creat();
	printf("\n the count of 90 =%d\n",count(p));
	return 0;
}
