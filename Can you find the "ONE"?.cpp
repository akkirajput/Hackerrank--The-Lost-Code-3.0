
PRACTICE
COMPETE
JOBS
LEADERBOARD
Search
1
 ankitchouhan819 
All Contests  THE LOST CODE 3.0  Can you find the "ONE"?
Can you find the "ONE"?locked
by saksham20189575
Problem
Submissions
Leaderboard
Discussions
Editorial
Submitted 3 minutes ago • Score: 100.00Status: Accepted
 Test Case #0
 Test Case #1
 Test Case #2
 Test Case #3
 Test Case #4

Submitted Code
Language: C++

 Open in editor
1
#include <cmath>
2
#include <cstdio>
3
#include <vector>
4
#include <iostream>
5
#include <algorithm>
6
using namespace std;
7
​
8
​
9
int main() {
10
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
11
    int t,n,count=0;
12
    cin>>t;
13
    while(t--)
14
    {
15
        cin>>n;
16
        int a[n];
17
        for(int i=0;i<n;i++)
18
        {
19
            cin>>a[i];
20
        }
21
        
22
        for(int i=0;i<n-1;i++)
23
        {
24
            for(int j=i+1;j<n;j++)
25
            if(a[i]==a[j])
26          {
27
                count++;
28          }
30
        }
31
        if(count==0)
32
         cout<<"Yes"<<endl;
33
        else
34
        {cout<<"No"<<endl;
35
        count=0;} 
36
    }
37
    return 0;
38
}
39
​
Contest Calendar | Interview Prep | Blog | Scoring | Environment | FAQ | About Us | Support | Careers | Terms Of Service | Privacy Policy | Request a Feature

