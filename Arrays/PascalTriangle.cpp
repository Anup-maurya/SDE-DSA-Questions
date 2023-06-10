class Solution {
public:
vector<vector<int>> generate(int numRows) {
int sum=1;
vector<vector<int>> res;
for(int i=0;i<numRows;i++)
{
    vector<int> temp(i+1,1);
for(int j=1;j<i;j++)
{
temp[j]=res[i-1][j-1]+res[i-1][j];
}
res.push_back(temp);
}
return res;
}
};