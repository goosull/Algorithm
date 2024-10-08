// 문제

// 복식 게이트볼은 두 명으로 이루어진 두 팀이 경기를 합니다. 각 선수마다 자기 차례가 오면 치는 자기 공이 있습니다. 한 번의 차례에서 선수는 공을 한 번 칠 수 있습니다.

// 6개의 고리가 정해진 순서대로 양방향으로 한 번, 총 두 번 통과됩니다. 현재 차례의 고리를 먼저 통과한 팀이 1점을 획득합니다. 고리를 통과하는 것은, 그 팀 순서에서 공이 현재 차례의 고리를 올바른 방향으로 통과하는 것을 의미합니다. 7점을 먼저 획득하는 팀이 이깁니다. 경기가 6-6이라면, 결승 고리가 주어집니다. 7번째 고리를 획득하면 경기가 끝나므로 한 팀이 7점을 넘게 얻을 수 없음에 유의합시다.

// 공은 정해진 순서대로 진행됩니다: 파랑, 빨강, (파랑의 짝인) 검정, (빨강의 짝인) 노랑 순입니다. 각 차례의 결과를 기록해 경기 전체의 진행 과정을 기록할 수 있습니다. 기록하는 방식은 다음과 같습니다:

// - S는 고리를 통과하지 못한 일반적인 차례입니다.

// - H는 그 팀이 고리를 통과한 차례입니다.

// - D는 일반적으로 일어나지는 않지만 가능은 한, 그 팀이 한 번에 2개의 고리를 통과한 차례입니다! 물론 6점을 이미 획득한 팀의 경우, 2개 중 하나만 인정됩니다.

// - O는 상대 팀의 공이 고리를 획득하게 된 차례입니다!

// 마지막 경우는 보통 거의 실수지만, 선수들이 원하는 것보다 자주 일어납니다!

// 입력

// 입력은 게이트볼 하나의 경기를 나타냅니다. 첫 두 줄은 하나 이상의 단어로 이루어진 두 팀의 이름입니다. 이름은 최대 30글자입니다. 첫 번째 팀이 파랑과 검정 공을 사용합니다. 셋째 줄에는 기록된 차례의 수를 나타내는 하나의 정수 S가 주어지는데, 기록한 경기는 아직 종료되지 않았을 수 있습니다. (0 < S <= 255)

// 넷째 줄에는 S개의 영어 대문자가, 위에 명시된 4개의 문자 (S, H, D, O) 중 하나로 주어집니다. 파랑이 항상 우선이고, 이후 빨강, 검정, 노랑 순입니다.

// 출력

// 현재 점수를 아래와 같은 형식으로 출력합니다.

// (형식 1 참조)

// 이후 공백 하나를 두고 아래 중 하나를 출력합니다:

// (형식 2 참조)

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string a, b;

    getline(cin, a);
    getline(cin, b);

    int count;
    cin >> count;

    string sc;
    cin >> sc;

    int sc1 = 0;
    int sc2 = 0;

    for(int i =0; i < count; i ++){
        if(i % 2 == 1){
            if(sc[i] == 'H'){
                sc2 ++;
            }
            else if (sc[i] == 'D'){
                if(sc2 == 6)
                    sc2 ++;
                else if(sc2 < 6)
                    sc2 +=2;
            }
            else if(sc[i] == 'O'){
                sc1 ++;
            }
        }
        else{
            if(sc[i] == 'H'){
                sc1 ++;
            }
            else if (sc[i] == 'D'){
                if(sc1 == 6)
                    sc1 ++;
                else if(sc1 < 6)
                    sc1 +=2;
            }
            else if(sc[i] == 'O'){
                sc2 ++;
            }
        }

        if(sc1 == 7){
            cout << a << " " << sc1  << " " << b << " " << sc2 << ". "; 
            cout << a << " has won.";
            return 0;
        }
        if (sc2 == 7){
            cout << a << " " << sc1  << " " << b << " " << sc2 << ". "; 
            cout << b << " has won.";
            return 0;
        }
    }

    cout << a << " " << sc1  << " " << b << " " << sc2 << ". "; 
    if(sc1 > sc2) {
        cout << a << " is winning.";
    }
    else if (sc1 == sc2 ){
        cout << "All square.";
    }
    else if (sc2 > sc1) {
        cout << b << " is winning.";
    }
}
