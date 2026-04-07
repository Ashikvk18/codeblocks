#include <iostream>

using namespace std;

int main()
{
    int a[5]={1,2,4};
    cout << "differently using for loop" << endl;
    for(int i = 0; i < 5; i++){
        cout << a[i] << endl;
    }
    cout << "differently using for loop" << endl;
    for (auto i{0uz}; i < 5; i++){
        cout << a[i] << endl;
    }
    cout << "differently using for loop" << endl;
    for (auto i{0}; i < 5; i++){
        cout << a[i] << endl;
    }

    return 0;
}
