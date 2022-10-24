public class CartaoOuro extends Cartao
{
    public int pontos;
    
    public CartaoOuro(int codP,int codS,int dataE,int dataV,double limite)
    {
        super(codP, codS, dataE, dataV, limite);
        this.pontos=1;
    }
    
    public void sampleMethod(int y)
    {
        
    }
}
