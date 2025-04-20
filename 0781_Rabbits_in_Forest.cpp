/*
LeetCode 0781 - Rabbits in Forest

Problem:
In a forest, some rabbits are asked how many other rabbits have the same color as them. 
Each rabbit gives an answer x, meaning there are x other rabbits with the same color.

Given an integer array answers where each answers[i] is the reply from a rabbit,
return the minimum number of rabbits that could be in the forest.
*/

/*T:O(n), S:O(n)*/
class findRabbit {
public:
	int RabbitInForeset(vector<int> &num) {
		unordered_map<int,int> m;
		int ans = 0;
		for(int x: num)
			m[x]++;
		for(auto [key,val] : m) {
			int dividen = val/(key+1);
			int remainder = val%(key+1);
			ans += dividen*(key+1) + (remainder > 0 ) ? (key+1) : 0;
		}
		return ans;
	}
}
 
