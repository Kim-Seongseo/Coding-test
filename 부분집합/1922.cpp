#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int p[2000];
int N, M;
struct edge {
   int s, e, c;
   bool operator<(edge& t) {
      return c < t.c;
   }
};

int find(int x) {
   if (p[x] == x) {
      return x;
   }
   p[x] = find(p[x]);
   return p[x];
}

void u(int x, int y) {
   p[find(x)] = find(y);
}

int main() {
   int TC;
   vector<edge> arr;

   scanf("%d %d", &N, &M);
   for (int i = 1; i <= N; i++) {
      p[i] = i;
   }
   for (int i = 0; i < M; i++) {
      edge e;
      scanf("%d %d %d" , &e.s, &e.e, &e.c);
      arr.push_back(e);
   }
   sort(arr.begin(), arr.end());
   int sum = 0;
   int cnt = 0;
   for (int i = 0; i < M; i++) {
      if (find(arr[i].s) != find(arr[i].e)) {
         u(arr[i].s, arr[i].e);
         sum += arr[i].c;
         cnt++;
      }
      if (cnt == N - 1) {
         break;
      }
   }
   printf("%d\n", sum);

   return 0;
}