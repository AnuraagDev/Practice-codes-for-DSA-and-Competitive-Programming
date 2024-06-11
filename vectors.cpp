#include <vector>
#include <iostream>
using namespace std;
int main()
{
 
    vector<int> a;
    a.push_back(10);
    
    a.push_back(20);//push_back function check for size and if not available it doubles it.
    a.push_back(30);
    cout<<a.size();
    cout<<endl;
    for(int i:a)
    {
        cout<<i<<endl;
    }
    a.pop_back();
    for(int i: a)
    {
        cout<<i<<endl;
    }
    int b=1;
    a.erase(a.begin()+2);
    for(auto i:a)
    {
        cout<<i<<endl;
    }
    a.push_back(20);
    cout<<a.at(1)<<endl;
    a.push_back(30);
    //cout<<a.at(3)<<endl;//if we use [] to access anything in vector then this can even give us garbage values so it is way safe to use vector_name.at() function as it is much safer.
a.clear();
for(int i=0;i<100;i++)
{
    a.push_back(i+1);
}
cout<<"\n"<<a.size();
cout<<"\n"<<a.capacity();
}