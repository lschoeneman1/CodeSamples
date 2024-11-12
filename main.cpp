#include <iostream>
#include <fstream>
#include "payrollItem.h"

using namespace std;

bool readPayroll(ifstream& inputStream, PayrollItem& payrollItem)
{
    int id;
    string firstName;
    string lastName;    
    double hours;
    double rate;
    

    
    if (!inputStream.eof())
    {
        inputStream >> id;

       
        inputStream >> firstName;
        inputStream >> lastName;
        inputStream >> hours;
        inputStream >> rate;
        payrollItem.setId(id);
        payrollItem.setName(firstName+" "+lastName);
        payrollItem.setHours(hours);
        payrollItem.setRate(rate);
        return true;       
    }
    else
    {
        return false;
    }
    
}

int main()
{
    ofstream outputStream("Payroll.txt", ios::trunc);
    outputStream << "1\tBob Smith\t40\t20.00" << endl;
    outputStream << "2\tSteve Smith\t45\t25.00" << endl;
    outputStream << "3\tKevin Smith\t30\t10.00" << endl;
    outputStream << "4\tSharon Smith\t50\t50.00" << endl;
    outputStream.close();

    ifstream inputStream("Payroll.txt", ios::in);
    PayrollItem payroll;
    while (readPayroll(inputStream, payroll))
    {
        string result = payroll.toString();
        cout << result << endl;
    }   
    inputStream.close();
}