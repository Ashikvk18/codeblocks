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
    return 0;
}
