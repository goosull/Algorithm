#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 주어진 팀들의 총 실력 차이(S - s)를 계산하는 함수
int calculate_difference(const vector<int>& team1, const vector<int>& team2, const vector<int>& team3, const vector<int>& team4) {
    vector<int> sums(4);
    sums[0] = team1[0] + team1[1] + team1[2];
    sums[1] = team2[0] + team2[1] + team2[2];
    sums[2] = team3[0] + team3[1] + team3[2];
    sums[3] = team4[0] + team4[1] + team4[2];

    int max_sum = *max_element(sums.begin(), sums.end());
    int min_sum = *min_element(sums.begin(), sums.end());

    return max_sum - min_sum;
}

int main() {
    vector<int> skills(12);
    for (int i = 0; i < 12; i++) {
        cin >> skills[i]; // 소들의 실력 입력
    }

    sort(skills.begin(), skills.end()); // 실력 값을 정렬 (효율적인 팀 나누기를 위함)

    int min_difference = 99999999; // 최소값을 저장할 변수

    // 가능한 모든 팀 조합을 계산 (브루트포스 탐색)
    for (int i = 0; i < 12; i++) {
        for (int j = i + 1; j < 12; j++) {
            for (int k = j + 1; k < 12; k++) {
                vector<int> team1 = {skills[i], skills[j], skills[k]};
                
                vector<int> remaining;
                for (int x = 0; x < 12; x++) {
                    if (x != i && x != j && x != k) remaining.push_back(skills[x]);
                }

                // 두 번째 팀을 선택
                for (int a = 0; a < 9; a++) {
                    for (int b = a + 1; b < 9; b++) {
                        for (int c = b + 1; c < 9; c++) {
                            vector<int> team2 = {remaining[a], remaining[b], remaining[c]};
                            
                            vector<int> remaining2;
                            for (int x = 0; x < 9; x++) {
                                if (x != a && x != b && x != c) remaining2.push_back(remaining[x]);
                            }

                            // 세 번째 팀을 선택
                            for (int p = 0; p < 6; p++) {
                                for (int q = p + 1; q < 6; q++) {
                                    for (int r = q + 1; r < 6; r++) {
                                        vector<int> team3 = {remaining2[p], remaining2[q], remaining2[r]};
                                        vector<int> team4;
                                        for (int x = 0; x < 6; x++) {
                                            if (x != p && x != q && x != r) team4.push_back(remaining2[x]);
                                        }

                                        // 실력 차이를 계산하고 최소값을 갱신
                                        int difference = calculate_difference(team1, team2, team3, team4);
                                        min_difference = min(min_difference, difference);

                                        // cout << "Team1: ";
                                        // for (int val : team1) cout << val << " ";
                                        // cout << "Team2: ";
                                        // for (int val : team2) cout << val << " ";
                                        // cout << "Team3: ";
                                        // for (int val : team3) cout << val << " ";
                                        // cout << "Team4: ";
                                        // for (int val : team4) cout << val << " ";
                                        // cout << "Min Difference: " << min_difference << endl;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    cout << min_difference << endl;

    return 0;
}