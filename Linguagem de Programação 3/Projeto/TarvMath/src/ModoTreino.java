
public class ModoTreino implements MotorDoJogo {

    private int qQuest;
    Dificultador ref;
    BaseDificultador dif = new BaseDificultador();

    public Dificultador solicitarDif(Jogador jog) {//igual pra td mundo, fazer super clase
        this.ref = dif.getDificultador(jog);
        return ref;
    }

    public boolean jogoDeFases(Jogador jog) { //jogador escolhe se quer fase ou nao
        return jog.isJogoComFases();
    }

    public boolean jogoAcabou(Jogador jog) { //jogador escolhe a qtd de erros q pode cometer, se ele fizer tudo acabou
        if (jog.getErros() > jog.qPodeErrar)
            return true;
        if (jog.getqQuestResp() >= getqQuest())
            return true;
        return (!jog.isContinua()); //ele escolhe se quer acabar
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

    public boolean passarFase(Jogador jog) { //ele decide se quer passar de fase ou nao a cada 1/5 das questoes
        if (jog.getqQuestResp() >= qQuest / 5) {
            if (jog.nivelAtual < 5) {
                return jog.isJogoComFases();
            }
        }
        return false;
    }

    public int getqQuest() {
        return qQuest;
    }
    
    public void setqQuest(int qQuest) { //faz quantas quiser
        if (qQuest > 0) {
            this.qQuest = qQuest;
        } else {
            this.qQuest = 0;
        }
    }
}
