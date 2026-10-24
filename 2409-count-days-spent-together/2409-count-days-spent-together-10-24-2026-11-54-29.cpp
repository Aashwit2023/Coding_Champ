class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        vector<int> days = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int aAMonth = (arriveAlice[0] - '0') * 10 + (arriveAlice[1] - '0');
        int aADay =   (arriveAlice[3] - '0') * 10 + (arriveAlice[4] - '0');
        int aLMonth = (leaveAlice[0]  - '0') * 10 + (leaveAlice[1]  - '0');
        int aLDay =   (leaveAlice[3]  - '0') * 10 + (leaveAlice[4]  - '0');
        
        int bAMonth = (arriveBob[0] - '0') * 10 + (arriveBob[1] - '0');
        int bADay =   (arriveBob[3] - '0') * 10 + (arriveBob[4] - '0');
        int bLMonth = (leaveBob[0]  - '0') * 10 + (leaveBob[1]  - '0');
        int bLDay =   (leaveBob[3]  - '0') * 10 + (leaveBob[4 ] - '0');

        int ans = 0;
        int sMonth = 0, sDay = 0;
        if (aAMonth > bAMonth || (bAMonth == aAMonth && aADay > bADay)) {
            sMonth = aAMonth;
            sDay = aADay;
        } else {
            sMonth = bAMonth;
            sDay = bADay;
        }
        int eMonth = 0, eDay = 0;
        if (bLMonth > aLMonth || (bLMonth == aLMonth && bLDay > aLDay)) {
            eMonth = aLMonth;
            eDay = aLDay;
        } else {
            eMonth = bLMonth;
            eDay = bLDay;
        }
        if (sMonth > eMonth || (sMonth == eMonth && sDay > eDay)) return 0;
        if (sMonth == eMonth) return eDay - sDay + 1;

        ans = days[sMonth] - sDay + 1;
        for (int i = sMonth + 1; i < eMonth; i++) {
            ans += days[i];
        }
        ans += eDay;
        return ans;
    }
};