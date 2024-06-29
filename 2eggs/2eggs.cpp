#include "2eggs.h"
#include <bits/stdc++.h>

using namespace std;

int height_threshold(int N, int Q)
{
    for(int i=Q,h=Q-1;i<=N;i+=h,h--) {
        if(drop_egg(1,i)) {
            for(int j=i-h;j<i;j++) {
                if(drop_egg(2,j)) return j;
            }
            return i;
        }
    }
    return N;
}