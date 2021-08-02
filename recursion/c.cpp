class Solution {
public:
    
    void solve (vector<string>&v,long long  n, string str)
    {
        if(n==0)
        {
           v.push_back(str)
            
            return ;
        }
        
        if(n%2!=0)
        {
        string op1=str;
        string op2=str;
        string op3=str;
        string op4=str;
        string op5=str;
            
            op1.push_back('0');
            op2.push_back('2');
            op3.push_back('4');
            op4.push_back('6');
            op5.push_back('8');            
            solve(v,n-1,op1);
            solve(v,n-1,op2);
            solve(v,n-1,op3);
            solve(v,n-1,op4);
            solve(v,n-1,op5);
        }
        else if(n%2==0){
            
            string op1=str;
            string op2=str;
            string op3=str;
            string op4=str;
            
                op1.push_back('2');
                op2.push_back('3');
                op3.push_back('5');
                op4.push_back('7');           
                solve(v,n-1,op1);
                solve(v,n-1,op2);
                solve(v,n-1,op3);
                solve(v,n-1,op4);
           
            
        }
    return ;
    }
    
    int vGoodNumbers(long long n) {
        vector<string> v;
        string str;
        
        solve(v,n,str);
        return v.size();
        
        
        
    }
};