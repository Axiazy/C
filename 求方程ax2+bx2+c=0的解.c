#include <stdio.h>
#include <Math.h>
int main(){
	double a,b,c,disc,x1,x2,realpart,imagpart;
	scanf("%lf,%lf,%lf",&a,&b,&c);
	disc = b*b - 4*a*c;
	if(fabs(disc)<=1e-6)//1e-6����10�ĸ�6�η��� Math.abs(x)<1e-6��ʵ�൱��x==0
		printf("has two equal roots:%8.4lf\n",-b/(2*a));//����ܿ������8λ������ʱ��ǰ�油�ո񣻹̶����4λС����С������4λʱ���油0������4λʱ�������롣
	else if(disc>1e-6)
	{
		x1 = (-b+sqrt(disc))/(2*a);
		x2 = (-b-sqrt(disc))/(2*a); 
		printf("has distrinct real roots:%8.4lf and %8.4lf\n",x1,x2);
	}
	else
	{
		realpart = -b/(2*a);
		imagpart = sqrt(-disc)/(2*a);
		printf("has complex roots:\n");
		printf("%8.4lf + %8.4lf i \n",realpart,imagpart); 
		printf("%8.4lf - %8.4lf i \n",realpart,imagpart);
	}
	return 0;
	
	/*1e-6(Ҳ����0.000001)����baiepslon����������������������duΪ������zhi������޷��жϵ��������ͨ����һ���ǳ�С�����֣������СҪ�����������

����˵��Ϊ��������ʮ���ƾ���������Ҫ��1/3+1/3+1/3==1������ѧ��˵���϶���ȣ���������Ϊ�������⣬�Ⱥ�����������0.3333333+0.3333333+0.3333333=0.9999999��

���������ұ���1.0000000����ô���ֱ����==������false������ϣ������������ȡ���ô��Ҫ�������ȡ����ֵС��epslon�İ취��*/
	
	
} 
