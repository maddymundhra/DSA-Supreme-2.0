// Convert Km to miles
// 1 km = 0.621371 miles
#include<bits/stdc++.h>
using namespace std;
float KmToMiles(float km)
{
    float _1kmtomile=0.621371;
    float miles=km * _1kmtomile;
    return miles;
}
int main()
{
    float km;
    cin>>km;
    cout<<KmToMiles(km)<<endl;
}
