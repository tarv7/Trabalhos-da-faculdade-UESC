
import java.util.ArrayList;
import java.util.Random;

public class DifAleatorio implements Dificultador {

    public Expressao getExpressao(ArrayList<Expressao> listExp){
        Random aleatorio = new Random();
        
        // Retornando uma expressao aleatoria
        return listExp.get(aleatorio.nextInt(listExp.size()));
    }

    public String retornaInfo(Expressao exp, char info) {
    	// Retorna as informaçoes de determinada expressao
    	
        switch (info) {
            case 's':
                return "Nivel: " + exp.getNivel() + " e operação: " + exp.getTipo();
            default:
                return "";
        }
    }

}
