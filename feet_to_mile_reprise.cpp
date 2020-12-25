#include<iostream>
using namespace std;
float feettomile(float feet)
{
    float goj = feet/3;
    float mile = goj/1760;
    return mile;
}
int main()
{
    float f;
    cin>>f;
    float r = feettomile(f);
    cout<<"Required mile is "<<r<<endl;

    return 0;
}
