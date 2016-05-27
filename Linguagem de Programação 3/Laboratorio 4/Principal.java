/*
 * Autor: Thales Augusto
 */
public class Principal {
	public static void main(String[] args) {
		Transacao normal = new Transacao(1000);
		TransacaoParcelada parcelada = new TransacaoParcelada(500, 1, 10);
		TransacaoDinheiro dinheiro = new TransacaoDinheiro(100, 33);
		
		System.out.println("Transacao normal: R$" + normal.GetTotalTransacao());
		
		System.out.println("Transacao parcelada: R$" + parcelada.GetTotalTransacao() 
							+ " dividido em " + parcelada.GetParcelas() + " vezes"
							+ " com taxa de " + parcelada.GetTaxa() + "%.");
		
		System.out.println("Transacao avista: R$" + dinheiro.GetTotalTransacao() 
							+ " com desconto de " + dinheiro.GetDesconto() + "%.");
	}

}
