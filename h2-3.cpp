/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>


using namespace std;
#include <deque>
deque <int> dq;
class WindGauge {
    public:
    WindGauge(int period = 12);
    void currentWindSpeed(int speed);
    int highest();
    int lowest();
    
    int average();
    private:// add properties and/or method(s) here};
    void Dump(WindGauge w);
    };
    
WindGauge::WindGauge(int period)
{
    period=12;
}


void WindGauge::currentWindSpeed(int speed)
{
    dq.push_back(speed);
    if(dq.size()>12)
    {
        dq.pop_back();
 }  
 }
 int WindGauge::highest(){
     int temp=-1;
     for(deque<int>::iterator it=dq.begin();it!=dq.end();it++)
     {
        if(temp<*it)
        {
            temp=*it;
        }
        
     }
     return temp;
 }
 int WindGauge::lowest()
 {
     int temp=300000000;
     for(deque<int>::iterator it=dq.begin();it!=dq.end();it++)
     {
        if(temp>*it)
        {
            temp=*it;
        }
        
     }
     return temp;
 }
 int WindGauge::average()
 {
     int temp=0;
     int add=0;
     for(deque<int>::iterator it=dq.begin();it!=dq.end();it++)
     {
        temp++;
        add=add+ *it;
        
     }
     return add/temp;
 }
 void Dump(WindGauge w){
    cout << "Highest speed is: " << w.highest() << endl;
    cout << "Lowest speed is: " << w.lowest() << endl;
    cout << "The average speed is: " << w.average() << endl;
}

int main()
{
    WindGauge a;
    a.currentWindSpeed(15);
    a.currentWindSpeed(16);
    a.currentWindSpeed(12);
    a.currentWindSpeed(15);
    a.currentWindSpeed(15);
    Dump(a);
    a.currentWindSpeed(16);
    a.currentWindSpeed(17);
    a.currentWindSpeed(16);
    a.currentWindSpeed(16);
    a.currentWindSpeed(20);
    a.currentWindSpeed(16);
    a.currentWindSpeed(15);
    a.currentWindSpeed(16);
    a.currentWindSpeed(20);
    Dump(a);

    return 0;
}
