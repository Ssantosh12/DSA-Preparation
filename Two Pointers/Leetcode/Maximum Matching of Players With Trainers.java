class Solution {
    public int matchPlayersAndTrainers(int[] players, int[] trainers) {
        int i,playerInd,trainerInd,n=players.length,m=trainers.length,count=0;

        //sort both the arrays so that we can follow apattern while choosing trainer for a player
        Arrays.sort(players);
        Arrays.sort(trainers);

        // for each player try to find the trainer with the smallest score >=current player score
        // we choose a trainer from the AVAILABLE VALID SEARCH SEGMENT
        trainerInd=0;
        for(playerInd=0;playerInd<=n-1&&trainerInd<=m-1;playerInd++){
            // in the valid search segment , choose the smallest score trainer >= curr player
            // the valid segment keeps getting reduced
            while(trainerInd<=m-1&&trainers[trainerInd]<players[playerInd])
                trainerInd++;

            // if we stopped at a valid trainer, we make a pair, and valid segment shifts 1 right
            if(trainerInd<=m-1){
                count++;
                trainerInd++;
            }
        }
        return count;
    }
}
