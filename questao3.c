#include <stdio.h>

int  recebenumero();
void ehperfeito(int n);

int main(){
  int n;
  n=recebenumero();
  ehperfeito(n);

}

int  recebenumero(){
    int f;
    printf("informe o numero que deseja calcular a fatorial: ");
    scanf("%d",&f);
    return f;
  }

   void ehperfeito(int n){
   int soma=0;
   for(int i=1; i<n; i++){
    if(n % i==0){
        soma+=i;
    }
    }
    if (soma==n){
    printf("eh perfeito");
    }
    else
    printf("nao eh");
    }
