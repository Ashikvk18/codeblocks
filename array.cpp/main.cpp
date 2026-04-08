#include <iostream>

using namespace std;

int main()
{
    int a[5]={1,2,4};
    int b[10]={3};
    a[4]= 7;
    int n;
    cout << "enter the size " <<endl;
    cin >> n;
    cout << endl;
    int* r = new int[n];

    for(auto i{0uz}; i < n; i++){
        cout << "enter the" <<i<<"th number: "<< endl;
        cin >> r[i];
    }
    for (auto i{0uz}; i < n; i++){
        cout << r[i] << endl;
    }
  /*  cout << "size of this array " << sizeof(a) << endl;
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
    for(int i = 0; i < 5; i++){
        cout << b[i] << endl;
    }
    cout<<"another way"<<endl;
    for(auto x : a){
        cout << x << endl;
    }
    cout<< "with &"<< endl;
    for(auto& x : a){
        cout << x << endl;
    }
    */

    return 0;
}
