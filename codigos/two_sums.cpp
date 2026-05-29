class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> vetorOrdenado;

        for(int i = 0; i < nums.size(); i++){
            vetorOrdenado.push_back({nums[i], i});
        }

        sort(vetorOrdenado.begin(), vetorOrdenado.end());

        int j = vetorOrdenado.size() - 1;

        int i = 0;
        while(i < j){

            int resp = vetorOrdenado[i].first + vetorOrdenado[j].first;
            if(resp == target){
                return {vetorOrdenado[i].second, vetorOrdenado[j].second};
            }
            else if(resp < target){
                i++;
            }else{
                j--;
            }
        }
        return {};
    }
};
