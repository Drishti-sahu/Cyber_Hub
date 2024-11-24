#include <stdio.h>
int main() {
    // To calculate BMI 
    float height = 1.82; // Given height
    float weight = 72; // Given weight
    float BMI; // Initialisation of BMI
    BMI = weight/(height*height); // formula to calculae BMI 
    printf("BMI Value will be: %f",BMI);
    
    return 0;
}