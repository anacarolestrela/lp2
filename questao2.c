#include <stdio.h>

int  recebenumero();
int calculafatoral(int x);

 int main(){
    int f, x;
    int fat;

   f= recebenumero();
    x=f;
    fat=calculafatoral(x);

    printf("fatorial de %d igual a: %d",f,fat);

 }

   int  recebenumero(){
    int f;
    printf("informe o numero que deseja calcular a fatorial: ");
    scanf("%d",&f);
    return f;
  }

int calculafatoral(int x){
    int fat=1;
while (x!=0)
    {
        fat=fat*x;
        x--;}
    return fat;
}