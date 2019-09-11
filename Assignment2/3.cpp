#include <iostream>
#include <string>

using namespace std;

struct Point {
    double x;
    double y;
};

struct Circle {
    string tag;
    Point center;
    double radius;
};

//----------------------DO NOT CHANGE ANYTHING ABOVE THIS LINE------------------


int main()
{
int N;
double d;
string tag;
cin>>N;
Circle * c = new Circle[N];

for (int i=0; i<N; i++)
{
  cin>>c[i].tag>>c[i].center.x>>c[i].center.y>>c[i].radius;
}
for (int j=0;j<N;j++)
  {

     cout<<c[j].tag<<":";
          for (int k=0;k<N;k++)
             { if (k==j){continue;}
               d = ((c[j].center.x)-(c[k].center.x))*((c[j].center.x)-(c[k].center.x))+((c[j].center.y)-(c[k].center.y))*((c[j].center.y)-(c[k].center.y));
               if (d>(((c[j].radius)+(c[k].radius))*((c[j].radius)+(c[k].radius)))||d<(((c[j].radius)-(c[k].radius))*((c[j].radius)-(c[k].radius))))
               { continue;}
                 cout<<" "<<c[k].tag;
            }
cout<<endl;
  }
}
