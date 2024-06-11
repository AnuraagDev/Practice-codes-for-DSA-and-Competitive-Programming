class Solution {
public:
    int findPermutationDifference(string s, string t) {
        unordered_map <char, int> mp, np;

        int count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            mp[s.at(i)] = i;
            np[t.at(i)] = i;

        }
        for (auto i = 0; i < t.size(); i++)
        {
            count += abs(np[t.at(i)] - mp[t.at(i)]);
        }
        return count;
    }
};