/*
 * Autor: Thales Augusto
 */

public class TransacaoDinheiro extends Transacao {
	// Atributos
	private float desconto;
	
	// Construtor
	public TransacaoDinheiro(float valor, float desconto){
		super(valor);
		this.desconto = desconto;
	}
	
	// Metodos
	public float GetTotalTransacao(){
		// Retornando valor total de acordo com o desconto
		return super.GetTotalTransacao() * ((100 - desconto) / 100);
	}
	
	public float GetDesconto(){
		return desconto;
	}
}
