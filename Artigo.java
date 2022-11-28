import java.util.ArrayList;
public abstract class Artigo 
{
    // variáveis de instância - substitua o exemplo abaixo pelo seu próprio
    protected String titulo;
    protected ArrayList<Pesquisadores> listaPesquisadores;
    protected String resumo;
    protected int numPg;
    protected int dig;
    protected double valSub;

    public Artigo(String titulo, String resumo)
    {
        this.titulo=titulo;
        this.resumo=resumo;
        this.listaPesquisadores = new ArrayList<Pesquisadores>();
        }
    

    double getSub(){
    valSub=0;
    valSub=numPg*10;
    if(dig==2){
        valSub=numPg*10;
        valSub=valSub+(valSub*0.15);
      }
    return valSub;
    }
    
    public void addPesquisadores(Pesquisadores a)
    {
        this.listaPesquisadores.add(a);
        a.numArt=a.numArt+1;
    }
}
