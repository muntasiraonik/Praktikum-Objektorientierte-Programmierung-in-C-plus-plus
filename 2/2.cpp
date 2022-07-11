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


struct Bus {
    int current_number_of_Passengers;
    int maximum_number_of_Passengers;
};

void init(Bus& b) {
    b.current_number_of_Passengers = 0;
    b.maximum_number_of_Passengers = 0;
}

void output(Bus& b) {
    // later
    cout << " " << endl;
}

struct Stop {
    string Stop;
    int total_number_StoppedBus, total_number_pass_got_on, total_number_pass_got_off;
    // pointer
    // will add later
}



int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif



    cerr << "Time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    if (((float)clock() / CLOCKS_PER_SEC) >= 1.0)
        cerr << "Need to optimize!!" << endl;
    else
        cerr << "RuntimeOKAY!" << endl;

    return 0;
}