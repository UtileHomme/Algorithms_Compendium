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
    vector<Interval> insert(vector<Interval> &intervals, Interval newInterval)
    {
       int n = intervals.size(), leftEnd, rightEnd, l, r;
        vector<Interval> res;
        // Find the rightmost interval with start smaller than that of newInterval
        for (l = 0, r = n - 1; l <= r; ) {
            int mid = l + ((r - l) >> 1);
            if (intervals[mid].start > newInterval.start)
                r = mid - 1;
            else l = mid + 1;
        }
        leftEnd = r;

        // Find the leftmost interval with end larger than that of newInterval
        for (l = 0, r = n - 1; l <= r;)
        {
            int mid = l + ((r - l) >> 1);
            if (intervals[mid].end < newInterval.end)
                l = mid + 1;
            else
                r = mid - 1;
        }
        rightEnd = l;

        // Merge newInterval with intervals[leftEnd] and intervals[rightEnd] if necessary
        if (leftEnd >= 0 && intervals[leftEnd].end >= newInterval.start)
        {
            newInterval.start = intervals[leftEnd--].start;
        }

        if (rightEnd < n && intervals[rightEnd].start <= newInterval.end)
        {
            newInterval.end = intervals[rightEnd++].end;
        }

        // Save the intervals sequentially
        for (int i = 0; i <= leftEnd; i++)
        {
            res.push_back(intervals[i]);
        }

        res.push_back(newInterval);

        for (int i = rightEnd; i < n; i++)
        {
            res.push_back(intervals[i]);
        }

        return res;
    }
};

int main()
{
    vector<Interval> A;

    Interval obj1(1, 2);
    Interval obj2(3, 5);
    Interval obj3(6, 7);
    Interval obj4(8, 10);
    Interval obj5(12, 16);

    A.push_back(obj1);
    A.push_back(obj2);
    A.push_back(obj3);
    A.push_back(obj4);
    A.push_back(obj5);

    Interval obj6(4, 9);

    Solution s;

    vector<Interval> B = s.insert(A, obj6);

    for (int i = 0; i < B.size(); i++)
    {
        cout << B[i].start << " " << B[i].end << endl;
    }

    return 0;
}