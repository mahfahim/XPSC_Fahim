
#include <bits/stdc++.h>

using namespace std;

class Solution{
public:
	int search(string pat, string txt) {
	    int ps=pat.size();
	    int ts=txt.size();
	    vector<int> pfreq(26,0);
	    vector<int> tfreq(26,0);
	    int count=0;
	    for(int i=0;i<ps;i++)
	    {
	        int asci = pat[i] - 'a';
	        pfreq[asci]++;
	    }
        for(int i=0;i<ps;i++)
        {
            int asci = txt[i] - 'a';
            tfreq[asci]++;
        }
	    if(pfreq == tfreq)
	    {
	        count++;
	    }
	    for(int i=ps;i<ts;i++)
	    {
	        int lastasci = txt[i] - 'a';
	        tfreq[lastasci]++;
	        int firstasci = txt[i-ps] - 'a';
	        tfreq[firstasci]--;
            if(pfreq == tfreq)
            {
             count++;
            }
	    }
	    return count;
	}

};


int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
