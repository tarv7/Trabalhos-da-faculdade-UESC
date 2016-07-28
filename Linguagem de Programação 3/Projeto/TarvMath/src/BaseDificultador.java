
public class BaseDificultador {

    Dificultador ref;

    public Dificultador getDificultador(Jogador jog) {
    	// Escolhendo o dificultador a partir do usuario
        switch (jog.escolheDif) {
            case 1:
                ref = new DifAleatorio();
                break;
            case 2:
                ref = new DifNivel(jog.nivelAtual);
                break;
            case 3:
                ref = new DifTipo(jog.oper);
                break;
            case 4:
                ref = new DifNivelTipo(jog.nivelAtual, jog.oper);
                break;
            default:
                return null;
        }
        return ref;
    }
}
