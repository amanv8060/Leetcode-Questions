#include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
        int bestTeamScore(vector < int > & scores, vector < int > & ages) {
            const int n = scores.size();
            vector < pair < int, int >> players(n);
            for (int i = 0; i < n; ++i)
                players[i] = {
                    ages[i],
                    scores[i]
                };
            sort(rbegin(players), rend(players));
            // dp[i] = max score of the first i players, i must be selected.
            vector < int > dp(n);
            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < i; ++j)
                    if (players[i].second <= players[j].second)
                        dp[i] = max(dp[i], dp[j]);
                dp[i] += players[i].second;
            }
            return *max_element(begin(dp), end(dp));
        }
};
