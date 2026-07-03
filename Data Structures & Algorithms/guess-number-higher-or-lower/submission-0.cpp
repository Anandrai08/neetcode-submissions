/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int min = 1;
        int max = n;
        int pick = min + (max-min)/2;
        int result = guess(pick);
        while(result !=0){
            if(result >0){
                min = pick+1;
            }
            else{
                max = pick-1;
            }
            pick = min+(max-min)/2;
            result = guess(pick);
        }
        return pick;
    }
};