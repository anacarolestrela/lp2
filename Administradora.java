import java.util.ArrayList;
public class Administradora
{
    protected String bandeira;
    protected ArrayList<Clientes> lCliente;
    public Administradora(String bandeira, ArrayList clientes)
    {
        this.bandeira=bandeira;
        this.lCliente = new ArrayList<Clientes>();
       
    }

    /**
     * Um exemplo de um método - substitua este comentário pelo seu próprio
     * 
     * @param  y   um exemplo de um parâmetro de método
     * @return     a soma de x e y 
     */
   public void adicionarLigacaoArray(Clientes cliente)
    {
        this.lCliente.add(cliente);
    }
}
