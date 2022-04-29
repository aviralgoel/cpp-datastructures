#include <iostream>
#include <string>
#include <iomanip> // std::setprecision

using namespace std;

template <typename T>
T add(T x, T y)
{
    return (x + y);
}

int main()
{
    double a = 5.7777, b = 6.7777;
    cout << a << "+" << b << "=" << setprecision(20) << add<double>(a, b) << endl;

    return 0;
}