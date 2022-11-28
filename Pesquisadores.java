public class Pesquisadores
{
    private String nome;
    private String cpf;
    private String email;
    public int numArt;

    public Pesquisadores( String nome,String cpf,String email)
    {
        this.nome=nome;
       this.cpf=cpf;
       this.email=email;
    }

    public int getNumArt(){
    return numArt;
    }
}
