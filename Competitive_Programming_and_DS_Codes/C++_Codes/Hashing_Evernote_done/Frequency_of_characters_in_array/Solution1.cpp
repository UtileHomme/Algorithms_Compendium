// https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/tutorial/


#include <iostream>

using namespace std;

int string_hash(char c)
{
  return c-'a';
}

int main()
{
  int freq[26];

  int array_len = sizeof(freq)/sizeof(freq[0]);

  string s = "aabdwdecgc";

  for(int i=0;i<array_len;i++)
  {
    freq[i] = 0;
  }

  int len = s.length();
  for(int k=0;k<len;k++)
  {
    int index = string_hash(s[k]);
    freq[index]++;
  }

  for(int i=0;i<array_len;i++)
  {
    cout<<char(i+'a')<<" "<<freq[i]<<endl;
  }

  return 0;
}
