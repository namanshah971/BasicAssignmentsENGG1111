#include <iostream>
#include <string>
using namespace std;

//----------------------DO NOT CHANGE ANYTHING ABOVE THIS LINE------------------

int main()
{
string s,t,temp;
getline(cin,s);
cin>>t;
for (int i=0; i<(s.length()-t.length()+1);i++)
 { temp="";
  if (s[i]==' ') {continue;}
  int j=i, r=0;

      while (r<t.length()&&j<s.length())
    {
      if(s[j]!=' ')
      {
        temp = temp+s[j++];r++;
      }
      else j++;
    }


     for (int x=0;x<t.length();x++)
     {
       for (int y=0;y<t.length()-1;y++)
       {
         if (t[y]>t[y+1])
         {
           char asc=t[y];
           t[y]=t[y+1];
           t[y+1]=asc;
         }
         if (temp[y]>temp[y+1])
         {
           char asc=temp[y];
           temp[y]=temp[y+1];
           temp[y+1]=asc;
         }
       }
     }
    if (temp==t)
    {
       cout<<i<<" "<<j-1<<endl;
    }

  }
 }
