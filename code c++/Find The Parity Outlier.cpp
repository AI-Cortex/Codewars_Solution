// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Find The Parity Outlier
// Link: https://www.codewars.com/kata/5526fc09a1bbd946250002dc

int FindOutlier(std::vector<int> arr)
{
    int odd_index = 0, even_index = 0;
    int odd_count = 0, even_count = 0;
    int len = arr.size();

    for (int i = 0; i < len; i++)
    {
        if (arr[i] & 1)
        {
            odd_count++;
            odd_index = i;
        }
        else
        {
            even_count++;
            even_index = i;
        }
    }
    
    return (odd_count > even_count)
               ? arr[even_index]
               : arr[odd_index];
}