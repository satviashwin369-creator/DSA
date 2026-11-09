class Solution {
public:
    int getMaxRepetitions(string s1, int n1, string s2, int n2) {
        if (n1 == 0) return 0;

        int j = 0;
        int count = 0;

        // Store the state and counts after each repetition
        unordered_map<int, pair<int, int>> seen;

        for (int k = 1; k <= n1; k++) {

            for (char c : s1) {
                if (c == s2[j]) {
                    j++;

                    if (j == s2.size()) {
                        j = 0;
                        count++;
                    }
                }
            }

            // A repeated state means a cycle exists
            if (seen.count(j)) {
                int prevK = seen[j].first;
                int prevCount = seen[j].second;

                int cycleLength = k - prevK;
                int cycleCount = count - prevCount;

                int remaining = n1 - k;
                int fullCycles = remaining / cycleLength;
                int extra = remaining % cycleLength;

                int result = count + fullCycles * cycleCount;

                // Process the remaining repetitions
                int tempJ = j;
                int tempCount = 0;

                for (int x = 0; x < extra; x++) {
                    for (char c : s1) {
                        if (c == s2[tempJ]) {
                            tempJ++;

                            if (tempJ == s2.size()) {
                                tempJ = 0;
                                tempCount++;
                            }
                        }
                    }
                }

                result += tempCount;
                return result / n2;
            }

            seen[j] = {k, count};
        }

        return count / n2;

    }
};