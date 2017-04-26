#include <stdio.h>
  
#define p 3.14159
  
int main() {
    
    double raio, area;
       
    scanf("%lf", &raio);
       
    area = p * raio * raio;
       
    printf("A=%.4f\n", area);
    
    return 0;
}
