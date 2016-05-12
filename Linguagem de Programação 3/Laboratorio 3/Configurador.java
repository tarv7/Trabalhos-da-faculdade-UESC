
public class Configurador {
	public static int valorTotal, quant;
	
	public static void addCarro(Carro carro){
		quant++;
		
		valorTotal += carro.getValor();
	}

	public static int totalCarros(){
		return quant;
	}
}
