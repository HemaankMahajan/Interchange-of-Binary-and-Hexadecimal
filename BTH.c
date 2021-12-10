//Hemaank Mahajan 2K20/A7/08
// A program to Convert Binary to Hexadecimal
#include <stdio.h>
#include <string.h>
#include <math.h>

int bineq(int a){
    int ans=0,i=0;
    while(a>0){

    int v=a%10;    
    ans+=v*pow(2,i);
    i++;
    a=a/10;
    }
    return ans;
}

int main(){
	printf("Hemaank Mahajan 2K20/A7/08\n");
    int binequivalent,n;
    printf("How many units of the binary number are in the set of 4?\n");
    scanf("%d",&n);
    int binarray[n];
    printf("Enter binary number in set of 4:");
    for(int i=0;i<n;i++){
        scanf("%d",&binarray[i]);
    }
    char Hexa[100];
    int t=0;
    while(t<n){
        binequivalent=bineq(binarray[t]);
        if(binequivalent>=10){
            Hexa[t]=binequivalent+55;
        }
        else{
              Hexa[t]=binequivalent+48;  
        }
        t++;
    }
    Hexa[t]='\0';
    printf("Hexadecimal equivalent is:\n");
    for(int i=0;i<=n;i++){
        printf("%c",Hexa[i]);
    }
    
    }