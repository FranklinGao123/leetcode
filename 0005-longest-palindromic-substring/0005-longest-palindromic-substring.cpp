class Solution {
    struct pair{
        int a, b;
    };
    
public:
    
    string longestPalindrome(string s) {
        list<pair> q;
        for(int i = 0; i<s.length(); i++){
            q.push_back({i,1});
        }
        
        for(int i = 0; i<s.length() - 1; i++){
            if(s[i] == s[i+1]){
                q.push_back({i,2});
            }
        }
        string output;
        pair temp;
        while(q.size() != 0){
            // if(q[0].a > 0 && q[0].a + q[0].b <= s.length() - 1)
            //     cout << s.substr(q[0].a,q[0].b) << " " << s[q[0].a-1]<< " " << s[q[0].a + q[0].b] << endl;
            temp = q.front();
            if(temp.a > 0 && temp.a + temp.b <= s.length() - 1 && s[temp.a-1] == s[temp.a + temp.b]){
                //cout << s.substr(q[0].a-1,q[0].b+2) << endl;
                q.push_back({temp.a-1,temp.b+2});
            }
            q.pop_front();
        }
        return s.substr(temp.a,temp.b);
        
    }
};