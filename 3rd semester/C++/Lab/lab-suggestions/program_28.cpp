// Use the OOP to solve problem 27.
#include<bits/stdc++.h>
using namespace std;

class myclass
{
    vector<int>Vector;
    public:
        void set(vector<int>v)
        {
            Vector = v;
        }
        int Min()
        {
            int mn = INT_MAX;
            for(auto it : Vector)
                mn = min(mn, it);
            return mn;
        }
        int Max()
        {
            int mx = INT_MIN;
            for(auto it : Vector)
                mx = max(mx, it);
            return mx;
        }
        long long int sum()
        {
            long long int s = 0LL;
            for(auto it : Vector)
                s += it;
            return s;
        }
        double Average()
        {
            return (double)(sum()*1.0 / (int)Vector.size()*1.0);
        }
        void display(myclass object)
        {
            cout<<"Min of element = "<<object.Min()<<endl;
            cout<<"Max of element = "<<object.Max()<<endl;
            cout<<"Sum of element = "<<object.sum()<<endl;
            cout<<"Average of element = "<<object.Average()<<endl;
        }
};
int main()
{
    int n;
    cout<<"Enter number of element - ";
    cin>>n;
    cout<<"Enter the element - "<<endl;
    vector<int>v(n);
    for(auto &it : v)
        cin>>it;
    myclass A;
    A.set(v);
    A.display(A);
    return 0;
}



