#include<cstdio>
int main(){
	int n, step = 0;
	scanf("%d", &n);//����һ������n
	
	while(n != 1){
		if(n % 2 == 0) n = n / 2;//�����ż�� 
		else n = (3*n + 1) / 2;//��������� 
		step ++;//��������1 
	} 
	
	printf("%d\n", step);
	
	return 0;
}
