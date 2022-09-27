 #include <stdio.h>
 
float recebemassa();
int calculatempo( float m);
float calculamassaf(float m);

 int main(){
    float m,m1;
    int ts=0;
    m=recebemassa();
    m1=m;
    ts=calculatempo(m);
    m=calculamassaf(m);

    printf("massa inicial: %f\nmassa final: %f \ntempo em segundo: %d \ntempo em minutos:%d \ntempo em horas: %d",m1, m, ts, ts/60, ts/360);
}

float recebemassa(){
    float m;
     printf("insira a massa do material:");
    scanf("%f", &m);
    return m;
}

int calculatempo( float m){
    int ts=0;
        while(m>0.5){
        m=m-(m/2);
        ts+=50;}
        return ts;
    }
    
 float calculamassaf(float m){
    int ts=0;
        while(m>0.5){
        m=m-(m/2);
        ts+=50;
        }
        return m;
    }