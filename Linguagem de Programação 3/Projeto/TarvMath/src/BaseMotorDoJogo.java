
public class BaseMotorDoJogo {

    MotorDoJogo ref;

    public MotorDoJogo getMotorDoJogo(Jogador jog) {
    	// Escolhendo o modo de jogo a partir do usuario
    	if(jog.modoJogo == 1)
    		ref = new ModoRapido();
    	else if(jog.modoJogo == 2)
    		ref = new ModoTreino();
    	else if(jog.modoJogo == 3)
    		ref = new ModoCampanha();
    	else
    		ref = null;

        return ref;
    }
}
