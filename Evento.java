import java.util.ArrayList;
public class Evento 
{
    private String nome;
    private String periodo;
    private Data submissao;
    protected ArrayList<Artigo> listaArtigos;
    protected double arrecTotal;
    
    public Evento(String nome,String periodo,Data submissao)
    {
       this.nome=nome;
       this.periodo=periodo;
       this.submissao=submissao;
       this.listaArtigos = new ArrayList<Artigo>();
    }
    
    public void addArtigo(Artigo a)
    {
        this.listaArtigos.add(a);
        this.arrecTotal=arrecTotal+a.getSub();
    }
    
    public double getArrecTotal(){
    return arrecTotal;
    }
}
