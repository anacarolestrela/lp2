#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
char gab[10];
char resp[10];
int freq[10]={0,0,0,0,0,0,0,0,0,0};
int nota=0;
int idaluno;
int aprovados=0;
int mFreq=0;
for (int i = 0; i < 10; i++)
{
printf("a alternativa correta da questao %d gabarito eh:",i+1);
scanf(" %c",&gab[i]);
}

 printf("insira id do aluno");
scanf("%d",&idaluno);
if(idaluno!=9999){
printf("\nrespostas do aluno %d", idaluno);

for (int i = 0; i < 10; i++)
{
printf("\n a alternativa %d no gabarito do aluno eh:",i+1);
scanf(" %c",&resp[i]);
}
for (int i = 0; i < 10; i++)
{
 if (gab[i]==resp[i]){
   nota=nota+1;
}}
 printf("%d",nota);
 if (nota>=6){
 aprovados=aprovados+1;}
}
freq[nota-1]=freq[nota-1]+1;

for (int i = 0; i < 10; i++){
    if (mFreq<freq[i])
    mFreq=i;}

printf("\na nota do aluno %d eh %d\n", idaluno,nota);
printf("a nota de maior frequencia foi %d", mFreq);


}