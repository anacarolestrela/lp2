public class ArtCong extends Artlong
{
    private String areaInt;
    public ArtCong(String titulo, String resumo, int numPg,String texto,String areaInt)
    {
        super(titulo, resumo, numPg, texto);
        this.areaInt=areaInt;
        this.dig=1;
    }

}
