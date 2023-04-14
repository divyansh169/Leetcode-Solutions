//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int N){
        
        int revnum = 0; 

    int N2 = N;
    int N1;
    int count = 0;

    while (N2 > 0)
    {

        N1 = N2 % 10;
        revnum = (revnum) + N1*N1*N1;
        N2 = N2 / 10;
    }

    if (revnum == N)
    {
        return "Yes";
    }
    else return "No";
        
        // code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends