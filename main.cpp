#include "Thruple.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> v;
    
    Thruple<int, int, int> rgbValue(125,125,125);
    
    // Thruple could be set with any 3 types as long as they can be initialized without an argument (Ex: Thruple<Balance(), Account(), User()>)
    //Thruple could also be set manually if you initialize the uninitialized value within the parameter (Ex: Thruple<int, Account(5), double>)
    
    Thruple<int, int, Account> accountValue(5,6,Account(1));


    return 0;
}