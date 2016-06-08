
public class Fracao {
	/*
	 * Atributos
	 */
	private int numerador, 
				denominador;
	
	/*
	 * Construtores
	 */
	public Fracao(int numerador, int denominador){
		this.numerador = numerador;
		
		if(denominador != 0){
			this.denominador = denominador;
		}else{
			System.out.println("Denominadaor invalido! Atribui-se 1");
			this.denominador = 1;
		}
	}
	
	public Fracao(){}
	
	/*
	 * Métodos
	 
	public Fracao soma(Fracao numero){
		
	}
	*/
}
