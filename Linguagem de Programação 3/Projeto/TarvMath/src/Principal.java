
import java.util.ArrayList;
import javax.swing.JOptionPane;

/**
*
* Author: Thales Augusto
* GitHub: github.com/tarv7
* Data: 21/07/2016
* 
*/

public class Principal {
	// Variaveis de controle
    static char sair = 'n';
    static char informacao = 'n';

    // Instancia para pegar do arquivo
    static FonteDeExpressoes expressoes = new FonteDeExpressoes();
    
    // ArrayList com expressoes na memoria
    static ArrayList<Expressao> listExp = expressoes.GetVet();
    
    // Variaiveis para expressao e jogador
    static Expressao exp;
    static Jogador jog;

    // Referencia para o Motor do jogo
    static MotorDoJogo ref;
    
    // Instanciando a Base do motor a partir de sua referencia
    static BaseMotorDoJogo motor = new BaseMotorDoJogo();
	
    // Metodo para escolher o modo de jogo
	public static void EscModo(){
		jog = new Jogador();

        do {
        	jog.modoJogo = Integer.parseInt(JOptionPane.showInputDialog(null, "Escolha um modo de jogo: \n" +
        																  	   "1 - Modo Rapido\n" +
        																  	   "2 - Modo treino\n" +
        																  	   "3 - Modo Campanha", 
        																  	   "TarvMath", 1));
        
        } while (jog.modoJogo < 1 || jog.modoJogo > 3);
        
	}
	
	// Metodo de como se comportar a partir do modo de jogo
	public static void ErrosEFases(){
		if (jog.modoJogo == 2 || jog.modoJogo == 3){
            do{
                jog.qPodeErrar = Integer.parseInt(JOptionPane.showInputDialog(null, "Quantos erros voce podera cometer?", 
                															  "TarvMath", 1));
            }while (jog.qPodeErrar < 0);
        }
        
        if (jog.modoJogo == 2){
            char fase;
            
            do {
                fase = JOptionPane.showInputDialog(null, "Você quer que o jogo tenha fazes?[s/n] ", 
						  						   "TarvMath", 1).charAt(0);
            } while (fase != 's' && fase != 'n');
            
            if (fase == 's')
                jog.setJogoComFases(true);
            else
                jog.setJogoComFases(false);
        }
	}
	
	public static void Saudacoes(){
		JOptionPane.showMessageDialog(null, "Seja bem vindo ao Jogo das Operações!" + 
											"\n\nAntes de começarmos a brincar irei te dar uma breve explicação", 
											"TarvMath", 1);
	}
	
	// Explicando um pouco do programa
	public static void Explicacoes(){
        JOptionPane.showMessageDialog(null, "O modo rapido aceita ate 20 questoes, acima disso o valor eh definido como 20" +
        									"\nO modo treino aceita quantas questoes o usuario digitar" +
        									"\nValores negativos para quantidade de quetões sao considerados como 0 questoes", 
        									"TarvMath", 1);
	}
	
	// Configurando a partir do modo
	public static void ConfRapidoTreino(){
		// Caso seja o modo rapido ou treino
		if (jog.modoJogo != 3) {
            do{
                jog.escolheDif = Integer.parseInt(JOptionPane.showInputDialog(null, "Escolha um dificultador: \n" +
						  															"1 - Aleatorio\n" +
						  															"2 - Nivel\n" +
						  															"3 - Tipo\n" +
						  															"4 - Nivel e Tipo", 
						  															"TarvMath", 1));
            }while (jog.escolheDif < 1 || jog.escolheDif > 4);

            if(jog.escolheDif == 2 || jog.escolheDif == 4){
                do{
                	jog.nivelAtual = Integer.parseInt(JOptionPane.showInputDialog(null, "Digite o nível das questões[1-5]: ", 
							  													  "TarvMath", 1));
            	}while (jog.nivelAtual < 0 || jog.nivelAtual > 5);
            }

            if (jog.escolheDif == 3 || jog.escolheDif == 4) {
                do {
                    jog.oper = JOptionPane.showInputDialog(null, "Digite o tipo de operacao das questões[a/s/m/d]: ", 
	  						   							   "TarvMath", 1).charAt(0);
                } while (jog.oper!= 's' && jog.oper!= 'd' && jog.oper!= 'a' && jog.oper!= 'm');
            }

            ref.setqQuest(Integer.parseInt(JOptionPane.showInputDialog(null, "Digite a quantidade de questões: ", 
					  												   "TarvMath", 1)));
        }else{ // Caso seja o modo campanha
            jog.escolheDif = 2;
            jog.nivelAtual = 1;

            JOptionPane.showMessageDialog(null, "Modo campanha sao 5 niveis de 10 questoes aleatorias cada, totalizando 50 questoes", 
        										"TarvMath", 1);
            ref.setqQuest(50);
        }
	}
	
	// Apresentar a expressao para o usuario
	public static void PergExp(){
		exp = ref.solicitarDif(jog).getExpressao(listExp);
        
        jog.setResp(Double.parseDouble(JOptionPane.showInputDialog(null, "Pontos: " + jog.getPontos() + "\n\n" + 
        																 exp.exibirExpressao(), 
        																 "TarvMath", 1)));

        if (ref.acertou(exp, jog))
        	JOptionPane.showMessageDialog(null, "O jogador acertou", "TarvMath", 1);
        else
        	JOptionPane.showMessageDialog(null, "O jogador errou", "TarvMath", 1);
	}
	
	// Mostra o resultado final
	public static void Resultado(){
        double calculo = ((jog.getqQuestResp() - jog.getErros()) / (double)ref.getqQuest()) * 100.0;

        JOptionPane.showMessageDialog(null, "Você respondeu " + jog.getqQuestResp() + " questões de " + ref.getqQuest() +
        									"\nVocê errou " + jog.getErros() + " vezes." +
        									"\nVocê conseguiu " + jog.getPontos() + " pontos, seu aproveitamento foi de " + calculo + "%",
        									"TarvMath", 1);
	}

    public static void main(String[] args) {
        do {
        	Saudacoes();
        	Explicacoes();
            EscModo();
            ref = motor.getMotorDoJogo(jog);
            ErrosEFases();
            ConfRapidoTreino();

            // Mostrando as expressoes
    		while (!ref.jogoAcabou(jog))
            	PergExp();
            
            Resultado();

            // Verificando se quer sair do programa
            do {
                sair = JOptionPane.showInputDialog(null, "Deseja sair do jogo?[s/n] ", 
						   								 "TarvMath", 1).charAt(0);
            } while (sair != 's' && sair != 'n');
            
        } while (sair == 'n');

        // Mostrando os creditos
        JOptionPane.showMessageDialog(null, "********** Tarv Math **********" +
											"\nAutor: Thales Augusto" +
											"\nGitHub: github.com/tarv7" +
											"\nObrigado por jogar! Volte sempre ;)",
											"TarvMath", 1);
    }
}
