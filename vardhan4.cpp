#include<stdio.h>
#include<iostream>
using namespace std;
class Student
{
    private:
    int admno;
    char sname[20];
    float english,maths,science;
    float total;
    float ctotal()
    {
        total=(english+maths+science);
        return(total);
    }
    public:
        void Takedata()
        {
            cout<<"Enter the value of admno:";
            cout<<" sname :";
            cout<<"eng :";
            cout<<"science:";
            cout<<"maths:";
            cin>>admno;

            cin>>sname;

            cin>>english;

            cin>>science;

            cin>>maths;

        }
        Student(): total(0.0)  //constructor
        {
        }
        friend float func(Student);
        void Showdata()
        {
            cout<<"adm no:"<<admno;
            cout<<"sname:"<<sname;
            cout<<"eng"<<english;
            cout<<"science"<<science;
            cout<<"maths"<<maths;
        }
};
   float func(Student t)
   {
    t.total;
    return t.total;
   }
   int main()
   {
    Student s1;
    s1.Takedata();
    s1.Showdata();
    cout<"total is:";
    cout<<func(s1);
}
