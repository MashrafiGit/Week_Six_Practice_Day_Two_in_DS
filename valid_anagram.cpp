class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.size() != t.size())
            return false;

        map<char, int> mps, mpt;

        for (char st : s)
            mps[st]++;
        for (char sl : t)
            mpt[sl]++;

        return mps == mpt;
    }
};