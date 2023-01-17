#include <bits/stdc++.h>
using namespace std;
int input(int rows, int cols){
    int arr[rows][cols];
    for (int i=0; i<rows; i++)
        for (int j=0; j<cols; j++)
            arr[i][j] = 1 + (rand() % 100);
    cout << "Random 2d array generated is:" << endl;
    for (int i=0; i<rows; i++){
        for (int j=0; j<cols; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    sort(arr[rows][cols],cols);
    return 0;   
}

int sort(int arr[][],int cols){
	int temp=0;
	for(int y=0;y<cols;y++){
		for(int x=0;x<rows;x++){
			if(arr[x][y]<a[0][y]){
				temp=a[x][y];
				a[x][y]=a[0][0];
				a[0][0]=temp;
			}
		}
	}
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			cout<<arr[i][j];
		}
	}
	return 0;
}

int main(){
	srand(time(0));
	int rows,cols;
	cin>>rows>>cols;
	input(rows,cols);
	return 0;
}

