#include< iostream>
using namespace std;
float operator"" _Kelvin(unsigned long long int a)
{

    return (a - 273.15);

}
float operator"" _Fahrenheit(unsigned long long int b)
{
    return ((b - 32) / 1.8);
}

int main()
{
    float a = 300_Kelvin;
    float b = 120_Fahrenheit;
    cout << a << endl << b;
    return 0;
}
