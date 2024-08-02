class Solution {
public:
    vector<int> findNSE(vector<int> arr, int n) {
        vector<int> nse(n);
        stack<int> st;
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }
            nse[i] = st.empty() ? n : st.top();

            st.push(i);
        }
        return nse;
    }
    vector<int> findPSE(vector<int> arr, int n) {
        vector<int> pse(n);
        stack<int> st;
        for (int i = 0; i < n; i++) {
            while (!st.empty() && arr[st.top()] > arr[i]) {
                st.pop();
            }
            pse[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        return pse;
    }
    int sumSubarrayMins(vector<int>& arr) {
        int total = 0;
        int mod =1e9 + 7;
        int n = arr.size();
        vector<int> nse = findNSE(arr, n);
        vector<int> pse = findPSE(arr, n);
        for (auto it : nse) {
            cout << it << " ";
        }
        for (auto it : pse) {
            cout << it << " ";
        }
        for (int i = 0; i < arr.size(); i++) {
            long left = abs(i - pse[i]);
            long right = abs(nse[i] - i);
            total = (total%mod+(left*right*arr[i])%mod)%mod;
        }
        return total;
    }
};