#include <stdio.h>

int main(){
    int A;
    int a11,a12,a13,a21,a22,a23,a31,a32,a33;
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
    int a1 = a11*a11+a12*a21+a13*a31;
    int a2 = a11*a12+a12*a22+a13*a32;
    int a3 = a11*a13+a12*a23+a13*a33;
    int b1 = a21*a11+a22*a21+a23*a31;
    int b2 = a21*a12+a22*a22+a23*a32;
    int b3 = a21*a13+a22*a23+a23*a33;
    int c1 = a31*a11+a32*a21+a33*a31;
    int c2 = a31*a12+a32*a22+a33*a32;
    int c3 = a31*a13+a32*a23+a33*a33;
    printf("Your A2: \n %d %d %d \n %d %d %d \n %d %d %d\n",a1,a2,a3,b1,b2,b3,c1,c2,c3);

    int A1 = a1*a11+a2*a21+a3*a31;
    int A2 = a1*a12+a2*a22+a3*a32;
    int A3 = a1*a13+a2*a23+a3*a33;
    int B1 = b1*a11+b2*a21+b3*a31;
    int B2 = b1*a12+b2*a22+b3*a32;
    int B3 = b1*a13+b2*a23+b3*a33;
    int C1 = c1*a11+c2*a21+c3*a31;
    int C2 = c1*a12+c2*a22+c3*a32;
    int C3 = c1*a13+c2*a23+c3*a33;

    printf("Your A3 Answer is: \n %d %d %d \n %d %d %d \n %d %d %d",A1,A2,A3,B1,B2,B3,C1,C2,C3);


    return 0;
}
