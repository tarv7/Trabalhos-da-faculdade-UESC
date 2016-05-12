public class Principal {
	public static void main(String[] args) {
		Carro carro1 = new Carro();
		Carro carro2 = new Carro();
		Carro carro3 = new Carro();
		Carro carro4 = new Carro();
		Carro carro5 = new Carro();
		
		carro1.instalaOpcional("Motor");
		carro1.instalaOpcional("ar_condicionado");
		carro1.instalaOpcional("teto_solar");
		
		carro2.instalaOpcional("vidro_eletrico");
		carro2.instalaOpcional("direcao_hidraulica");

		carro4.instalaOpcional("roda_liga");
		carro4.instalaOpcional("direcao_hidraulica");

		carro5.instalaOpcional("ar_condicionado");
		carro5.instalaOpcional("vidro_eletrico");
		carro5.instalaOpcional("direcao_hidraulica");
		carro5.instalaOpcional("teto_solar");
		carro5.instalaOpcional("roda_liga");
		carro5.instalaOpcional("sensor_estacionamento");
		
		Configurador.addCarro(carro1);
		Configurador.addCarro(carro2);
		Configurador.addCarro(carro3);
		Configurador.addCarro(carro4);
		Configurador.addCarro(carro5);
		
		Carro.Imprime();
	}
}

