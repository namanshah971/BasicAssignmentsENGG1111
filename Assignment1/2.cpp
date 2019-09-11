#include <iostream>

//----------------------DO NOT CHANGE ANYTHING ABOVE THIS LINE------------------
void read_word(char word[],int &word_length)
{
  std::cin>>word_length;
  for (int i=0;i<word_length;i++)
  std::cin>>word[i];
}
 char read_target()
 {
   char a;
   std::cin>>a;
   return a;
 }
void delete_target(char word[], int &word_length,char target)
 { char b[10];
   int a=0,k=0;
  for (int i=0;i<word_length; i++)
  {
    if(word[i]!=target)
    {b[a++]=word[i];
      k++;}
  }
  word_length=k;
  for (int j=0;j<word_length;j++)
  word[j]=b[j];
 }

//----------------------DO NOT CHANGE ANYTHING BELOW THIS LINE------------------

int main()
{
  const int MAXLENGTH = 10;

  char word[MAXLENGTH]{};
  int word_length = 0;
  read_word(word, word_length);

  char target = read_target();

  delete_target(word, word_length, target);

  for (int i = 0; i < word_length; ++i)
  {
    std::cout << word[i];
  }
  std::cout << std::endl;

  return 0;
}
