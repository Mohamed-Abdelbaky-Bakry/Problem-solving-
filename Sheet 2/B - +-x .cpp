#include <iostream>
using namespace std;

int main()
{
    int A;
    int B;
    cin >> A;
    cin >> B;
    int sum = A + B;
    int subtract = A - B;
    int multiply = A * B;
    if (sum >= subtract && sum >= multiply)
        cout << sum;
    else if (subtract >= sum && subtract >= multiply)
        cout << subtract;
    else
        cout << multiply;

}