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
    double a = -20;
    double b = 20;
    double xp;
    xp = (a + b) / 2;

    double c = func(p, q, xp);
    while(fabs(c) >= EPSILON)
    {
        if((c * func(p, q, a)) > 0)
            {
                a = xp;
                b = b;
                xp = (a + b) / 2;
                c = func(p, q, xp);
        }
        else
        {
            a = a;
            b = xp;
            xp = (a + b) / 2;
            c = func(p, q, xp);
        }
    }
    return xp;
}

/*方程式求值函数
 *输入参数：方程组系数p，q;方程式的未知量x
 *返回值：double型值，表示该方程式的值
*/
double f(int p, int q, double x) {
    return p * x + q;
}