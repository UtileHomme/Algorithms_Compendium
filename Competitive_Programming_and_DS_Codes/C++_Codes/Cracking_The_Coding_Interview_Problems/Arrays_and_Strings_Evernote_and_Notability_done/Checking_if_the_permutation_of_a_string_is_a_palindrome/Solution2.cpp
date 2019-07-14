// CCI Problem 1.4 (Page 60)

//Given a string, write a function to check if it is a permutation of a pallindrome.


#include <iostream>
#include <string>


using namespace std;

int getCharIndex(char c)
{
  int index = -1;

  if(c>='a' && c<='z')
  {
    return c-'a';
  }
  else if(c>='A' && c<='Z')
  {
    return c-'A';
  }

  return index;
}


bool isPermutationOfPalindrome(const string &str)
{
  int freq[26] = {0};
  int oddCnt = 0;
  int index = 0;

  for(const char c: str)
  {
    index = getCharIndex(c);

    if(index!=-1)
    {
      freq[index]++;

      if(freq[index]%2==1)
      {
        oddCnt++;
      }
      else
      {
        oddCnt--;
      }
    }
  }

  return (oddCnt<=1);

}

int main()
{
  string str("Tact Coa");
  string str1("A big Cat");
  string str2("Aba cbc");

  cout<<"Does "<<str<<" have a string whose permutation is a palindrome?"<<endl;
  cout<<isPermutationOfPalindrome(str)<<endl;
  cout<<"Does "<<str1<<" have a string whose permutation is a palindrome?"<<endl;
  cout<<isPermutationOfPalindrome(str1)<<endl;
  cout<<"Does "<<str2<<" have a string whose permutation is a palindrome?"<<endl;
  cout<<isPermutationOfPalindrome(str2)<<endl;
}

//Time Complexity = O(n)
