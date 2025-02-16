#include <iostream>
using namespace std;
int cube();
int swap();
int main()
{
    int y;
    cout << "function menu" << endl;
    cout << "1 cube " << endl;
    cout << "2 swap " << endl;
    cout << "3 back " << endl;
    cout << "select choice 1 to 3 " << endl;
    cin >> y;
    switch (y)
    {
    case 1:
        cube();
        break;
    case 2:
        swap();
        break;
    default:
        cout << "back";
        break;
    }
}
int cube()
{
    int num, bb;
    cout << "enter the cube no";
    cin >> num;
    bb = num * num * num;
    cout << bb << endl;
}
int swap(){
    int a,b,temp;
    cout<<"enter the two number"<<endl;
    cin>>a>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<a<<endl;
    cout<<b<<endl;
}
