#include <iostream>
using namespace std;

class employee
{
private:
    int a, b, c;

public:
    int d, e;

    void setup(int a1, int b1, int c1);
    void getup()
    {
        cout << "the value of a is " << a << endl;
        cout << "the value of b is " << b << endl;
        cout << "the value of c is " << c << endl;
        cout << "the value of d is " << d << endl;
        cout << "the value of e is " << e << endl;
    }
};
void employee ::setup(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}
int main()
{
    employee vijay;
    vijay.d = 23;
    vijay.e = 12;
    vijay.setup(1, 2, 3);
    vijay.getup();
    return 0;
}