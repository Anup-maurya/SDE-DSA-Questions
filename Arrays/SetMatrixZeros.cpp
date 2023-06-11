//73 Set Matrix Zero
// Problem Statement: Given a matrix if an element in the matrix is 0 then you will have to set its entire column and row to 0 and then return the matrix.

class Solution
{

public:
  void setZeroes(vector<vector<int>>&matrix)
  {
    int m = matrix.size(), n = matrix[0].size();

      vector<int>rows(m, 1),cols(n, 1);

    for (int i=0;i<m;i++)
      {
	for (int j=0;j<n;j++)
	  {
	    if (matrix[i][j] == 0)
	      {

		rows[i]=0;

		cols[j]=0;

	      }
	  }
      }

    for (int i=0;i<m;i++)
      {
	for (int j = 0; j < n; j++)
	  {
	    if (rows[i] == 0 || cols[j] == 0)
	      {
		matrix[i][j] = 0;
	      }

      }
      }
  }
};
