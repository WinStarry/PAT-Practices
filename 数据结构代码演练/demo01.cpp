#include<cstdio>

//��˳���ӡ��1��N��ȫ����������ʹ��forѭ���ķ�ʽ�� 
void printN(int N){
		int i;
		for(i=1; i<=N; i++){
			printf("%d\n", i);
		}
		return;
	}


//˳���ӡ��1��M��ȫ����������ʹ�õݹ�ķ�ʽ��
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

// ������ⷽ����Ч�ʸ��ռ������Ч���йء�

