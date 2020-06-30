#include <stdio.h>
#include <math.h>
#define EPSILON 1e-7

double bisection(int p, int q, double (*func)(int, int, double));
double f(int p, int q, double x);


int main() {
    int p;
    int q;
    scanf("%d%d", &p, &q);
    printf("%.4f\n", bisection(p, q, f));
    return 0;
}

//二分近似法求解方程组解函数，用来求解方程式的近似解
//输入参数：方程组系数p,q;方程组求值函数的函数指针func
//返回值：返回一个double型值xp，该值是方程组的近似解
double bisection(int p, int q, double (*func)(int, int, double)) {
    double a = 20.0;
    double b = -20.0;
    double m;
    while(1) {
        m = (a + b) / 2;
        double c=f(p, q, m);
        if (fabs(c) < EPSILON) {
            return m;
        } else if (f(p, q, a) * c < 0) {
            b = m;
        } else {
            a = m;
        }
    }
}

/*方程式求值函数
 *输入参数：方程组系数p，q;方程式的未知量x
 *返回值：double型值，表示该方程式的值
*/
double f(int p, int q, double x) {
    return p * x + q;
}
