#include <iostream>

//----------------------DO NOT CHANGE ANYTHING ABOVE THIS LINE------------------

void read_board (char board[], int SQUARES)
{
 for (int i=0; i<SQUARES;i++)
 {
   std::cin>>board[i];
 }
}
 char evaluate_board (char board[], int SQUARES)
 { int n=0;
   if (board[0]==board[1] && board[0]==board[2] )
   {
     return board[0];
   }
   else if (board[3]==board[4] && board[3]==board[5] )
   {
     return board[3];
   }
   else if (board[6]==board[7] && board[6]==board[8] )
   {
     return board[6];
   }
   else if (board[0]==board[3] && board[0]==board[6] )
   {
     return board[0];
   }
   else if (board[4]==board[1] && board[4]==board[7] )
   {
     return board[1];
   }
   else if (board[2]==board[5] && board[8]==board[2] )
   {
     return board[8];
   }
   else if (board[0]==board[4] && board[0]==board[8] )
   {
     return board[8];
   }
   else if (board[2]==board[4] && board[6]==board[2] )
   {
     return board[6];
   }
   if(n==0)
   {
     for (int j=0; j<SQUARES;j++)
     {
       if (board[j]!='x'&& board[j]!='o')
       return 'u';
     }
   }
   return 'd';
 }

//----------------------DO NOT CHANGE ANYTHING BELOW THIS LINE------------------

int main()
{
  const int SQUARES = 9;

  char board[SQUARES];

  read_board(board, SQUARES);
  char result = evaluate_board(board, SQUARES);

  switch (result)
  {
    case 'x':
    case 'o':
      std::cout << "Player " << result << " wins!!" << std::endl;
      break;
    case 'd':
      std::cout << "No winner. It's a draw!!" << std::endl;
      break;
    case 'u':
      std::cout << "No winner, but game is not over yet. Please continue." << std::endl;
      break;
    default:
      std::cout << "Sorry, I am broken." << std::endl;
  }

  return 0;
}
