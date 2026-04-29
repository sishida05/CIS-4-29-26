#ifndef THREE_INT_THRUPLE_H
#define THREE_INT_THRUPLE_H
 
#include <iostream>
#include <sstream>
using namespace std;
 
class ThreeIntThruple {
private:
    int first;
    int second;
    int third;
 
public:
    ThreeIntThruple() : first(0), second(0), third(0) {}
 
    ThreeIntThruple(int f, int s, int t)
        : first(f), second(s), third(t) {}
 
    int getFirst() const { return first; }
    int getSecond() const { return second; }
    int getThird() const { return third; }
 
    void setFirst(int f) { first = f; }
    void setSecond(int s) { second = s; }
    void setThird(int t) { third = t; }
 
    string toString() const {
        stringstream ss;
        ss << "(" << first << ", " << second << ", " << third << ")";
        return ss.str();
    }
 
    void print() const {
        cout << toString() << endl;
    }
};
 
#endif
