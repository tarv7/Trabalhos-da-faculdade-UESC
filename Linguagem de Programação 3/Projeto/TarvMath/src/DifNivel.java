
import java.util.ArrayList;
import java.util.Random;

public class DifNivel implements Dificultador {
    public int nivel;

    // Construtor
    public DifNivel(int nivel) {
        this.nivel = nivel;
    }

    public Expressao getExpressao(ArrayList<Expressao> listExp) {
        Random aleatorio = new Random();
        Expressao exp;

        // Procurando uma expressao que seja igual ao nivel solicitado
        do {
            exp = listExp.get(aleatorio.nextInt(listExp.size()));
        } while (exp.getNivel() != nivel);

        return exp;
    }

    public String retornaInfo(Expressao exp, char info) {
    	// Retorna as informaçoes de determinada expressao
    	
        switch (info) {
            case 's':
                return "Tipo: " + exp.getTipo();
            default:
                return "";
        }
    }

}
