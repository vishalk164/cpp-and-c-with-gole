#include<iostream>
using namespace std;
class rectangle
{
    private:
    int length,bredth;
    public:
    void set_data(int l,int b)
        {
        length=l;
        bredth=b;
    }
    void show_data()
    {
       cout<<"Enter the length:\t"<<length<<endl;
         cout<<"Enter the bredth:\t"<<bredth<<endl;
         }
    int find_area()
    {
        return(length*bredth);
    }
    int find_perimeter()
    {
        return(2*(length+bredth));
    }
    
}r1;
int main()
{
    r1.set_data(5,6);
    r1.show_data();
    r1.find_area();
    r1.find_perimeter();
    cout<<"the area of rectangle is:"<<r1.find_area()<<endl;
   cout<<"the perimeter of rectangle is:"<<r1.find_perimeter()<<endl;
   
    
}