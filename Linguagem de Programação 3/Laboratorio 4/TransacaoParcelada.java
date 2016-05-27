/*
 * Autor: Thales Augusto
 */

import java.lang.Math;

public class TransacaoParcelada extends Transacao {
	// Atributos
	private int parcelas;
	private float taxa;
	
	// Construtor
	public TransacaoParcelada(float valor, float taxa, int parcelas) {
		super(valor);
		this.parcelas = parcelas;
		this.taxa = taxa;
	}
	
	// Metodos
	public float GetTotalTransacao() {
		// Retornando o valor total de acordo com o calculo de juros
		return super.GetTotalTransacao() * (float) Math.pow(1 + (taxa / 100), parcelas);
	}
	
	public int GetParcelas(){
		return parcelas;
	}
	
	public float GetTaxa(){
		return taxa;
	}
}
