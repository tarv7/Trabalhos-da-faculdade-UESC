
public class Configurador {
	public static int valorTotal, quant;
	
	public static void addCarro(Carro carro){
		quant++;
		
		valorTotal += carro.getValor();
	}

	public int void totalCarros(){
		return quant;
	}
}
