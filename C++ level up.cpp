#include <iostream>

using namespace std;
void increment (int* ptr){
(*ptr)++;
}
int main()
{
    int currentLevel = 55;
    cout<<"Level is "<<currentLevel<<endl;
    cout<<"Address is "<<&currentLevel<<endl;
int* ptr = &currentLevel;
cout<<"Points to: "<<ptr<<endl;
    cout<<"Points to level:"<<(*ptr)<<endl;

    increment(ptr);
    increment(ptr);
    increment(ptr);
    increment(ptr);
    increment(ptr);
    increment(ptr);
    increment(ptr);
    increment(ptr);
    cout<< "Current level is "<<currentLevel<<endl;
    return 0;
}
