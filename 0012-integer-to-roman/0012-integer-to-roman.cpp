class Solution {
public:
    string intToRoman(int num) {
        string answer = "";
        int len = to_string(num).length();
        unordered_map<int,string> a;
        a[1] = "I";
        a[4] = "IV";
        a[5] = "V";
        a[9] = "IX";
        a[10] = "X";
        a[40] = "XL";
        a[50] = "L";
        a[90] = "XC";
        a[100] = "C";
        a[400] = "CD";
        a[500] = "D";
        a[900] = "CM";
        a[1000] = "M";
        for(int i = len-1; i >= 0; i--){
            cout << (int)( num/pow(10,i))%10*pow(10,i) << endl;
            if(a.find(((int)( num/pow(10,i))%10)*pow(10,i)) == a.end()){
                if((int)(num/pow(10,i))%10 == 0){
                    continue;
                }
                if((int)(num/pow(10,i))%10 >5){
                    answer += a[5*pow(10,i)];
                }
                for(int j = 0; j<(int)( num/pow(10,i))%5; j++){
                    answer += a[pow(10,i)];
                }
            }else{
                answer += a[(int)(num/pow(10,i))%10*pow(10,i)];
            }
        }
        return answer;
    }
};