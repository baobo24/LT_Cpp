#include<bits/stdc++.h>

using namespace std;

vector<bool>sont(100001);
vector<string>sotm;                         //Tập X các số nguyên tố có tổng bằng s
string ans[5];

//tổng chữ số
int tongchuso(int x){
    int ans=0;
    while(x){
        ans+=x%10;
        x/=10;
    }
    return ans;
}
//sàng số nguyên tố <1e5
void sang_NT(){
    sont[1]=1;
    for(int i=2;i<=1001;i++){
        if(!sont[i]){
            for(int j=i*i;j<=1e5;j+=i)sont[j]=true;
        }
    }
}
//lọc các số nguyên tố có tổng bằng s và biểu diễn nó dưới dạng string 
void loc_so(int s){
    for(int i=10001;i<=99999;i++){
        if(!sont[i]&&tongchuso(i)==s){
            sotm.push_back(to_string(i));
        }
    }
}


void solve(){
    int s;
    cin>>s;
    sang_NT();
    loc_so(s);
    int n=sotm.size();                      //số số thỏa mãn
    for(int h0=0;h0<n;h0++){                //chọn x thuộc tập số X và gán nó vào hàng 0
        ans[0]=sotm[h0];
        for(int c0=0;c0<n;c0++){            //chọn x thuộc tập X để gán nó vào cột 0 
            if(sotm[c0][0]==ans[0][0]){     //kiểm tra x có thỏa mãn điều kiện của hàng 0 
                for(int p=1;p<5;p++) ans[p][0]=sotm[c0][p];          //gán nó vào cột 0
                //chọn x thuộc tập X để gán nó vào đường chéo 1 
                for(int d1=0;d1<n;d1++){
                    if(sotm[d1][0]==ans[4][0]&&sotm[d1][4]==ans[0][4]){         //kiểm tra x có thỏa mãn điều kiện của hàng 0 và cột 0
                        for(int p=1;p<4;p++)ans[4-p][p]=sotm[d1][p];            //gán nó vào chéo 1
                        for(int h1=0;h1<n;h1++){                                //chọn x thuộc tập X để gán nó vào hàng 1
                            if(sotm[h1][0]==ans[1][0]&&sotm[h1][3]==ans[1][3]){ //kiểm tra x có thỏa mãn điều kiện của cột 0 và chéo 1
                                ans[1]=sotm[h1];                                //gán nó vào hàng 1
                                //Những cái sau tương tự theo sườn note của cô
                                for(int c1=0;c1<n;c1++){
                                    if(sotm[c1][0]==ans[0][1]&&sotm[c1][1]==ans[1][1]&&sotm[c1][3]==ans[3][1]){
                                        ans[2][1]=sotm[c1][2];
                                        ans[4][1]=sotm[c1][4];
                                        for(int h2=0;h2<n;h2++){
                                            if(sotm[h2][0]==ans[2][0]&&sotm[h2][1]==ans[2][1]&&sotm[h2][2]==ans[2][2]){
                                                ans[2][3]=sotm[h2][3];
                                                ans[2][4]=sotm[h2][4];
                                                for(int c2=0;c2<n;c2++){
                                                    if(sotm[c2][0]==ans[0][2]&&sotm[c2][1]==ans[1][2]&&sotm[c2][2]==ans[2][2]){
                                                        ans[3][2]=sotm[c2][3];
                                                        ans[4][2]=sotm[c2][4];
                                                        for(int h3=0;h3<n;h3++){
                                                            if(sotm[h3][0]==ans[3][0]&&sotm[h3][1]==ans[3][1]&&sotm[h3][2]==ans[3][2]){
                                                                ans[3][3]=sotm[h3][3];
                                                                ans[3][4]=sotm[h3][4];
                                                                for(int c3=0;c3<n;c3++){
                                                                    if(sotm[c3][0]==ans[0][3]&&sotm[c3][1]==ans[1][3]&&sotm[c3][2]==ans[2][3]&&sotm[c3][3]==ans[3][3]){
                                                                        ans[4][3]=sotm[c3][4];
                                                                        for(int h4=0;h4<n;h4++){
                                                                            if(sotm[h4][0]==ans[4][0]&&sotm[h4][1]==ans[4][1]&&sotm[h4][2]==ans[4][2]&&sotm[h4][3]==ans[4][3]){
                                                                                ans[4][4]=sotm[h4][4];
                                                                                bool check=false;
                                                                                string tmp;
                                                                                for(int p=0;p<5;p++){
                                                                                    tmp+=ans[p][4];
                                                                                }
                                                                                for(int c4=0;c4<n;c4++){
                                                                                    if(sotm[c4]==tmp){
                                                                                        check=true;
                                                                                        break;
                                                                                    }
                                                                                }
                                                                                if(check){
                                                                                    string tmp2;
                                                                                    for(int p=0;p<5;p++){
                                                                                        tmp2+=ans[p][p];
                                                                                    }
                                                                                    for(int d2=0;d2<n;d2++){
                                                                                        if(sotm[d2]==tmp2){
                                                                                            for(int i=0;i<5;i++){
                                                                                                for(int j=0;j<5;j++)cout<<ans[i][j]<<" ";
                                                                                                cout<<endl;
                                                                                            }
                                                                                            cout<<"---------"<<endl;
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

int main(){
//    freopen("/mnt/d/code/input.in","r",stdin);
    solve();
}