class Solution {
public:
    int numTeams(vector<int>& rating) {
        int count = 0;
        for (int i = 0; i < rating.size(); i++) {
            for (int j = i + 1; j < rating.size(); j++) {
                if (rating[i] > rating[j]) {
                    for (int k = j + 1; k < rating.size(); k++) {
                        if (rating[j] > rating[k]) {
                            count++;
                        }
                    }
                }else if(rating[i]<rating[j]){
                     for (int k = j + 1; k < rating.size(); k++) {
                        if (rating[j] < rating[k]) {
                            count++;
                        }
                    }
                }
            }
        }
        return count;
    }
};