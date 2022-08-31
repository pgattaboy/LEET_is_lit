class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        int sum=0,i,n=salary.size();
        for(i=1;i<n-1;i++){
            sum+=salary[i];
        }
        cout<<sum<<endl;
        return (double)sum / (double) (n-2) ;
    }
};