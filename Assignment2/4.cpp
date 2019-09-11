#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;

//----------------------DO NOT CHANGE ANYTHING ABOVE THIS LINE------------------



int main()
{
  string filename,newfile;
  string x;
  int r=0,no_lines=0;
  int M;
  cin>>filename;
  ifstream fin,fin1;
  ofstream fout;

  fin1.open(filename.c_str());
  fin1.seekg(0,ios::end);
  int t=fin1.tellg();
  fin1.close();

  fin.open(filename.c_str());
 cin>>M;

  for (int i=filename.length()-1;i>=0;i--)
  {
    if (filename[i]!='/')
    newfile= filename[i]+newfile;
    else
    break;
  }
  newfile.insert(newfile.length()-4,"_formatted");
  newfile="yourOutput/"+newfile;
  fout.open(newfile.c_str());

  if (fin.fail()||fout.fail())
  exit(1);



  while(r<M)
  {
    for (int i=0;i<10;i++)
    {
      fout<<i; r++;
      if(r==M)
      break;
    }
  }
  fout<<endl;

 while(fin>>x)
 { int k=0,no_words=0,kit=0;
   string temp="";
   k=x.length();
   if (k>=M)
   {no_words=1;temp=x;}
   else
   {
     while(k<=M)
     { no_words++;
       if(no_words==1)
       {temp=temp+x;}
       else {temp=temp+" "+x;}

       if(fin.tellg()==t-1) {kit++;break;}
       fin>>x;
       k=1+x.length()+k;
     }

   if (kit==0)
   {fin.seekg(-x.length(),ios::cur);}
   }
   if (kit==0)
   { int count=0;
   while(temp.length()<M)
   {
     for (int j=0;j<temp.length()-1;j++)
     {
       if (temp.length()==M) {break;}
       if (temp[j]==' '&& temp[j+1]!=' ')
       {
         temp.insert(j++," ");count++;
       }

     } if (count==0){break;}
   }
 }
   fout<<temp<<endl;

   no_lines++;
 }

 cout<<no_lines<<" formatted lines written to "<<newfile<<endl;
 fin.close();
 fout.close();

}
