#include <stdio.h>

int fat( int n ){
	int r;
	printf("fat(%d)\n",n); getch();
	// com base
	if(n==0){
		printf("fat(0)=1\n");
		return 1;
	}
	//passo recursivo
	r = n* fat(n-1);
	printf("fat(%d) = %d\n",r, n); getch();
	return r;
}
int main(){
	int valor;
	printf("Valor da base:");
	scanf("%d",&valor);
	printf("FATORIAL:%d", fat(valor));
	return 0;
}
