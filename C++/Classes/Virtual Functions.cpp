#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Person
{
    public:
        string name;
        int age;
        void virtual getdata()        
        {
            cin>>name>>age;
        }
        void virtual putdata()
        {
            cout<<name<<" "<<age<<" ";
        }
};
class Professor: public Person
{
     int publication,id;
    static int cur_id;
    public:
        Professor()
        {
            id=++cur_id;
        }
       
        void getdata()
        {   
            Person::getdata();
            cin>>publication;
        }
        void putdata()
        {
            Person::putdata();
            cout<<publication<<" "<<id<<endl;
        }
                
};

class Student: public Person
{
        string name;
        static int cur_id;
        int id;
    public:
    Student()
    {
        id=++cur_id;
    }
       
        int sum=0;
        void getdata()
        {
            Person::getdata();
            for(int i=0;i<6;i++)
            {
                int marks;
                cin>>marks;
                sum+=marks;
            }
                
        }
        void putdata()
        {
            Person::putdata();
            cout<<sum<<" "<<id<<endl;
        }
};

int Professor::cur_id =0;
int Student::cur_id = 0;
int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
