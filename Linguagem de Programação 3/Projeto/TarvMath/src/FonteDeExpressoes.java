
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.util.ArrayList;

public class FonteDeExpressoes {
    public static int totExp = 0;
    ArrayList<Expressao> lista;

    // Construtor
    public FonteDeExpressoes() {
        LerExpressao();
    }

    private void LerExpressao() {
    	// Variavel para acessar o arquivo
        BufferedReader br = null;
        
        // ArrayList com todas as expressoes
        lista = new ArrayList<Expressao>();

        try {
        	// String que ira percorrer o arquivo
            String s;
            
            // Abrindo o arquivo
            br = new BufferedReader(new FileReader("ordenado.txt"));
            
            // Variavel que guardará cada linha
            String strAux[] = new String[4];

            // Enquanto nao encontrar o fim do arquivo...
            while ((s = br.readLine()) != null) {
            	// Quebrando a linha quando encontrar um TAB
                strAux = s.split("\t");
                
                // Criando uma expressao a partir dessa linha quebrada
                Expressao aux = new Expressao(Integer.parseInt(strAux[0]), strAux[1].charAt(0), strAux[2], Double.parseDouble(strAux[3]));
                
                // Incrementando o total de expressoes
                totExp++;
                
                // Adicionando expressao no array
                lista.add(aux);
            }
        } catch (IOException e) {
            e.printStackTrace();
        } finally {
            try {
                if (br != null) {
                    br.close();
                }
            } catch (IOException ex) {
                ex.printStackTrace();
            }
        }
    }

    public ArrayList<Expressao> GetVet() {
        return lista;
    }
}
