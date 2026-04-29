#ifdef STRING_INT_DOUBLE_THRUPLE_H
#define STRING_INT_DOUBLE_THRUPLE_H
 
#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
using namespace std;
 
class StringIntDoubleThruple {
private:
    string first;
    int second;
    double third;
 
public:
    StringIntDoubleThruple() : first(""), second(0), third(0.0) {}
 
    StringIntDoubleThruple(string f, int s, double t)
        : first(f), second(s), third(t) {}
 
    string getFirst() const { return first; }
    int getSecond() const { return second; }
    double getThird() const { return third; }
 
    void setFirst(string f) { first = f; }
    void setSecond(int s) { second = s; }
    void setThird(double t) { third = t; }
 
    string toString() const {
        stringstream ss;
        ss << "(" << first << ", " << second << ", "
           << fixed << setprecision(2) << third << ")";
        return ss.str();
    }
 
    void print() const {
        cout << toString() << endl;
    }
};
 
#endif
