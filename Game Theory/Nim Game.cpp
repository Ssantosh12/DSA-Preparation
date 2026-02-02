class Solution {
public:
    // state definition: can the current person win with given heap n

    bool canWinNim(int n) {
        // base case : think when can the current person can win straightly
        if(n==3||n==2||n==1)
            return true;

        // transition: if we can't decide the outcome on the spot(like the base case)
        // take the choices from here and check when can the current person win
        // *The current player takes the choices and checks in if any of them the other player loses
        // then we only we can say that the current player can win

        if(!canWinNim(n-1)||!canWinNim(n-2)||!canWinNim(n-3))
            return true;
        return false;
    }
};
