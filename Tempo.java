
public class Tempo
{
    // variáveis de instância - substitua o exemplo abaixo pelo seu próprio
    private int hora;
    private int minuto;
    private int segundo;
    private int s;
    
    public Tempo(int hora, int minuto, int segundo)
    {
        this.hora=hora;
        this.minuto=minuto;
        this.segundo=segundo;
       
    }


    public int convertSeg()
    {   
        s=(this.hora*3600)+(this.minuto*60)+this.segundo;
        return s;
        
    }
    
        public int duraçao( Tempo t2,Tempo t1)
    {   
        duracao= TempoconvertSeg(t2) -this.t1;
        
;    }
}
