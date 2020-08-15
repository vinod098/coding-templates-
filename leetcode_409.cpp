// Longest Palindrome


// Input:
// "abccccdd"

// Output:
// 7

// Explanation:
// One longest palindrome that can be built is "dccaccd", whose length is 7.


int longestPalindrome(string s) {
        unordered_map<char,int>um;
        for(int i=0;s[i];i++)
        {
            um[s[i]]++;
        }
        int maxlen=0,odd=0;
        for(auto x:um)
        {
          maxlen+=(x.second/2);
           if (x.second%2)
               odd=1;
        }
        return maxlen*2+odd;
    }