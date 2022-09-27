// https://school.programmers.co.kr/learn/courses/30/lessons/12924

int solution(int n) {
    int answer = 1, ans, k;
    for(int i = 1; i<(n/2 + 1); i++) {
        ans = 0; k = i;
        while(ans < n) {
            ans += k;
            k++;
        }
        if(ans == n)
            answer++;
    }
    return answer;
}
