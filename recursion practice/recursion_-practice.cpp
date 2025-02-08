// 983. Minimum Cost For Tickets
// i this question i have used recursion but it is goving TLE right now I will try to do it using dp the next time 
// when i reach there and here is the sol  for this
// class Solution {
// public:
//     int mincostTickets_baby(vector<int>&days,vector<int>&costs,int i){
//         //base case
//         if(i>=days.size()){
//             return 0;
//         }

//         //solve for one
//         // for first day
//         int cost_1day=costs[0]+mincostTickets_baby(days,costs,i+1);
//         //for 7 day pass
//         int passendday=days[i]+7-1;
//         int j=i;
//         while(j<days.size() &&days[j]<=passendday){
//             j++;
//         }
//         int cost_7day=costs[1]+mincostTickets_baby(days,costs,j);
//         //for 30 days
//         passendday=days[i]+30-1;
//         j=i;
//         while(j<days.size() &&days[j]<=passendday){
//             j++;
//         }

//         int cost_30day=costs[2]+mincostTickets_baby(days,costs,j);

//         return min(cost_1day,min(cost_7day,cost_30day));
//     }
//     int mincostTickets(vector<int>& days, vector<int>& costs) {
//         return mincostTickets_baby(days,costs,0);

        
//     }
// };