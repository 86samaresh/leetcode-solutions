class Solution {
public:
    bool sumGame(string num) {
        int n = num.size();

        int lq = 0, rq = 0;
        int ls = 0, rs = 0;

        for(int i = 0; i < n / 2; i++) {
            if(num[i] == '?')
                lq++;
            else
                ls += num[i] - '0';
        }

        for(int i = n / 2; i < n; i++) {
            if(num[i] == '?')
                rq++;
            else
                rs += num[i] - '0';
        }

        int diff = ls - rs;

        if(lq == rq)
            return diff != 0;

        int qdiff = abs(lq - rq);

        if(qdiff % 2 == 1)
            return true;

        int required = 9 * (qdiff / 2);

        if(lq > rq)
            return diff != -required;
        else
            return diff != required;
    }
};