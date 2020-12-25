#include<iostream>
using namespace std;
float f(float feet);
float g(float goj);
float feettomile(float feet);
int main()
{
    float f;cin>>f;
    float r = feettomile(f);
    cout<<"Required mile is "<<r<<endl;
}

float feettomile(float feet)
{
    float goj = f(feet);
    float mile = g(goj);
    return mile;
}
float f(float feet)
{
    float g = feet/3;
    return g;
}
float g(float goj)
{
   float m = goj/1760;
    return m;
}
