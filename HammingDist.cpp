/*
The Hamming distance between two integers is the number of positions at which the corresponding bits are different.

Given two integers x and y, calculate the Hamming distance.

Note:
0 ≤ x, y < 231.

Example:

Input: x = 1, y = 4

Output: 2

Explanation:
1   (0 0 0 1)
4   (0 1 0 0)
       ↑   ↑

The above arrows point to positions where the corresponding bits are different.
*/
#include <iostream>
using namespace std;

int hammingDistance(int x, int y)
{
    int count = 0;
    for (int i = 0; i < 32; i++) {
        bool xVal = x & (1 << i);
        bool yVal = y & (1 << i);
        count += xVal ^ yVal;
    }
    return count;
}

 int main(int argc, char const *argv[]) {
     int x,y;
     cin>>x>>y;
     cout<<hammingDistance(x,y)<<endl;
     return 0;
 }
