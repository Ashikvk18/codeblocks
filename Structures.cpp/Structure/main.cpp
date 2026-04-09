#include <iostream>

using namespace std;

struct Rectangle
{
    int l;
    int w;
};

int main()
{
       struct Rectangle r;
       r.w = 5;
       r.l = 10;
       cout << "The area of rectangle r is : " << r.l * r.w << endl;
       struct Rectangle x = {15,10};
       cout << "The area of rectangle x is : " << x.l * x.w << endl;
       x.w = 20;
       x.l = 10;
       cout << "The area of rectangle x is : " << x.l * x.w << endl;
       return 0;
}
