
#include<bits/stdc++.h>
using namespace std;

int visited[11][11];
int arr[11][11];
int m,n;

bool isvalid(int x, int y){
if(x < 1 || y < 1 || x > m || y > n){
return false;
}
if(visited[x][y]){
return false;
}
return true;
}

int dx[] ={-1,-1,0,1,1,1,0,-1};
int dy[] ={0,1,1,1,0,-1,-1,-1};

void dfs(int x,int y,int &count){
visited[x][y] = 1;
for(int i = 0; i < 8; i++){
if(isvalid(x + dx[i],y + dy[i]) && arr[x + dx[i]][y + dy[i]] == 1){
count++;
dfs(x + dx[i], y + dy[i], count);
}
}
}
int main() {
// your code goes here
cin>>m>>n;

for(int i = 1; i <=m; i++){
    for(int j = 1; j <= n; j++){
        cin>>arr[i][j];
    }
}

int ans = 0, coders = 1;
for(int i = 1; i <= m; i++){
    for(int j = 1; j <= n; j++){
        if(visited[i][j] == 0 && arr[i][j] == 1){
            dfs(i,j,coders);
            ans = max(ans, coders);
            coders = 1;
        }
    }
}
cout << ans;

return 0;
}




