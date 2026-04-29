#ifndef THRUPLE_H
#define THRUPLE_H
 
#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
using namespace std;
 
template <typename T1, typename T2, typename T3>
class Thruple {
private:
    T1 first;
    T2 second;
    T3 third;
 
public:
    // Default constructor
    Thruple() : first(T1()), second(T2()), third(T3()) {}
 
    // Parameterized constructor
    Thruple(T1 f, T2 s, T3 t) : first(f), second(s), third(t) {}
 
    // Getters
    T1 getFirst() const { return first; }
    T2 getSecond() const { return second; }
    T3 getThird() const { return third; }
 
    // Setters
    void setFirst(T1 f) { first = f; }
    void setSecond(T2 s) { second = s; }
    void setThird(T3 t) { third = t; }
 
    // toString
    string toString() const {
        stringstream ss;
        ss << "(" << first << ", " << second << ", " << third << ")";
        return ss.str();
    }
 
    // Print
    void print() const {
        cout << toString() << endl;
    }
};
 
#endif
