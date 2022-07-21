#include<bits/stdc++.h>
using namespace std;

typedef long long LL;
typedef vector<LL> VL;
typedef vector<string> VS;
typedef vector<pair<LL, LL>> VP;
typedef vector<VL> VV;

#define uniq(v) v.erase(unique(v.begin(), v.end()), v.end());
#define pb push_back
#define F first
#define S second
#define srt(v) sort(v.begin(), v.end())
#define rev(v) reverse(v.begin(), v.end())
#define all(v) (v).begin(), (v).end()
#define no "NO"
#define stp setprecision
#define yes "YES"
#define con continue;
#define PI 2*acos(0)


template<class C, typename T>
bool contains(C&& c, T t) {
    return std::find(std::begin(c), std::end(c), t) != std::end(c);
};

struct student {
    int matriculation_number;
    string given_name, surname, email_address, course;
    bool task[6];
};

void set_data(student&);
void output(student);

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif


    student st;
    set_data(st);
    output(st);





    cerr << "Time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    if (((float)clock() / CLOCKS_PER_SEC) >= 1.0)
        cerr << "Need to optimize!!" << endl;
    else
        cerr << "RuntimeOKAY!" << endl;

    return 0;
}

void set_data(student &data) {
    data.matriculation_number = 3164924;
    data.given_name = "Muntasir Ebna";
    data.surname = "Helal";
    data.email_address = "muntasir.helal@stud.uni-duisburg-essen.de";
    data.course = "B.Sc. ISE CE";

    for (int i = 0; i <= 5; i++) {
        data.task[i] = 0;
    }

}

void output(student data) {
    cout << "matr.no.: " << data.matriculation_number << endl;
    cout << "name: " << data.given_name << " " << data.surname << endl;
    cout << "email: " << data.email_address << endl;
    cout << "course of studies: " << data.course << endl;
    cout << boolalpha << "tasks passed: ";
    for (int i = 0; i <= 5; i++) {
        cout << i + 1 << " " << data.task[i] << " ";
    }
}
