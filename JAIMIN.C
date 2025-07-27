#include <stdio.h>
#include <conio.h>  // For getch()

int main() {

    float celsius, fahrenheit;
     clrscr();
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Conversion formula
    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    printf("Temperature in Fahrenheit = %.2f", fahrenheit);

    getch();  // Pause the screen in Turbo C
	return 0;
}