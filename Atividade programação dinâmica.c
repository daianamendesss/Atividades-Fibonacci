#include <stdio.h>
long int memo[100];
long int cont=0;
void mostraVetor(int v[], int n){
	int i;
	for(i=0;i<=n;i++)
	  printf("%d |",v[i]);
	
	printf("\n");  
}

//-------------------------------------------------
long int fib(int n){
	cont++;
	if(n==0)
		return 0;
	if(n==1)
		return 1;
	if(memo[n]!=-1)// ja calculou
		return memo[n];//retorna direto
	memo[n]= fib(n-1)+fib(n-2);// calcula e armazena
		return memo[n];
		
}
//-------------------------------------------------
int fibo(int n){
	int r;
	cont++; // qts chamdas recursivas está fazendo 
	if(n==0){
		return 0;
	}
	if(n==1){
		return 1;
	}
	r= fibo(n-1)+fibo(n-2);	
	return r;
}
//--------------------------------------------------
int main(){
	double ini,fim, trec;
	int n,i;
	long long res;
	//printf("Termo:");
	//scanf("%d",&n);
	//inicializar o vetor de momorização ( criar o for)
	for (i=0; i<=40; i++){
		printf("Termo [%d] da sequencia Fibonacci = %d\n ", i, fibo(i));
	}
	fim = clock();
	trec = (fim - ini )/1000;
	printf("Tempo Fibonacci nao memorizado: %.3lf\n\n", trec);
	getch();
	for(i=0; i<=40;i++)
	printf("Termo [%d] da sequencia Fibonacci = %d\n", i, fibo(i));
	fim = clock();
	trec = (fim-ini) / 1000; 
	printf("Termo Fibonacci memorizado: %.3lf\n\n", trec);
	getch();
	return 0;
}

