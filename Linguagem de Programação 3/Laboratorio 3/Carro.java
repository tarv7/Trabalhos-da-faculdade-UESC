
public class Carro {
	public String acessorio;
	public int ar, vidro, direcao, teto, roda, sensor;

	public void instalaOpcional(String novoAcessorio){
		if(novoAcessorio.equals("ar_condicionado") || 
		   novoAcessorio.equals("vidro_eletrico") || 
		   novoAcessorio.equals("direcao_hidraulica") || 
		   novoAcessorio.equals("teto_solar") || 
		   novoAcessorio.equals("roda_liga") || 
		   novoAcessorio.equals("sensor_estacionamento")){
			
			contabilizaAcessorios(novoAcessorio);
		}else
			System.out.println("Acessorio " + novoAcessorio + " invalido!");
	}
	
	public int getValor(){
		return 29000 + (this.ar * 1500) + (this.vidro * 600) + (this.direcao * 1150)
				 + (this.teto * 4000) + (this.roda * 2850) + (this.sensor * 300);
	}
	
	public void contabilizaAcessorios(String novoAcessorio){
		if(novoAcessorio.equals("ar_condicionado") && this.ar == 0)
			this.ar++;
		else if(novoAcessorio.equals("vidro_eletrico") && this.vidro == 0)
			this.vidro++;
		else if(novoAcessorio.equals("direcao_hidraulica") && this.direcao == 0)
			this.direcao++;
		else if(novoAcessorio.equals("teto_solar") && this.teto == 0)
			this.teto++;
		else if(novoAcessorio.equals("roda_liga") && this.roda == 0)
			this.roda++;
		else if(novoAcessorio.equals("sensor_estacionamento") && this.sensor == 0)
			sensor++;
		else{
			System.out.println("Acessorio invalido!");
			return;
		}
	}
}
