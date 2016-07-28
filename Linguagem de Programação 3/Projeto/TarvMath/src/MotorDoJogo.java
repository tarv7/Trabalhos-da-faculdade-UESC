
public interface MotorDoJogo {

    public Dificultador solicitarDif(Jogador jog);

    public boolean jogoAcabou(Jogador jog);

    public boolean acertou(Expressao exp, Jogador jog);

    public boolean jogoDeFases(Jogador jog);

    public boolean passarFase(Jogador jog);

    public int getqQuest();

    public void setqQuest(int qQuest);
}
