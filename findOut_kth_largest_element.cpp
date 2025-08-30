// with priority queue
class Solution
{
public:
    int findKthLargest(vector<int> &nums, int k)
    {

        if (nums.size() < 1)
            return 0;
        priority_queue<int> pq;

        for (int i = 0; i < nums.size(); i++)
            pq.push(nums[i]);

        for (int i = 0; i < k - 1; i++)
            pq.pop();

        return pq.top();
    }
};

// with sort
class Solution
{
public:
    static bool comp(int a, int b)
    {
        return a > b;
    }

    int findKthLargest(vector<int> &nums, int k)
    {
        sort(nums.begin(), nums.end(), comp);
        return nums[k - 1];
    }
};
