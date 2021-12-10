//Hemaank Mahajan 2K20/A7/08
// A program to Convert Hexadecimal to binary

#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
	printf("Hemaank Mahajan 2K20/A7/08\n");
    char Hexa[20];
    printf("Enter hexadecimal number\n");
    scanf("%s",Hexa);
    int i=0;
    while(Hexa[i]!='\0'){
        switch(Hexa[i])
        {
            case '0':
                printf("0000 ");
                break;
            case '1':
                printf("0001 ");
                break;
            case '2':
                printf("0010 ");
                break;
            case '3':
                printf("0011 ");
                break;
            case '4':
                printf("0100 ");
                break;
            case '5':
                printf("0101 ");
                break;
            case '6':
                printf("0110 ");
                break;
            case '7':
                printf("0111 ");
                break;
            case '8':
                printf("1000 ");
                break;
            case '9':
                printf("1001 ");
                break;
            case 'a':
            case 'A':
                printf("1010 ");
                break;
            case 'b':
            case 'B':
                printf("1011 ");
                break;
            case 'c':
            case 'C':
                printf("1100 ");
                break;
            case 'd':
            case 'D':
                printf("1101 ");
                break;
            case 'e':
            case 'E':
                printf("1110 ");
                break;
            case 'f':
            case 'F':
                printf("1111 ");
                break;
            default:
                printf("Invalid hexadecimal input.");
        }
        i++;
    }
    
    }