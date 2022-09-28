
/**
número do telefone que a originou, o nome da localidade de origem,
o número e o local de destino da ligação, o valor total da ligação,
 o momento de início e o momento de término da ligação
 */
public class Ligacao
{
    // variáveis de instância - substitua o exemplo abaixo pelo seu próprio
    private int norigem;
    private String nomeL;
    private int ndestino;
    private String destino;
    private float valor;
    private Tempo t1;
    private Tempo t2;
    private Tempo t;
    private int numero;



    public Ligacao(Tempo t1,String nomeL,int norigem, int ndestino)
    {
        this.t1=t1;
        this.nomeL=nomeL;
        this.norigem=norigem;
        this.ndestino=ndestino;
        this.valor=1;
        
    }

   
    public float calculaValor()
    { 
        this.t=t2-t1;
        if (t>1)
        this.valor=t*1;
        return valor;
        
    }

    public void origemdestino(int numero)
    { this.numero=numero;
        if (numero==norigem){
            System.out.println("eh origem");
        }
        else
            System.out.println("não eh origem");
        
    }
}
