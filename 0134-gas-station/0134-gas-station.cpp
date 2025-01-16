class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalGas = 0;
        int totalCost = 0;
        for(int i=0;i<gas.size();i++){
            totalGas += gas[i];
            totalCost += cost[i];
        }
        if(totalGas<totalCost) return -1;
        int sum =0;int ind =0;
        for(int i=0;i<gas.size();i++){
            sum = sum+gas[i]-cost[i];
            if(sum<0){
                sum = 0;
                ind = i+1;
            }
        }
        return ind;
    }
};