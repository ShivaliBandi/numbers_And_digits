/*
Electronics Shop
*/

int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    /*
     * Write your code here.     */
    int max=-1;
    sort(keyboards.begin(),keyboards.end());
    sort(drives.begin(),drives.end(),greater<int>());
    for(int i=0,j=0;i<keyboards.size() && j<drives.size();)
    {
        
        if(keyboards[i]+drives[j]<=b)
        {
            if(max<keyboards[i]+drives[j])
                max=keyboards[i]+drives[j];
            i++;
        }
        else if(keyboards[i]+drives[j]>b)
            j++;
    }
    return max;

}
