class Solution {
public:
    string interpret(string command) {
        int i,n=command.length();
        string str;
        for(i=0;i<n;i++){
            if(command[i]=='G')
                str+='G';
            else if(command[i]=='('){
                if(command[i+1]==')'){
                    str+='o';
                    i+=1;
                }
                else{
                    str+="al";
                    i+=3;
                }
            }
        }
        return str;
    }
};