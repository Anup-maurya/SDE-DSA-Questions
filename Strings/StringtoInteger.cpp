// 8. String to Integer (atoi)
// Implement the myAtoi(string s) function, which converts a string to a 32-bit signed integer (similar to C/C++'s atoi function).

class Solution {
public:
    int myAtoi(string s) {
        int result=0;    
        int i=0;
        int sign=1;
    
        while(i<s.size()&&s[i]==' ')i++; 
        
        if(s[i]=='-'||s[i]=='+')         
        {
            sign=s[i]=='-'?-1:1;
            i++;
        }
    
        while(i<s.length()&&(s[i]>='0'&&s[i]<='9')) 
        {
            int digit=(s[i]-'0')*sign;
            if(sign==1 && (result>INT_MAX/10 || (result==INT_MAX/10 && digit>INT_MAX%10))) return INT_MAX;
            if(sign==-1 &&(result<INT_MIN/10 || (result==INT_MIN/10 && digit<INT_MIN%10))) return INT_MIN; 
            
            result=result*10+digit; 
            i++;
        }
    return result;
    }
};
