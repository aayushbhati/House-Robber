class Solution {
public:
    int rob(vector<int>& arr) {
        int n = arr.size();
        
        if(n == 1) return arr[0];
        if(n == 2) return max(arr[0],arr[1]);
        if(n == 3) return max(arr[2] + arr[0],arr[1]);
        int p3 = arr[0];
        int p2 = arr[1];
        int p1 = arr[2] + arr[0] ;
        for(int i = 3 ; i < n ;i++){
            int cur = arr[i] + max(p2 , p3);
            p3 = p2;
            p2 = p1;
            p1 = cur;
        }
        return max(p1,p2);
    }
};
