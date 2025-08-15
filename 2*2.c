#include <stdio.h>

int main(){
    int a,b;
    int a11,a12,a21,a22;
    int b11,b12,b21,b22;
    printf("type your A 2*2: \n");
    printf("Enter a11: ");
    scanf("%d", &a11);
    printf("Enter a12: ");
    scanf("%d", &a12);
    printf("Enter a21: ");
    scanf("%d", &a21);
    printf("Enter a22: ");
    scanf("%d", &a22);
    printf("type your B 2*2: \n");
    printf("Enter b11: ");
    scanf("%d", &b11);
    printf("Enter b12: ");
    scanf("%d", &b12);
    printf("Enter b21: ");
    scanf("%d", &b21);
    printf("Enter b22: ");
    scanf("%d", &b22);
    int a1 = a11*b11+a12*b21;
    int a2 = a11*b12+a12*b22;
    int a3 = a21*b11+a22*b21;
    int a4 = a21*b12+a22*b22;
    printf("your Answer is: \n %d %d\n%d %d",a1,a2,a3,a4);



    return 0;
}
