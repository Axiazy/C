/*
��ĩ���ԣ�Ӣ���ѧ������� 
���԰��ţ���һ�����壬ÿ����࿼һ��
��ѧ�������翼
��������ܰ��ŵ����� 
*/
#include <stdio.h>
int main()
{
	int math,english,computer,count =0;
	for(math=1;math<=3;math++)
		for(english=math+1;english<=5;english++)
			for(computer =math+1;computer<=5;computer++){
				if(computer!=english&&computer!=4)
				{
					count++;
					printf("math=%d,english=%d,computer=%d\n",math,english,computer);
				} 
			}
			printf("�ſ�������count=%d\n",count);
	return 0;
}
