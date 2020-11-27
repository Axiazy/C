#include <stdio.h>
#define MAX_STR_LEN 65535
int main(){
	char s[MAX_STR_LEN];
	
	printf("按1选择ASCII转字符，按2选择字符转ASCII\n");
	int num,i;
	scanf("%d",&num);
	printf("输入<65535长度的字符\n");
	scanf("%s",s);

	if(num==1){
		for(i=0;i<strlen(s);i++){
			printf("%c的ASCII:%d\t",s[i],s[i]);
		}
	} 
	else if(num==2){
		for(i=0;i<strlen(s);i++){
			printf("%d的ASCII:%c\t",s[i],s[i]);
		}	
	}
}
