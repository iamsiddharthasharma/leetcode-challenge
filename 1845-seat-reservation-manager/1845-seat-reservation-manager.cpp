class SeatManager {
public:
    priority_queue<int, vector<int>, greater<int>> availableseats;
    SeatManager(int n) {
        for(int i = 1;i<=n;i++)
        {
            availableseats.push(i);
        }
    }
    
    int reserve() {
        int seat = availableseats.top();
        availableseats.pop();
        return seat;
    }
    
    void unreserve(int seatNumber) {
        availableseats.push(seatNumber);
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */