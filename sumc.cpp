#include<iostream>
#include<conio.h>
using namespace std;
class sum
{
    private:
    int a,b;
    
    public:
        void setdata();
        void showdata();
    };

void sum :: setdata()
{
    cout<<"Enter a and b:"<<endl;
    cin>>a>>endl>>cin>>b;
}

void sum :: showdata()
{
    cout<<"The sum of"<<a<<"and"<<b<<"is"<<a+b;
}

int main()
{
    sum s;
    s.setdata();
    s.showdata();
    return 0;
    
}
