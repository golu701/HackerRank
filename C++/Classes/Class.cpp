#include <iostream>
#include<string.h>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student 
{
    private:
        int age,stand;
        string fname,lname,str;
    public:
        void set_age(int a)
        {
            age=a;
        }
        void set_standard(int a)
        {
            stand=a;
        }
        void set_first_name(string a)
        {
            fname=a;
        }
        void set_last_name(string a)
        {
            lname=a;
        }
        int get_age()
        {
            return age;
        }
        string get_last_name()
        {
            return lname;
        }
        string get_first_name()
        {
            return fname;
        }
        int get_standard()
        {
            return stand;
        }
        string to_string()
        {   
            string s;
            stringstream ss;
            ss<<age<<","<<fname<<","<<lname<<","<<stand;
            return ss.str();

        }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
