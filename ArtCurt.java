import java.util.ArrayList;
public class ArtCurt extends Artigo
{
    private String instEnsino; 
    public ArtCurt(String titulo, String resumo,String instEnsino)
    {   super(titulo, resumo);  
        this.instEnsino=instEnsino;
        this.numPg=4;
        this.dig=1;
        
    }
}
