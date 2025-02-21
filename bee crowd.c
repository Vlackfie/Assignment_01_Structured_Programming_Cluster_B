#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int Xi, Yi;
        scanf("%d %d", &Xi, &Yi);

        if ((Xi + Yi) % 2 == 0) {
            printf("Sadia will be happy.\n");
        } else {
            printf("Oops!\n");
        }
    }

    return 0;
}



//#include <stdio.h>
//
//void printPyramid(int n) {
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= n - i; j++) {
//            printf(" ");
//        }
//        for (int k = 1; k <= i; k++) {
//            printf("* ");
//        }
//        printf("\n");
//    }
//}
//
//int main() {
//    int N;
//    printf("Enter the number of rows: ");
//    scanf("%d", &N);
//
//    printPyramid(N);
//
//    return 0;
//}


//#include <stdio.h>
//
//int main() {
//  printf("I=1 J=7\n");
//  printf("I=1 J=6\n");
//  printf("I=1 J=5\n");
//  printf("I=3 J=9\n");
//  printf("I=3 J=8\n");
//  printf("I=3 J=7\n");
//  printf("...\n");
//  printf("I=9 J=15\n");
//  printf("I=9 J=14\n");
//  printf("I=9 J=13\n");
//
//
//    return 0;
//}
//  int t, x, y;
//    scanf("%d", &t);
//    for (int i = 0; i < t; i++) {
//        scanf("%d %d", &x, &y);
//        printf("%d %d\n", x < y ? x : y, x > y ? x : y);
//    }

//int main() {
//int x;
//scanf("%d", &x);
//int minutos=x*2;
//printf("%d minutos\n",minutos);
//

// double x1, y1, x2, y2, distance;
//    scanf("%lf %lf", &x1, &y1);
//    scanf("%lf %lf", &x2, &y2);
//    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
//    printf("%.4lf\n", distance);
// int time, speed;
//    scanf("%d%d",&time,&speed);
//    float fuel=(time*speed)/12.00;
//    printf("%.3f\n",fuel);
//
// int X;
// scanf("%d",&X);
// float Y;
// scanf("%f",&Y);
// float average=X/Y;
// printf("%.3f km/l\n",average);
// return 0;
//
//double R;
//   const double pi=3.14159;
//   scanf("%lf",&R);
//   double vol=(4.0/3)*pi*(R*R*R);
//   printf("VOLUME = %.3lf\n",vol);
//    return 0;

// int cop1, uop1;
//    float pop1;
//    scanf("%d%d%f", &cop1, &uop1, &pop1);
//    float por1=uop1*pop1;
//    int cop2, uop2;
//    float pop2;
//    scanf("%d%d%f", &cop2, &uop2, &pop2);
//    float por2=uop2*pop2;
//    float vtp=por1+por2;
//    printf("VALOR A PAGAR: R$ %.2f\n",vtp);
//
//int Number;
//scanf("%d",&Number);
//float Salary, hours;
//scanf("%f%f",&Salary ,&hours);
//float SALARY=Salary*hours;
//printf("NUMBER = %d\n",Number);
//printf("SALARY = U$ %.2f\n",SALARY);
//
//scanf("%d%d",&A,&B);
// if (A % B == 0 || B % A == 0) {
//        printf("Sao Multiplos\n");
//    } else {
//        printf("Nao sao Multiplos\n");
//}
//
//double A, B, C;
// scanf("%lf %lf %lf", &A, &B, &C);
//double MEDIA=(A*2 + B*3 + C*5)/10.0;
// printf("MEDIA = %.1lf\n",MEDIA);
//
//int A,B,C,D;
//scanf("%d %d %d %d",&A, &B, &C, &D);
//int PRODUCT1=A*B;
//int PRODUCT2=C*D;
//int DIFERENCA=PRODUCT1-PRODUCT2;
//    printf("DIFERENCA = %d\n",DIFERENCA);
//
//    double A, B, C;
//    const double pi = 3.14159;
//    scanf("%lf %lf %lf", &A, &B, &C);
//    double TRIANGULO = (A * C) / 2.0;
//    double CIRCULO = pi * (C * C);
//    double TRAPEZIO = ((A + B) * C) / 2.0;
//    double QUADRADO = B * B;
//    double RETANGULO = A * B;
//
//    printf("TRIANGULO: %.3lf\n", TRIANGULO);
//    printf("CIRCULO: %.3lf\n", CIRCULO);
//    printf("TRAPEZIO: %.3lf\n", TRAPEZIO);
//    printf("QUADRADO: %.3lf\n", QUADRADO);

//    printf("Hello World!\n");

