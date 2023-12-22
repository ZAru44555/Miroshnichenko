
#include <stdio.h>
void AddLeftDigit(int D, int *K) {
*K = D * 10 + (*K);
}
int main() {
int K = 123;  
int D1 = 4;   
int D2 = 7;   

AddLeftDigit(D1, &K); 
printf("rezultat posle dobavleniya %d sleva: %d\n", D1, K);

AddLeftDigit(D2, &K); 
printf("rezultat posle dobavleniya %d sleva: %d\n", D2, K);

return 0;
}
