public class Paciente {
	String nome;
	char sexo;
	int idade;
	double calorias, altura, peso;
	
	//construtor
	public Paciente(String nome, char sexo, int idade, double calorias, double altura, double peso){
		this.nome = nome;
		this.sexo = sexo;
		this.idade = idade;
		this.calorias = calorias;
		this.altura = altura;
		this.peso = peso;
	}
	
	//método calcula quantidade de caloria que pode ser ingerido 
	double calcularKcalouria(){
		if(this.sexo == 'M' || this.sexo == 'm'){
			return 66.437 + (5.0033 * this.altura) + (13.7516 * this.peso) - (6.755 * this.idade);
		}else 
			return 655.0955 + (1.8496 * this.altura) + (9.5634 * this.peso) - (4.6756 * this.idade);
	}
	
	void consomeKcaloria(double calol){
		double val = calol - this.calorias;
		
		if(val < 0){
			System.out.println (this.nome + " não pode mais ingerir calourias");
		}else{
			System.out.println (this.nome + " ainda pode consumir " + val);
		}
	}
}

