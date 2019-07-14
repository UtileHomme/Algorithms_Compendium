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
        int size = intervals.size();

        int i,j;

        int b = newInterval.start;
        int e = newInterval.end;

        intervals.push_back(newInterval);

        sort(intervals.begin(), intervals.end(), cmp);

        i=1, j=0;

        while(i<intervals.size())
        {
            if(intervals[j].end >= intervals[i].start)
            {
                intervals[j].end = max(intervals[i].end, intervals[j].end);
            }
            else
            {
                j++;
                intervals[j] = intervals[i];
            }

            i++;
        }

        intervals.erase(intervals.begin()+j+1, intervals.end());

        return intervals;

    }
};

int main()
{
    vector <Interval> A;

    Interval obj1(1,2);
    Interval obj2(3,6);

    A.push_back(obj1);
    A.push_back(obj2);

    Interval obj3(8,10);

    Solution s;

    vector <Interval> B = s.insert(A, obj3);

    for(int i=0; i<B.size(); i++)
    {
        cout<<B[i].start<<" "<<B[i].end<<endl;
    }

    return 0;
}