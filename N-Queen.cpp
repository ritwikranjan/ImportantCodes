#include <iostream>

using namespace std;

bool isSafe(int board[][10],int i,int j, int n)
{
	for (int x = 0;x < i;x++){
		if(board[x][j]!=0)
			return false;
	}
	int x=i;
	int y = j;
	while(x>=0&&y>=0){
		if(board[x][y]!=0)
			return false;
		x--;
		y--;
	}
	x=i;
	y = j;
	while(x>=0&&y<n){
		if(board[x][y]!=0)
			return false;
		x--;
		y++;
	}
	return true;
}

bool nQueen(int board[][10], int i, int n)
{
	if(i==n){
		for(int k = 0; k < n; k++){
			for(int j = 0; j < n; j++){
				cout<<board[k][j]<<" ";
			}
			cout<<endl;
		}
		return true;
	}

	for(int j = 0; j < n; j++)
	{
		if(isSafe(board,i,j,n)){
			board[i][j]=1;
			bool ableToPlace = nQueen(board,i+1,n);
			if(ableToPlace){
				return true;
			}
			board[i][j]=0;
		}
	}

	return false;
}

int main()
{
	int n;
	cin>>n;
	int board[10][10]={0};
	nQueen(board,0,n);
}
