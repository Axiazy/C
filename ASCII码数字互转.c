#include <stdio.h>
#define MAX_STR_LEN 65535
int main(){
	char s[MAX_STR_LEN];
	
	printf("��1ѡ��ASCIIת�ַ�����2ѡ���ַ�תASCII\n");
	int num,i;
	scanf("%d",&num);
	printf("����<65535���ȵ��ַ�\n");
	scanf("%s",s);

	if(num==1){
		for(i=0;i<strlen(s);i++){
			printf("%c��ASCII:%d\t",s[i],s[i]);
		}
	} 
	else if(num==2){
		for(i=0;i<strlen(s);i++){
			printf("%d��ASCII:%c\t",s[i],s[i]);
		}	
	}
}
