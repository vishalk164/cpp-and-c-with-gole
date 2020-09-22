#include<iostream>
using namespace std;
class student
{
    private:
    char name[20];
    int roll_no;
    
    public:
    
        void get_data()
    {
        cout<<"Enter the name"<<endl;
        cin>>name;
        cout<<"Enter the roll.no:"<<endl;
        cin>>roll_no;
     }
        
        void show_data()
        {
            cout<<"Name of student: "<<name<<endl;
        cout<<"roll.no of student: "<<roll_no<<endl;
        }
};
int main()
{
    class student s1,s2;
    s1.get_data();
    s1.show_data();
    s2.get_data();
    s2.show_data();
    return 0;
}