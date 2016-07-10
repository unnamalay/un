#include <stdio.h>
#include <conio.h>
void hanoi(int n,char start,char end,char temp){
    if(n==1){
        printf("\nMoving the disc 1 from peg %c to peg %c",start,end);
        return;
    }
    hanoi(n-1,start,temp,end);
    printf("\nMoving the disc %d from peg %c to peg %c",n,start,end);
    hanoi(n-1,end,start,temp);
}

void main(){
    int n;
    scanf("%d",&n);
    hanoi(n,'S','E','T');
    getch();
}
