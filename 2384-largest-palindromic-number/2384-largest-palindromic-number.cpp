class Solution {
public:
    string largestPalindromic(string num) {
        int a[11]={0};
        int flag=0,i,c;
        //increasing counter
        for(i=0;i<num.size();i++){
            a[num[i]-'0']++;
        }
        //finding out only one odd value of exist
        for(i=9;i>=0;i--){
            if(a[i]%2){
                if(a[10]==0)
                    a[10]=i+10,flag=1;
                else
                    a[i]--;
            }
        }
        
        num.clear();
        //storing value with higher number first
        for(i=9;i>=1;i--){
            c=0;
            while(c<a[i]/2){
                num+=to_string(i);
                c++;
            }
        }
        
        //no leading zero
        if(num.size()!=0){
           c=0;
            while(c<a[0]/2){
                num+=to_string(0);
                c++;
            }
        }
        //if no odd frequenct no need
        if(flag)
        num=num+to_string(a[10]-10);
        //
         if(num.size()>1){
            c=0;
            while(c<a[0]/2){
                num+=to_string(0);
                c++;
            }
        }
        for(i=1;i<10;i++){
             c=0;
            while(c<a[i]/2){
                num+=to_string(i);
                c++;
            }
        }
        if(num.size()==0)
            num="0";
        return num;
    }
};