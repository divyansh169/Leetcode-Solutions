//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(long int N){
        
        long int N2=N;
        long int N1;
        long int count=0;
        while (N2>0){
            
            N1= N2%10;
            
            if(N1!=0 && N%N1==0){
                count++;
            }
            N2= N2/10;
            
            
            
        }
        return count;
        
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends