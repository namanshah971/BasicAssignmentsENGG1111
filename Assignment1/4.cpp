#include <iostream>

const int MAXDIM = 10;

//----------------------DO NOT CHANGE ANYTHING ABOVE THIS LINE------------------

 void read_matrix(int matrix[][MAXDIM], int &dim)
 {
   std::cin>>dim;
   for(int j=0;j<dim;j++)
   {
     for (int i=0;i<dim;i++)
     {
       std::cin>>matrix[j][i];
     }
   }
 }

void display_inner_cw_rotated (int matrix[][MAXDIM], int dim)
{
  for (int i=1;i<dim-1;i++)
  {
    for (int j=dim-2;j>0;j--)
    {
      std::cout<<matrix[j][i]<<" ";
    }
     std::cout<<std::endl;
  }
}
//----------------------DO NOT CHANGE ANYTHING BELOW THIS LINE------------------

int main()
{
  int matrix[MAXDIM][MAXDIM]{};
  int dim = 0;

  read_matrix(matrix, dim);
  display_inner_cw_rotated(matrix, dim);

  return 0;
}
