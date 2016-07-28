
public class ModoCampanha implements MotorDoJogo {
	// Quantidade de questoes
    private int qQuest;
    
    // Referncia a um dificultador e instanciando ele
    Dificultador ref;
    BaseDificultador dif = new BaseDificultador();

    // Solicita um dificultador
    public Dificultador solicitarDif(Jogador jog) {
        this.ref = dif.getDificultador(jog);
        return ref;
    }

    public boolean jogoDeFases(Jogador jog) {
        return true;
    }

    public boolean jogoAcabou(Jogador jog) {
        if (jog.getErros() > jog.qPodeErrar)
            return true;
        return false;
    }

    public boolean acertou(Expressao exp, Jogador jog) {
        jog.setqQuestResp(jog.getqQuestResp() + 1);
        
        if(exp.getResposta() != jog.getResp()){
            jog.setErros(jog.getErros() + 1);
            return false;
        }else{
            jog.setPontos(jog.getPontos() + 10);
            return true;
        }
    }

    public boolean passarFase(Jogador jog) {
        if(!jogoAcabou(jog))
        	jog.nivelAtual += 1;

        if(jog.nivelAtual < 6)
        	return true;
        else
        	return false;
    }

    public int getqQuest() {
        return qQuest;
    }

    public void setqQuest(int qQuest) {
        this.qQuest = qQuest;
    }
}
