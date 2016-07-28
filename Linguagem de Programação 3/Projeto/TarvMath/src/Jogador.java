
public class Jogador {

	// Define o motor do jogo
    public int modoJogo;
    // Define o dificultador
    public int escolheDif;
    // Quantidade de questoes que pode errar
    public int qPodeErrar;
    // Resposta
    public double resp;
 
    // Se continua ou nao
    private boolean continua = true;
    // Se o jogo tera fases ou nao
    private boolean jogoComFases;

    // Nivel atual e tipo de operacao
    int nivelAtual;
    char oper;

    // Quantidade de questoes respondidas
    private int qQuestResp = 0;
    // Quantidade de erros
    private int erros = 0;
    // Quantidade de pontos
    private int pontos = 0;

    /** GETs e SETs **/
    
    public int getErros() {
        return erros;
    }

    public void setErros(int erros) {
        this.erros = erros;
    }

    public int getPontos() {
        return pontos;
    }

    public void setPontos(int pontos) {
        this.pontos = pontos;
    }

    public double getResp() {
        return resp;
    }

    public void setResp(double resp) {
        this.resp = resp;
    }

    public int getqQuestResp() {
        return qQuestResp;
    }

    public void setqQuestResp(int qQuestResp) {
        this.qQuestResp = qQuestResp;
    }

    public boolean isContinua() {
        return continua;
    }

    public void setContinua(boolean continua) {
        this.continua = continua;
    }

    public boolean isJogoComFases() {
        return jogoComFases;
    }

    public void setJogoComFases(boolean jogoComFases) {
        this.jogoComFases = jogoComFases;
    }
    
}
