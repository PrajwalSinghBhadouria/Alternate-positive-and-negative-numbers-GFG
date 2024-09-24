//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    void rearrange(vector<int> &arr) {
        // code here
        vector<int> p;
        vector<int> n;
        for(int i=0; i<arr.size(); i++){
            if(arr[i]>=0){
                p.push_back(arr[i]);
            }
            else{
                n.push_back(arr[i]);
            }
        }
        vector<int> v;
        int j=0,k=0;
        for(int i=0; i<arr.size(); i++){
            if(j<p.size() && k<n.size()){
                if(i%2==0){
                    v.push_back(p[j]);
                    j++;
                }
                else{
                    v.push_back(n[k]);
                    k++;
                }
                continue;
            }
            if(j<p.size()){
                v.push_back(p[j]);
                j++;
            }
            if(k<n.size()){
                v.push_back(n[k]);
                k++;
            }
            
        }
        for(int i=0; i<arr.size(); i++){
            arr[i]=v[i];
        }
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        ob.rearrange(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
