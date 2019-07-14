// https://www.geeksforgeeks.org/converting-decimal-number-lying-between-1-to-3999-to-roman-numerals/

// https://www.interviewbit.com/problems/integer-to-roman/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

string printRoman(int num)
{
  string s;

  if(num<=0)
  {
    cout<<"Invalid Number";
    return s;
  }

  while(num!=0)
  {
    if(num>=1000)
    {
      int k = num/1000;

      for(int i=0; i<k;i++)
      {
        s.push_back('M');

      }
      num = num%1000;
    }

    else if(num>=500 && num<900)
    {
      int k = num/500;
      for(int i=0;i<k;i++)
      {
        s.push_back('D');

      }
      num = num%500;
    }

    else if(num>=900 && num<1000)
    {
      s.push_back('C');
      s.push_back('M');
      num = num%100;
    }

    else if(num>=100 && num<400)
    {
      int k = num/100;
      for(int i=0;i<k;i++)
      {
        s.push_back('C');

      }
      num = num%100;
    }

    else if(num>=400 && num<500)
    {
      s.push_back('C');
      s.push_back('D');
      num = num % 100;
    }

    else if(num>=50 && num<90)
    {
      int k = num/50;
      for(int i=0;i<k;i++)
      {
        s.push_back('L');

      }
      num = num%50;
    }

    else if(num>=90 && num<100)
    {
      s.push_back('X');
      s.push_back('C');
      num = num%10;
    }

    else if(num>=10 && num<40)
    {
      int k = num/10;
      for(int i=0;i<k;i++)
      {
        s.push_back('X');

      }
      num = num%10;
    }

    else if(num>=40 && num<50)
    {
      s.push_back('X');
      s.push_back('L');
      num = num%10;
    }

    else if(num>=5 && num<9)
    {
      int k = num/5;
      for(int i=0;i<k;i++)
      {
        s.push_back('V');

      }
      num = num%5;
    }

    else if(num>=9 && num<10)
    {
      s.push_back('I');
      s.push_back('X');
      num = 0;
    }

    else if(num>=1 && num<4)
    {
      int k = num;
      for(int i=0;i<k;i++)
      {
        s.push_back('I');

      }
      num=0;
    }

    else if(num>=4 && num<5)
    {
      s.push_back('I');
      s.push_back('V');
        num = 0;
    }
  }

  return s;

}

int main()
{
  int num = 1234;

  string k = printRoman(num);

  cout<<k;

  return 0;
}
