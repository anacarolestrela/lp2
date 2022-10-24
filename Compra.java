public class Compra extends Cartao
{
    private double valorCompra;

    public Compra(int codP,int codS,int dataE,int dataV,double limite,double valorCompra)
    {
        super(codP, codS, dataE, dataV, limite);
        this.valorCompra=valorCompra;
    }

    public double efetuaCompra(double valorCompra)
    {
        this.limite=this.limite-valorCompra;
        return  this.limite;
    }
}
