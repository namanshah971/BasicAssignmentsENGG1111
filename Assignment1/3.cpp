#include <iostream>

//----------------------DO NOT CHANGE ANYTHING ABOVE THIS LINE------------------

void read_lists(int arr1[],int arr2[],int arr3[],int n)
{
  for(int i=0;i<n;i++)
  std::cin>>arr1[i];
  for(int i=0;i<n;i++)
  std::cin>>arr2[i];
  for(int i=0;i<n;i++)
  std::cin>>arr3[i];
}

void display_common_integers(int arr1[], int arr2[], int arr3[], int n)
{
  int a[10000],b[10000],z=0,s=0;
  for (int i=0;i<n;i++)
  {
    for (int j=0;j<n;j++)
    {
      if (arr1[i]==arr2[j])
     {
       a[z++]=arr1[i];break;
     }
    }
  }
  for (int m=0;m<z;m++)
  {
    for (int k=0;k<n;k++)
    {
      if (arr3[k]==a[m])
      {
        b[s++]=arr3[k];break;
      }
    }
  }

if (s)
{
  for (int j=0;j<s;j++)
  std::cout<<b[j]<<std::endl;
}
else
{
  std::cout<<"None"<<std::endl;
}


}

//----------------------DO NOT CHANGE ANYTHING BELOW THIS LINE------------------

int main()
{
  const int SIZE = 8;
  int arr1[SIZE]{};
  int arr2[SIZE]{};
  int arr3[SIZE]{};

  read_lists(arr1, arr2, arr3, SIZE);
  display_common_integers(arr1, arr2, arr3, SIZE);

  return 0;
}
