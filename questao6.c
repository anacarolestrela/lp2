#include <stdio.h>
notas=0;

int recebevalor();

int testa100(int s);
int testa50(int s);
int testa20(int s);
int testa10(int s);
int testa5(int s);
int testa2(int s);
int testa1(int s);

int main(){
 int s,s1;

s=recebevalor();
s1=s;
s=testa100(s);
s=testa50(s);
s=testa20(s);
s=testa10(s);
s=testa5(s);
s=testa2(s);
s=testa1(s);

    printf("valor de saque desejado %d notas necessarias para saque:%d",s1,notas);

}

int recebevalor(){
  int s;  
    printf("insira o valor de saque desejado: ");
    scanf("%d",&s);
    return s;}

int testa100(int s){
     while (s>=100)
    {
    s=s-100;
    notas++;
    }
    return s;}
int testa50(int s){
     while (s>=50)
    {
    s=s-50;
    notas++;
    }
    return s;}
int testa20(int s){
     while (s>=20)
    {
    s=s-20;
    notas++;
    }
    return s;}
int testa10(int s){
     while (s>=10)
    {
    s=s-10;
    notas++;
    }
    return s;}
int testa5(int s){
     while (s>=5)
    {
    s=s-5;
    notas++;
    }
    return s;}
int testa2(int s){
     while (s>=2)
    {
    s=s-2;
    notas++;
    }
    return s;}
int testa1(int s){
     while (s>=1)
    {
    s=s-1;
    notas++;
    }
    return s;
}

