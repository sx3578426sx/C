#include <stdio.h>
//硓筁ㄧΑ―ぃ皚程

int maxv(int [], int);
int main(){
    int i;
    int a[3] = {2, 7, 3};
    int b[5] = {3,1, 6, 9, 0};
    printf("%d\n", maxv(a, 3));
    printf("%d\n", maxv(b, 5));
}

/*
セa[3]蛤b[5]璶糶ㄢㄧΑ柑把计だv[3]蛤v[5]
硂娩Τ疭мォint v[]ㄏノ皚
硂妓讽笿皚ぃ碞ノㄧΑ穨
ぃ筁疭猔種琌int v[N] 硂贺糶猭琌ぃ猭┮砞﹚把计N
┮硂ㄧΑ材把计皚琌ノ皚材把计N玥琌Τ碭
*/
int maxv(int v[], int N){
    int max = v[0], i;
    for(i = 0; i < N; i++){
        if(v[i] > max){
            max = v[i];
        }
    }
    return max;
}

/*贝癚
1.ㄧ计把计﹚璶砞﹚N盾?Ans:ぃ﹚
2.璝v[i]ぃ穦妓安砞a[3]
ノmaxv(a,4)ê禬筁材穦祇ネ或拜肈*/
