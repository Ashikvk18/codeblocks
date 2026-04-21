#include <iostream>
#include <memory>

using namespace std;

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int (*f) (int, int) = add;
    cout << f(5, 6) << endl;

    unique_ptr<int> p1 = make_unique<int>(10);
    cout << *p1 << endl;
    cout << &p1;





    system("pause>0");
    return 0;
}
