#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    add code for struct here.
*/
struct Student
    {
    int age;
    string first_name;
    string  last_name;
    int standard;
    
};
typedef struct Student Student;

int main() {
    Student st;
    string a,b;
    cin >> st.age ;cin >> a;cin >> b;cin >> st.standard;
	st.first_name = a;st.last_name = b;

    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;
    
    return 0;
}

