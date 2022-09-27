#include <stdio.h>
float div=0;
float recebevalor( int cont);
float condvalor(float v);
float calculamedia(float v1, float v2, float v3);
  
int main(){
    float v1,v2,v3,media;
    int cont=1;
    v1= recebevalor(cont);
    cont++;
    v2= recebevalor(cont);
    cont++;
    v3 = recebevalor(cont);

    v1=condvalor(v1);
    v2=condvalor(v2);
    v3=condvalor(v3);


    media=calculamedia(v1, v2, v3);

    printf("\n sua media eh: %f", media);
}
//receber os valores
  float recebevalor( int cont){
    float v=0;
    
     do{ printf("insira o valor %d obs:o valor deve ser maior ou igual a 0 e menor ou igual a 10: ",cont);
        scanf("%f", &v);}
        while (v>10 ||v<0);
    
        return v;
    }

//multiplicar o valor pelo peso e alterar o div
float condvalor(float v){

    if (v> 6){
    v=(v*5);
    div=(div+5);}
    else{
    v=(v*2.5);
    div=(div+2.5);}
    return v;
}

// calcula media
 float calculamedia(float v1, float v2, float v3){
    float media;
    media =v1+v2+v3;
    media=media/div;
    return media;
}