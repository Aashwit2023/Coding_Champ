class BusBooking {
public:
    int totalTime = 0;
    unordered_map<string, int> mp;
    unordered_map<string, int> cost;
    BusBooking(int n) {
        
    }
    
    void toggle(string seat) {
        int num = 0;
        char ch = seat[0];
        string row = seat.substr(1);
        string str = "";
        if (ch == 'A') str = "B" + row;
        else if (ch == 'D') str = "C" + row;
        if (mp.find(seat) == mp.end()) {
            int time = 1;
            if (ch == 'A' || ch == 'D') {
                if (mp.find(str) != mp.end()) {
                    time = 3;
                } 
            }
            mp[seat]++;
            cost[seat] = time;
            totalTime += time;
        }
        else {
            totalTime -= cost[seat];
            mp.erase(seat);
            cost.erase(seat);
        }
    }
    
    int getTotalTime() {
        return totalTime;
    }
    
    int getMinTime() {
        return (int)mp.size();
    }
};

/**
 * Your BusBooking object will be instantiated and called as such:
 * BusBooking* obj = new BusBooking(n);
 * obj->toggle(seat);
 * int param_2 = obj->getTotalTime();
 * int param_3 = obj->getMinTime();
 */