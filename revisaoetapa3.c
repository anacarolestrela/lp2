#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define TAM_Q 10

int main(){
 char gab[10];
 int freq[10]={0,0,0,0,0,0,0,0,0,0};
int aprovados=0;
int mFreq=0;

  struct dados
 {
    int idaluno;
    char resp[10];
    int nota
 };

  struct dados alunos[2];
//pega gabarito
 for (int i = 0; i < 10; i++)
 {
 printf("a alternativa correta da questao %d gabarito eh:",i+1);
 scanf(" %c",&gab[i]);
 }


for (int i = 0; i < 2; i++)
{
alunos[i].nota=0;

 printf("\n\ninsira o id do aluno: ");
 scanf("%d", &alunos[i].idaluno);
 alunos[i].nota=0;
 printf("insira as respostas do aluno %d: ", alunos[i].idaluno);
 for (int i = 0; i < 10; i++)
 {
 printf("\n a alternativa %d no gabarito do aluno eh:",i+1);
 scanf(" %c",&alunos[i].resp);
 }
  for (int k = 0; k < 10; k++)
  {
  if (gab[k]==alunos[k].resp){
   ++alunos[k].nota;
  }}
 printf("nota do aluno%d",alunos[i].nota);
 if (alunos[i].nota>=6){
 aprovados=aprovados+1;}

freq[alunos[i].nota-1]=freq[alunos[i].nota-1]+1;
for (int i = 0; i < 10; i++){
    if (mFreq<freq[i])
    mFreq=i;}

printf("\na nota do aluno %d eh %d\n", alunos[i].idaluno, alunos[i].nota);
printf("a nota de maior frequencia foi %d", mFreq);


}
}
