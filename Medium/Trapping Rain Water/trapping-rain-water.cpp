//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        long long left = 0;
        long long right = n-1;
        long long leftmax = 0;
        long long rightmax = 0;
        long long water = 0;
        
        while(left <= right){
            
            if(arr[left] <= arr[right]){
                if(arr[left] >= leftmax){
                    leftmax = arr[left];
                }
                else
                    water += leftmax - arr[left];

                left++;
            }
            else{
                if(arr[right] >= rightmax){
                    rightmax = arr[right];
                }
                else
                    water += rightmax - arr[right];
                right--;
            }
        }
        return water;
        
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends