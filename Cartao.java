public abstract class Cartao 
{
    protected int codP;
    protected int codS;
    protected int dataE;
    protected int dataV;
    protected double limite;

    public Cartao(int codP,int codS,int dataE,int dataV,double limite)
    {
        this.codP=codP;
        this.codS=codS;
        this.dataE=dataE;
        this.dataV=dataV;
        this.limite=limite;
        
    }


}
