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
    bool doesIntersect(Interval a, Interval b)
    {
        if (min(a.end, b.end) < max(a.start, b.start))
        {
            return false;
        }
        else
        {
            return true;
        }
    }

    vector<Interval> insert(vector<Interval> &intervals, Interval newInterval)
    {
        int size = intervals.size();

        vector<Interval> result;

        //case 1 where the given set of intervals is empty
        //simply add the newInterval
        if (size == 0)
        {
            result.push_back(newInterval);
            return result;
        }

        // Case : newInterval comes at the beginning or at the end without overlap
        if (newInterval.start > intervals[size - 1].end || newInterval.end < intervals[0].start)
        {
            if (newInterval.end < intervals[0].start)
            {
                result.push_back(newInterval);
            }

            for (int i = 0; i < size; i++)
            {
                result.push_back(intervals[i]);
            }

            if (newInterval.start > intervals[size - 1].end)
            {
                result.push_back(newInterval);
            }

            return result;
        }

        for (int i = 0; i < size; i++)
        {
            bool intersect = doesIntersect(intervals[i], newInterval);

            //if no intersection happens
            if (!intersect)
            {
                result.push_back(intervals[i]);

                if (i < size - 1 && newInterval.start > intervals[i].end && newInterval.end < intervals[i + 1].start)
                {
                    result.push_back(newInterval);
                }

                continue;
            }

            // Now we know the interval overlaps. Lets find out how many intervals overlap.
            int st = i;

            while(i<size && intersect==true)
            {
                i++;
                if(i==size)
                {
                    intersect = false;
                }
                else
                {
                    intersect = doesIntersect(intervals[i], newInterval);
                }
            }

            i--;

            // Now all intervals from "st" to "i" overlap

            Interval intervalObject(min(newInterval.start, intervals[st].start), max(newInterval.end, intervals[i].end));
            result.push_back(intervalObject);

        }

        return result;
    }
};

int main()
{
    vector <Interval> A;

    Interval obj1(3,5);
    Interval obj2(7,9);

    A.push_back(obj1);
    A.push_back(obj2);

    Interval obj3(1,10);

    Solution s;

    vector <Interval> B = s.insert(A, obj3);

    for(int i=0; i<B.size(); i++)
    {
        cout<<B[i].start<<" "<<B[i].end<<endl;
    }

    return 0;
}