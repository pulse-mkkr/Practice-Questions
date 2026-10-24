//Stock Span Problem

class Solution {
	public:
	vector<int> calculateSpan(vector<int>& arr) {
		int n = arr.size();
		stack<int>st;
		vector<int>pgi(n, -1),ans(n);
		
		for (int i = 0; i<n; i++) {
			while (!st.empty() && arr[st.top()] <= arr[i])st.pop();
			if (!st.empty())pgi[i] = st.top();
			st.push(i);
		}
		for(int i=0;i<n;i++){
		    if(pgi[i]==-1)ans[i]=i+1;
		    else ans[i]=i-pgi[i];
		}
		return ans;
		//-1 0 0 -1 -1 4 
		// 4 5
		//1 1 2 4 5 1
		
	//	main idea - Stock Span = previous greater element + distance between indices.
	}
};
