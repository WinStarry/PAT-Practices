#include<cstdio>
int main(){
	int n, step = 0;
	scanf("%d", &n);//输入一个整数n
	
	while(n != 1){
		if(n % 2 == 0) n = n / 2;//如果是偶数时 
		else n = (3*n + 1) / 2;//如果是奇数时 
		step ++;//计数器加1 
	} 
	
	printf("%d\n", step);
	
	return 0;
}
