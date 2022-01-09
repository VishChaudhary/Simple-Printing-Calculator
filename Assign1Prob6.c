#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double num1, num2, acc;
    char oper= ' ';
    char E;

    //Asks for input
    printf("Type in a number and operator\n");		
	

    while (oper!= E) 
    {
        //Accepts input
        scanf("%lf %c", &num1, &oper);				

	    fflush(stdin);
	   
        switch(oper)
        {
           case 'S':				
			acc = num1;					// If S is entered the accumulator is set to the input value
			printf("accumulator = %lf\n", acc);
			break;
		case '+':			
			acc += num1;				//If + is entered the accumulator is added to the input value
			printf("accumulator = %lf\n", acc);
			break;
		case '-':
			acc -= num1;				//If - is entered the entered number is subtracted from the accumulator
			printf("accumulator = %lf\n", acc);
			break;
		case '*':
			acc *= num1;				//If * is entered the entered number is multiplied from the accumulator
			printf("accumulator = %lf\n", acc);
			break;
		case '/':
			acc /= num1;				//If / is entered the entered number is divided from the accumulator
			printf("accumulator = %lf\n", acc);
			break;
        }
        if (oper == 'E')				// If E is entered the program terminates	
			printf("accumulator = %lf\nEnd of program\n", acc);
    }
    

    return 0;
 
}