#include<iostream>
using namespace std;
class set
{
    private:
        int a,b;
    public:
        void input();
        void showdata();
        int largest();
}s;
inline void set::input()
{
    cout<<"Enter and b"<<endl;
    cin>>a;
    cin>>b;
}
inline int set::largest()
{
    if(a>b)
    return a;
    else
    return b;
}
void set::showdata()
{
    cout <<"the largest value is: "<<largest()<<endl;
}
int main()
{
    s.input();
    s.showdata();
    return 0;

    }