#include<stdio.h>

float convertToCelsius(float fahrenheit){
	return (fahrenheit - 32) *5.0/9.0;
}
int main(){
	float F;
	printf("Enter temperature inFahrenheit: ");
	scanf("%f", &F);
	
	printf("Temperature in celsius = %.2f\n ",
convertToCelsius(F));
	return 0;
}
