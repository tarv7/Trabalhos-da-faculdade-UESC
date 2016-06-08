
public class Principal {

	public static void main(String[] args) {
		Paciente paciente01 = new Paciente("Maria", 'F', 30, 900, 1.70, 70);
		Paciente paciente02 = new Paciente("Mario", 'M', 28, 1800, 1.62, 60);
		Paciente paciente03 = new Paciente("Marilene", 'F', 32, 1100, 1.80, 65);
		
		//metodos
		paciente01.consomeKcaloria(paciente01.calcularKcalouria());
		paciente02.consomeKcaloria(paciente02.calcularKcalouria());
		paciente03.consomeKcaloria(paciente03.calcularKcalouria());
	}

}