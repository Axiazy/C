/*
期末考试：英语、数学、计算机 
考试安排：周一到周五，每天最多考一门
数学必须最早考
计算机不能安排到周四 
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
			printf("排考方案数count=%d\n",count);
	return 0;
}
