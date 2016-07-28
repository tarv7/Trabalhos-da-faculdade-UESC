
import java.util.ArrayList;
import java.util.Random;

public class DifNivelTipo implements Dificultador {

    public int nivel;
    public char tipo;

    // Construtor
    DifNivelTipo(int nivel, char tipo) {
        this.nivel = nivel;
        this.tipo = tipo;
    }

    public Expressao getExpressao(ArrayList<Expressao> listExp) {
        Random aleatorio = new Random();
        Expressao exp;

        // Procurando uma expressao que seja igual ao nivel e tipo solicitado
        do {
            exp = listExp.get(aleatorio.nextInt(listExp.size()));
        } while (exp.getNivel() != nivel || exp.getTipo() != tipo);

        return exp;
    }

    public String retornaInfo(Expressao exp, char info) {
    	// Nao retorna nada, pois é muito obvia
        return "";
    }
}
