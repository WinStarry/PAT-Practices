#include<cstdio>
#include<ctime>

/*
clock(): ��׽�ӳ���ʼ���е�clock()�������������ĵ�ʱ�䡣���ʱ�䵥λ��clock tick,����ʱ�Ӵ�㡱 
����CLK_TCK:����ʱ��ÿ�����ߵ�ʱ�Ӵ���� 
*/ 
clock_t start, stop;
/* clock_t��clock()�������صı�������*/
double duration;
/* ��¼�����Ժ������е�ʱ�䣬����Ϊ��λ*/

int main(){/* ���ڲ��Է�Χ�ڵ�׼������д��clock()����֮ǰ*/
	start = clock();
	MyFunction();//Ҫ���ԵĹ��ܺ��� 
	stop = clock();
	duration = ((double)(stop - start))/CLK_TCK;
	
	/* �������ڲ��Է�Χ�Ĵ���д�ں��棬�������duration��ֵ*/ 
	return 0;
} 
