class Solution
{
public:
    int check(string str, int result)
    {
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            {
                result++;
            }
            if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            {
                result++;
            }
        }
        return result;
    }
    bool halvesAreAlike(string s)
    {
        int n = s.size();
        int cnt_temp1 = 0;
        int cnt_temp2 = 0;
        string temp1 = s.substr(0, n / 2);
        string temp2 = s.substr(n / 2, n);
        cout << temp1 << " " << temp2;
        cnt_temp1 = check(temp1, 0);
        cnt_temp2 = check(temp2, 0);
        return cnt_temp1 == cnt_temp2;
    }
};