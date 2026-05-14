class Solution {
public:
    string convertDictoBin(string Date){
        int date=stoi(Date);
        string c="";
        int rem=0;
        while(date>0){
            rem=date%2;
            c+=to_string(rem);
            date/=2;
        }
        reverse(c.begin(),c.end());
        return c;
    }
    string convertDateToBinary(string date) {
        string st="";
        int i=0;
        while(date[i]!='-'){
            st+=date[i];
            i++;
        }
        i++;
        string month="";
        while(date[i]!='-'){
            month+=date[i];
            i++;
        }
        i++;
        string day="";
        while(i<date.size()){
            day+=date[i];
            i++;
        }
        string ans=convertDictoBin(st)+"-"+convertDictoBin(month)+"-"+convertDictoBin(day);
        return ans;
    }
};