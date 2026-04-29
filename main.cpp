#include "thruple.h"
#include <iostream>
#include <vector>
#include <memory>
using namespace std;

int main() {

    int * regularPtr = new int;
    *regularPtr = 42;

    shared_ptr<int> p1(regularPtr);
    cout << "Count: " << p1.use_count() << endl;  // 1
 
    {
        shared_ptr<int> p2 = p1;  // copy is fine
        cout << "Count: " << p1.use_count() << endl;  // 2
    }  // p2 goes out of scope, count drops back to 1
 
     cout << "Count: " << p1.use_count() << endl;  // 1
    
    // p1 goes out of scope, count = 0, memory freed

    // vector<int> v;
    
    // Thruple<int, int, int> rgbValue(125,125,125);
    
    // // Thruple could be set with any 3 types as long as they can be initialized without an argument (Ex: Thruple<Balance(), Account(), User()>)
    // //Thruple could also be set manually if you initialize the uninitialized value within the parameter (Ex: Thruple<int, Account(5), double>)
    
    // Thruple<int, int, Account> accountValue(5,6,Account(1));


    return 0;
}