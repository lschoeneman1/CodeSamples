#pragma once
#include <string>
#include <iostream>
using namespace std;
class PayrollItem
{
private:
    int _id;
    string _name;
    double _hours;
    double _rate;
public:    
    PayrollItem(int id=0, string name="", double hours=0.0, double rate=0.0)
    {
        _id = id;
        _name = name;
        _hours = hours;
        _rate = rate;
    }

    int getId() 
    {
        return _id;
    }

    void setId(int val)
    {
        _id = val;
    }

    string getName()
    {
        return _name;
    }

    void setName(string val)
    {
        _name = val;
    }

    double getHours()
    {
        return _hours;
    }

    void setHours(double val)
    {
        _hours = val;
    }

    double getRate()
    {
        return _rate;
    }

    void setRate(double val)
    {
        _rate = val;
    }

    double getGrossPay()
    {
        return _hours*_rate;
    }

    string toString()
    {
        string output = to_string(_id) +"\t" + _name +"\t" + to_string(_hours) +"\t" + to_string(_rate);              
        return output;        
    }
};

