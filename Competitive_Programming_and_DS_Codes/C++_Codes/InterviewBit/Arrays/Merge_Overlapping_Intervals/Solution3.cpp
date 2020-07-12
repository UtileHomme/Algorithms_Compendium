// https://www.interviewbit.com/problems/merge-overlapping-intervals/

#include <iostream>
#include <bits/stdc++.h>
#include <climits>

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

bool comp(Interval i1, Interval i2)
{
    return (i1.start < i2.start);
}

class Solution
{
public:
    vector<Interval> mergeOverlappingIntervals(vector<Interval> &A)
    {
        if(A.size()<2)
        {
            return A;
        }

        sort(A.begin(), A.end(), comp);

        vector <Interval> res;

        res.push_back(A[0]);

        for(int i=1; i<A.size(); i++)
        {
            if(res.back().end < A[i].start)
            {
                res.push_back(A[i]);
            }
            else
            {
                res.back().end = max(res.back().end, A[i].end);
            }
        }

        return res;
    }
};

int main()
{
    Solution s;

    vector<Interval> A;

    Interval obj1(1, 3);
    Interval obj2(2, 6);
    Interval obj3(8, 10);
    Interval obj4(15, 18);

    A.push_back(obj1);
    A.push_back(obj2);
    A.push_back(obj3);
    A.push_back(obj4);

    vector<Interval> B = s.mergeOverlappingIntervals(A);

    for (int i = 0; i < B.size(); i++)
    {
        cout << B[i].start << " " << B[i].end << endl;
    }

    return 0;
}