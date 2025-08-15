#include <stdio.h>

int main(){
    int a,b;
    int a11,a12,a13,a21,a22,a23,a31,a32,a33;
    int b11,b12,b13,b21,b22,b23,b31,b32,b33;
    printf("type your A 3*3: \n");
    printf("Enter a11: ");
    scanf("%d", &a11);
    printf("Enter a12: ");
    scanf("%d", &a12);
    printf("Enter a13: ");
    scanf("%d", &a13);
    printf("Enter a21: ");
    scanf("%d", &a21);
    printf("Enter a22: ");
    scanf("%d", &a22);
    printf("Enter a23: ");
    scanf("%d", &a23);
    printf("Enter a31: ");
    scanf("%d", &a31);
    printf("Enter a32: ");
    scanf("%d", &a32);
    printf("Enter a33: ");
    scanf("%d", &a33);
    printf("type your B 3*3: \n");
    printf("Enter a11: ");
    scanf("%d", &b11);
    printf("Enter b12: ");
    scanf("%d", &b12);
    printf("Enter b13: ");
    scanf("%d", &b13);
    printf("Enter b21: ");
    scanf("%d", &b21);
    printf("Enter b22: ");
    scanf("%d", &b22);
    printf("Enter b23: ");
    scanf("%d", &b23);
    printf("Enter b31: ");
    scanf("%d", &b31);
    printf("Enter b32: ");
    scanf("%d", &b32);
    printf("Enter b33: ");
    scanf("%d", &b33);

    int a1 = a11*b11+a12*b21+a13*b31;
    int a2 = a11*b12+a12*b22+a13*b32;
    int a3 = a11*b13+a12*b23+a13*b33;
    int b1 = a21*b11+a22*b21+a23*b31;
    int b2 = a21*b12+a22*b22+a23*b32;
    int b3 = a21*b13+a22*b23+a23*b33;
    int c1 = a31*b11+a32*b21+a33*b31;
    int c2 = a31*b12+a32*b22+a33*b32;
    int c3 = a31*b13+a32*b23+a33*b33;

    printf("Your answer is: \n%d %d %d\n%d %d %d\n%d %d %d",a1,a2,a3,b1,b2,b3,c1,c2,c3);



    return 0;
}
