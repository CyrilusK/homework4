#include <iostream>

#include "formatter_ex.h"
#include "solver.h"
using namespace std;

int main()
{
    float a = 0;
    float b = 0;
    float c = 0;

    cin >> a >> b >> c;

    float x1 = 0;
    float x2 = 0;

    try
    {
        solve(a, b, c, x1, x2);

        formatter(cout, "x1 = " + to_string(x1));
        formatter(cout, "x2 = " + to_string(x2));
    }
    catch (const logic_error& ex)
    {
        formatter(cout, ex.what());
    }

    return 0;
}
