#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define pi 3.1415
int main(){
	system("color f0");
	float vol, raio, alt;
	
	printf("Digite o raio e altura da lata, respectivamente: ");
	scanf("%f %f", &raio, &alt);
	
	vol = pi * (pow(raio, 2)) * alt;
	printf("Volume = %f\n", vol);
	
	system("pause");
	return 0;
}
