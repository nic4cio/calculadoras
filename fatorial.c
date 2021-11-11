#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//calcule os fatoriais de uma sequência de números dada.
//o programa receberá uma sequência de inteiros n e encerra sua execução quando o número n dado for -1
int fat (int n) {
    if (n == 0)
    {return 1;}    
    else 
    return n * fat (n-1);
}

void scan () {
    int a; scanf("%d",&a);
    if (a == -1) {return;}
    else {a = fat (a); printf("%d\n",a);
    scan();}
}
    
int main() {
    scan ();
}
