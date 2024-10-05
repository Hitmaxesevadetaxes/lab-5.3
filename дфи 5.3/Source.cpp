#include <iostream>
#include <iomanip> 
#include <cmath>
#include "Windows.h"

using namespace std;

double compute_expression(const double x);

int main()

{
SetConsoleCP(1251);
SetConsoleOutputCP(1251);
    double t_start, t_end; 
    int n; 
    cout << "¬вед≥ть початкове значенн€ t (tпоч): "; cin >> t_start;
    cout << "¬вед≥ть к≥нцеве значенн€ t (tк≥н): "; cin >> t_end;
    cout << "¬вед≥ть к≥льк≥сть в≥др≥зк≥в розбитт€ n: "; cin >> n;

    double dt = (t_end - t_start) / n; 

    cout << setw(10) << "t" << setw(20) << "–езультат виразу" << endl;
    cout << "---------------------------------------" << endl;

    for (double t = t_start; t <= t_end; t += dt)
    {
        double result = compute_expression(t);
        cout << setw(10) << fixed << setprecision(4) << t << setw(20) << fixed << setprecision(6) << result << endl;
    }

    return 0;
}

double compute_expression(const double x)
{
    if (abs(x) >= 1)
    {
        return (cos(sin(x)) + 1) / (exp(-x) + 1);
    }
    else
    {
        double S = 0;
        int j = 0;
        double a = 1;
        S = a; 

        do
        {
            j++;
            double R = -x * x / ((3 * j - 2) * (3 * j - 1) * 3 * j);
            a *= R;
            S += a;
        } while (j < 4); 

        return S;
    }
}
