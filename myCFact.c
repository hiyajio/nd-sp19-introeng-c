#include <stdio.h>
int myCFact(int N);

int main()
{
    int N;
    printf("What number do you want to get the factorial of? ");
    scanf("%d", &N);
    
    int factor;
    
    factor = myCFact(N);
    
    printf("The factorial of %d is %d.", N, factor);
    
    return 0;
}

int myCFact(int N) {
    int factorial = 1;
    for (int i = N; i>0; i--) {
        factorial = factorial * i;
    }
    
    return factorial;
}
