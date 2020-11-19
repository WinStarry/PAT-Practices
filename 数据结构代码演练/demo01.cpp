#include<cstdio>

//按顺序打印从1到N的全部正整数（使用for循环的方式） 
void printN(int N){
		int i;
		for(i=1; i<=N; i++){
			printf("%d\n", i);
		}
		return;
	}


//顺序打印从1到M的全部正整数（使用递归的方式）
void printM(int M){
	if(M){
	 printM(M - 1);
	 printf("%d\n", M);
    }
	return;
}	

int main(){	

	printN(5);
	
	return 0;
}

// 解决问题方法的效率跟空间的利用效率有关。

