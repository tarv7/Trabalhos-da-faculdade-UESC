
import java.util.ArrayList;
import java.util.Random;

public class DifTipo implements Dificultador {

    public char tipo;

    // Construtor
    public DifTipo(char tipo) {
        this.tipo = tipo;
    }

    public Expressao getExpressao(ArrayList<Expressao> listExp) {
        Random aleatorio = new Random();
        Expressao exp;

        // Procurando uma expressao que seja igual ao tipo solicitado
        do {
            exp = listExp.get(aleatorio.nextInt(listExp.size()));
        } while (exp.getTipo() != tipo);

        return exp;
    }

    public String retornaInfo(Expressao exp, char info) {
    	// Retorna as informaçoes de determinada expressao
    	
        switch (info) {
            case 's':
                return "Você esta a responder uma questão do nivel " + exp.getNivel();
            default:
                return "";
        }
    }

}
