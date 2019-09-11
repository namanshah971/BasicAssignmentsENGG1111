#include <iostream>

const int MAXDIM = 10;

//----------------------DO NOT CHANGE ANYTHING ABOVE THIS LINE------------------

void read_matrix (char matrix [][MAXDIM],int &dim)
{
  std::cin>>dim;
  for (int i=0;i<dim;i++)
  {
    for (int j=0;j<dim;j++)
    {
      std::cin>>matrix[i][j];
    }
  }
}

void display_with_fill (char matrix[][MAXDIM], int dim )
{ char matrixa[MAXDIM][MAXDIM];
  for (int i=0;i<dim;i++)
  {
    for (int j=0;j<dim;j++)
    {
      if(matrix[i][j]=='x')
      {
        for (int m=0;m<dim;m++)
         {
          matrixa[i][m]='x';
          matrixa[m][j]='x';
          }
        }
      }
     }

     for (int i=0;i<dim;i++)
     {
       for (int j=0;j<dim;j++)
       {
         if (matrixa[i][j]!='x')
           matrixa[i][j]=matrix[i][j];
       }
    }



     for (int k=0;k<dim;k++)
     {
       for (int l=0;l<dim;l++)
       {std::cout<<matrixa[k][l]<<" ";}
       std::cout<<std::endl;
     }

  }



//----------------------DO NOT CHANGE ANYTHING BELOW THIS LINE------------------

int main()
{
  char matrix[MAXDIM][MAXDIM]{};
  int dim = 0;

  read_matrix(matrix, dim);
  display_with_fill(matrix, dim);

  return 0;
}
