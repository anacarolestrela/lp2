#include <stdio.h>
/*- Um comerciante deseja fazer o levantamento do lucro das mercadorias que ele comercializa. 
Para isto mandou criar uma ficha para cada mercadoria com o nome, preço de compra, preço de venda. 
Fazer um algoritmo que :

Determine e escreva quantas mercadorias proporcionam :

a) Lucro < 20 % b) 20% <= Lucro <= 30% c) Lucro > 30%
*/

int main(){

    struct mercadoria{
        char nome[30];
        float precoC,precoV,lucro;

    };
    int x=2;
    struct mercadoria item[x];
    float lucro1=0, lucro2=0,lucro3=0;

 /*   printf("insira a quantidade de itens a serem inseridos:" );
    scanf("%d", &x);*/
     for (int i = 0; i < x; i++)
    {
    printf("\n\ninsira o nome do item: ");
    scanf(" %s", &item[i].nome);
    printf("insira o preco de compra de %s: ", item[i].nome);
    scanf("%f", &item[i].precoC);
    printf("insira o preco de venda de %s: ", item[i].nome);
    scanf("%f", &item[i].precoV);
    item[i].lucro=item[i].precoV-item[i].precoC;
    printf("o lucro sobre a venda de %s eh de %f: ", item[i].nome, item[i].lucro);

    }
         for (int i = 0; i < x; i++){


               if (item[i].precoC*0.3<item[i].lucro){
                lucro3++;

            }else
          
              if (item[i].precoC*0.2<=item[i].lucro && item[i].precoC*0.3 >= item[i].lucro ){
                lucro2++;

            }else 
                 if (item[i].precoC*0.2>item[i].lucro){
                lucro1++;

            }
         }

    printf("numero de produtos com lucro menor que 20/%/ %f  produtos com lucro entre 20 e 30 porcento 2: %f lucro maiopr que 30 porcento: %f", lucro1, lucro2, lucro3);
    }