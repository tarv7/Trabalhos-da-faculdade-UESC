/*
 * Autor: Thales Augusto
 */

public class Transacao {
	// Atributos
	protected float totalTransacao;
	
	// Construtor da classe
	public Transacao(float valor) {
		this.totalTransacao = valor;
	}
	
	// Metodos
	public float GetTotalTransacao(){
		return totalTransacao;
	}
}
