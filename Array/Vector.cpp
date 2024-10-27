#include<iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int>vec = {1,2,3};
    vector<int>vec1(5,0);
    vector<char>vec2 = {'a','b','c'};
    cout<<vec[0]<<endl;
    for(int i : vec1)
    {
        cout<< i <<endl;
    }
    for(char i : vec2)
    {
        cout<<i<<endl;
    }

    cout<<"size="<<vec2.size()<<endl;
    vec2.push_back('d');
    cout<<"size="<<vec2.size()<<endl;

    vec.pop_back();
    for(int i: vec){
        cout<<i<<endl;
    }

    cout<<vec.front()<<endl;
    cout<<vec2.back()<<endl;
    return 0;
}