class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    sort(a.begin(),a.end());  
        
        int start, end;
        long long diff, minDiff = INT_MAX;  
        for(int i=0; i<=n-m; i++) {
            start = i;
            end = m+i-1;
            diff = a[end] - a[start];
            if(minDiff > diff) {  
                minDiff = diff;
            }
        }
        
        return minDiff;
    
    }   
};


