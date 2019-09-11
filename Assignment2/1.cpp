#include <iostream>
#include <string>
using namespace std;

//----------------------DO NOT CHANGE ANYTHING ABOVE THIS LINE------------------

int main()
{
string s1,s2,s3;
int k=0;
cin>>s1>>s2;
int l1 = s1.length();
int l2 = s2.length();
if (l1>l2)
{
  int s=l1-l2;
  for (int i=0;i<s;i++)
  {
    s2="0"+s2;
    l2++;
  }
}
else
{
  int s=l2-l1;
  for (int i=0;i<s;i++)
  {
    s1="0"+s1;
    l1++;
  }
}

  for (int i=l2-1; i>=0; i--)
  {      if (k==0)
         { k=0;
             if(s1[i]=='0'&&s2[i]=='0')
                   s3="0" + s3;

            else if(s1[i]=='1'&&s2[i]=='1')
                {
                   s3="0" + s3;
                    k=1;
                }
             else s3="1"+ s3;
         }
      else
     { k=0;
               if(s1[i]=='0'&&s2[i]=='0')
               s3="1" + s3;

               else if(s1[i]=='1'&&s2[i]=='1')
                {
                 s3="1" + s3;
                 k=1;
                }
               else {s3="0"+s3;k=1;}
     }

  }
  if (k==1)
  s3="1"+s3;

cout<<s3<<endl;

}
