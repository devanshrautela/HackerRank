#include <cmath>
#include <string>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Student
{
    private :
        int age;
        string first_name;
        string last_name;
        char standard;
    public:
    Student()
    {}
        void set_age(int age)
        {
            this->age = age;
        }
        int get_age()
        {
            return age;
        }
        void set_first_name(string name)
        {
            this->first_name=name;
        }
        string get_first_name()
        {
            return first_name;
        }
        void set_last_name(string name)
        {
            last_name=name;
        }
        string get_last_name()
        {
            return last_name;
        }
        void set_standard(int standard)
        {
            this->standard=standard;
        }
        int get_standard()
        {
            return standard;
        }
        string to_string()
        {
            string data = std::to_string(age) + "," + first_name + "," + last_name
            + "," + std::to_string(standard);
            return data;
        }
        ~Student() {}
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int age, standard;
    string first_name, last_name;
    
    cin>>age>>first_name>>last_name>>standard;
    
    Student st;
    st.set_age(age);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    st.set_standard(standard);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
