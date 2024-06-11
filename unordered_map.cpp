#include <unordered_map>
#include <iostream>
//the main difference between mao and unrdered mao is that unordered map use hashing where as map us RBT. Map is sorted kind of data set
//Unordered map have all time complexity of average constant time - complexity
//Internally, the elements as organized into buckets.
//It uses hashing to insert elements into bucket
using namespace std;
int main()
{
    unordered_map<int,char> mo={(1,'a'),(2,'b')};
    cout<<mo[1]<<endl;
    cout<<mo[2]<<endl;
}