#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int count =0;
char *NAME[100];
struct tx1
{
	char name[10];
	int num;
	char telephone[13];	
}; 

//�½���ϵ��
void  new (struct tx1 friends[]){
	struct tx1 f;
	if(count ==100){
		printf("ͨѶ¼������\n");
		return;
	}
	printf("����������ϵ�˵�����: ");
	scanf("%s",f.name);
	printf("����������ϵ�˵�ѧ��: ");
	scanf("%d",&f.num);
	printf("����������ϵ�˵ĵ绰: ");
	scanf("%s",f.telephone);
	printf("\n");
	friends[count]=f;
	count++;
}

void search_friend (struct tx1 friends[],char *name){
	int i,flag =0;
	if(count ==0)
	{
		printf("ͨѶ¼Ϊ��! \n");
		return;
	}
	for(i=0;i<count;i++){
		if(strcmp(name,friends[i].name)==0){
			flag=1;
			printf("����: %s\t",friends[i].name);
			printf("ѧ��: %d\t",friends[i].num);
			printf("�绰: %s\t\n",friends[i].telephone);
		}
	}
	if(flag<1)
		printf("�޴���ϵ��! \n");
}

//�޸���ϵ�� 
void edit_friend(struct tx1 friends[],char *name){
	int i,j,k,flag =0;
	struct tx1 f;
	for(i=0;i<count;i++){
		if(strcmp(name,friends[i].name)==0){
			flag=1;
			break;
		}
	}
	if(flag==1){
		printf("�������޸ĵ�����\n");
		scanf("%s",f.name);
		printf("�������޸ĺ��ѧ��\n");
		scanf("%d",&f.num);
		printf("�������޸ĺ�ĵ绰\n");
		scanf("%s",f.telephone);
		friends[i]=f;
		NAME[i] = friends[i].name;
		for(i=0;i<count-1;i++){
			k=i;
			for(j=i+1;j<count;i++)
			{
				if(strcmp(NAME[i],NAME[j])>0)
					k=j;
			}
			if(k!=i)
			{
				f = friends[i];
				friends[i] = friends[k];
				friends[k]=f;
			}
		}
		
	}
	else
		printf("�޴���ϵ�ˣ�\n");
}

//��ʾ������ϵ��
void sort_friend(struct tx1 friends[]){
	int i;
	if(count==0)
	{
		printf("ͨѶ¼Ϊ��!\n");
		for(i=0;i<count;i++){
			printf("������%s\t",friends[i].name);
			printf("ѧ�ţ�%d\t",friends[i].num);
			printf("�绰��%s\t\n",friends[i].telephone);
		}
	}
} 

int main(){
	char choice;
	char name[10];
	struct tx1 friends[100];
	do{
		printf("====ͨѶ¼����ѡ��====\n");
		printf(" 1:�½� \n");
		printf(" 2:��ѯ \n");
		printf(" 3:�޸� \n");
		printf(" 4:��ʾ \n");
		printf(" 0:�˳� \n");
		printf("��ѡ�����֣�");
		scanf("%d",&choice);
		switch(choice){
			case 1: new(friends);
			break;
			case 2:
				printf("������Ҫ��ѯ�˵�����: ");
				scanf("%s",name);
				search_friend(friends,name);
				break;
			case 3:
				printf("������Ҫ�޸��˵�����: ");
				scanf("%s",name);
				edit_friend(friends,name);
				break;
			case 4:
				sort_friend(friends);
				break;
		}
		
	}while(choice!=0);
	printf("ллʹ�ã�\n");
	return 0;
} 
