
public class Configurador {
	public static int ar, vidro, direcao, teto, roda, sensor, valorTotal, quant;
	
	public static void addCarro(Carro carro){
		quant++;
		
		valorTotal += carro.getValor();
		
		ar += carro.ar;
		vidro += carro.vidro;
		direcao += carro.direcao;
		teto += carro.teto;
		roda += carro.roda;
		sensor += carro.sensor;
	}
	
	public static void Imprime(){
		System.out.println("Quantidade de carros: " + quant);
		System.out.println("****************************************");
		System.out.println("Ar condicionado: " + ar);
		System.out.println("Direção hidraulica: " + direcao);
		System.out.println("Teto solar: " + teto);
		System.out.println("Roda de liga: " + roda);
		System.out.println("Sensor de estacionamento " + sensor);
		System.out.println("****************************************");
		System.out.println("Valor total: R$" + valorTotal);
	}
}
