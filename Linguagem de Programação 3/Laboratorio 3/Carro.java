
public class Carro {
	public String acessorio;
	public int ar, vidro, direcao, teto, roda, sensor;
	public static int arT, vidroT, direcaoT, tetoT, rodaT, sensorT;

	public void instalaOpcional(String novoAcessorio){
		if(novoAcessorio.equals("ar_condicionado") && this.ar == 0){
			this.ar++;
		}else if(novoAcessorio.equals("vidro_eletrico") && this.vidro == 0){
			this.vidro++;
		}else if(novoAcessorio.equals("direcao_hidraulica") && this.direcao == 0){
			this.direcao++;
		}else if(novoAcessorio.equals("teto_solar") && this.teto == 0){
			this.teto++;
		}else if(novoAcessorio.equals("roda_liga") && this.roda == 0){
			this.roda++;
		}else if(novoAcessorio.equals("sensor_estacionamento") && this.sensor == 0){
			this.sensor++;
		}else{
			System.out.println("Acessorio " + novoAcessorio + " invalido!");
			return;
		}
		
		contabilizaAcessorios(novoAcessorio);
	}
	
	public int getValor(){
		return 29000 + (this.ar * 1500) + (this.vidro * 600) + (this.direcao * 1150)
				 + (this.teto * 4000) + (this.roda * 2850) + (this.sensor * 300);
	}
	
	private static void contabilizaAcessorios(String novoAcessorio){
		if(novoAcessorio.equals("ar_condicionado")){
			arT++;
		}else if(novoAcessorio.equals("vidro_eletrico")){
			vidroT++;
		}else if(novoAcessorio.equals("direcao_hidraulica")){
			direcaoT++;
		}else if(novoAcessorio.equals("teto_solar")){
			tetoT++;
		}else if(novoAcessorio.equals("roda_liga")){
			rodaT++;
		}else if(novoAcessorio.equals("sensor_estacionamento")){
			sensorT++;
		}
	}
	
	public static void Imprime(){
		System.out.println("Quantidade de carros: " + Configurador.quant);
		System.out.println("****************************************");
		System.out.println("Ar condicionado: " + arT);
		System.out.println("Direção hidraulica: " + direcaoT);
		System.out.println("Teto solar: " + tetoT);
		System.out.println("Roda de liga: " + rodaT);
		System.out.println("Sensor de estacionamento " + sensorT);
		System.out.println("****************************************");
		System.out.println("Valor total: R$" + Configurador.valorTotal);
	}
}

