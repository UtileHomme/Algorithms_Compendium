// https://www.interviewbit.com/problems/merge-intervals/

// https://www.geeksforgeeks.org/insert-in-sorted-and-non-overlapping-interval-array/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct Interval
{
    int start;
    int end;

    Interval()
    {
        start = 0;
        end = 0;
    }

    Interval(int s, int e)
    {
        start = s;
        end = e;
    }
};

class Solution
{
  public:


    static bool cmp(Interval a, Interval b)
    {
        return a.start <= b.start;
    }

    vector<Interval> insert(vector<Interval> &intervals, Interval newInterval)
    {
       vector <Interval> res;

       int index = 0;

       while(index<intervals.size() && intervals[index].end < newInterval.start)
       {
           res.push_back(intervals[index++]);
       }

       while(index<intervals.size() && intervals[index].start <= newInterval.end)
       {
           newInterval.start = min(newInterval.start, intervals[index].start);
           newInterval.end = max(newInterval.end, intervals[index].end);
           index++;
       }

       res.push_back(newInterval);

       while(index < intervals.size())
       {
           res.push_back(intervals[index++]);
       }

       return res;

    }
};

int main()
{
    vector <Interval> A;

    Interval obj1(1,2);
    Interval obj2(3,5);
    Interval obj3(6,7);
    Interval obj4(8,10);
    Interval obj5(12,16);

    A.push_back(obj1);
    A.push_back(obj2);
    A.push_back(obj3);
    A.push_back(obj4);
    A.push_back(obj5);

    Interval obj6(4,9);

    Solution s;

    vector <Interval> B = s.insert(A, obj6);

    for(int i=0; i<B.size(); i++)
    {
        cout<<B[i].start<<" "<<B[i].end<<endl;
    }

    return 0;
}