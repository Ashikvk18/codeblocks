#include <iostream>

using namespace std;

struct Student{
    int roll;
    char name[18];
}s2,s3,s4;

int main()
{
    struct Student s1 = {18, "Ashik"};
    cout << "the size of this struct is : " << sizeof(s1) << endl; // concept of padding that's why it is not 22 it is 24. Struct takes the multiple of the largest data type.
    cout << endl;
    return 0;
}
