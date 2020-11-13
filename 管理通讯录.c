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

//新建联系人
void  new (struct tx1 friends[]){
	struct tx1 f;
	if(count ==100){
		printf("通讯录已满！\n");
		return;
	}
	printf("请输入新联系人的姓名: ");
	scanf("%s",f.name);
	printf("请输入新联系人的学号: ");
	scanf("%d",&f.num);
	printf("请输入新联系人的电话: ");
	scanf("%s",f.telephone);
	printf("\n");
	friends[count]=f;
	count++;
}

void search_friend (struct tx1 friends[],char *name){
	int i,flag =0;
	if(count ==0)
	{
		printf("通讯录为空! \n");
		return;
	}
	for(i=0;i<count;i++){
		if(strcmp(name,friends[i].name)==0){
			flag=1;
			printf("姓名: %s\t",friends[i].name);
			printf("学号: %d\t",friends[i].num);
			printf("电话: %s\t\n",friends[i].telephone);
		}
	}
	if(flag<1)
		printf("无此联系人! \n");
}

//修改联系人 
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
		printf("请输入修改的名字\n");
		scanf("%s",f.name);
		printf("请输入修改后的学号\n");
		scanf("%d",&f.num);
		printf("请输入修改后的电话\n");
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
		printf("无此联系人！\n");
}

//显示所有联系人
void sort_friend(struct tx1 friends[]){
	int i;
	if(count==0)
	{
		printf("通讯录为空!\n");
		for(i=0;i<count;i++){
			printf("姓名：%s\t",friends[i].name);
			printf("学号：%d\t",friends[i].num);
			printf("电话：%s\t\n",friends[i].telephone);
		}
	}
} 

int main(){
	char choice;
	char name[10];
	struct tx1 friends[100];
	do{
		printf("====通讯录功能选项====\n");
		printf(" 1:新建 \n");
		printf(" 2:查询 \n");
		printf(" 3:修改 \n");
		printf(" 4:显示 \n");
		printf(" 0:退出 \n");
		printf("请选择数字：");
		scanf("%d",&choice);
		switch(choice){
			case 1: new(friends);
			break;
			case 2:
				printf("请输入要查询人的姓名: ");
				scanf("%s",name);
				search_friend(friends,name);
				break;
			case 3:
				printf("请输入要修改人的姓名: ");
				scanf("%s",name);
				edit_friend(friends,name);
				break;
			case 4:
				sort_friend(friends);
				break;
		}
		
	}while(choice!=0);
	printf("谢谢使用！\n");
	return 0;
} 
