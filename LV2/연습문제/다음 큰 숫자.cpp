// https://school.programmers.co.kr/learn/courses/30/lessons/12911

#include <string>
#include <vector>
#include <bitset>

using namespace std;

int solution(int n) {
    int answer = n;
    bitset<8> b(n);
    int one = 0;
    for(int i = 0; i<b.size(); i++) {
        if(b[i] == 1)
            one++;
    }
    int one2 = 0;
    while(one != one2) {
        one2 = 0;
        answer++;
        bitset<8> b2(answer);   
        for(int i = 0; i<b2.size(); i++) {
            if(b2[i] == 1)
                one2++;
        }
    }

    return answer;
}
