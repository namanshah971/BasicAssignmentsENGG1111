#include <iostream>

const int SIZE = 8;
//----------------------DO NOT CHANGE ANYTHING ABOVE THIS LINE------------------

//   Write your function definitions here
void read_array(int arr[])
{
  for (int i=0;i<SIZE;i++)
  std::cin>>arr[i];
}
int read_number_of_shifts()
{
  int k;
  std::cin>>k;
  return k;
}
void shift_array(int arr[],int n)
{ int b[SIZE];
  if (n>0)
  {
    int l=n%SIZE,k=0;
     for (int i=0; i<SIZE-l; i++)
       b[i+l]=arr[i];
     for (int j=SIZE-l;j<SIZE; j++)
       b[k++]=arr[j];
  }
   else
   {
     int l= (-n)%SIZE,m=SIZE-1;
     for (int i=m; i>l-1; i--)
       b[i-l]=arr[i];
     for (int i=l-1;i>=0; i--)
       b[m--]=arr[i];
   }

   for(int z=0;z<SIZE;z++)
   {
     arr[z]=b[z];
   }

}
//----------------------DO NOT CHANGE ANYTHING BELOW THIS LINE------------------
int main()
{
  int arr[SIZE];

  read_array(arr);
  int shifts = read_number_of_shifts();
  shift_array(arr, shifts);

  for (int i = 0; i < SIZE; ++i)
  {
    std::cout << arr[i] << ' ';
  }
  std::cout << std::endl;

  return 0;
}
