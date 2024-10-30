#include <bits/stdc++.h>
using namespace std;
#define optimize()              \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
#define pi 3.14159265358979323846264338327950288419716939937510
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;
#define pb push_back
#define vec(x) vector<x>
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define all(v) ((v).begin()), ((v).end())
#define rall(v) ((v).rbegin()), ((v).rend())
#define sz(v) ((int)((v).size()))
#define ff first
#define ss second
#define sfor(i, s, n, m) for (long long i = s; i < n; i += m)
#define refor(i, n, s, m) for (ll i = n - 1; i >= s; i -= m)
#define print(x) cout << x << " "
#define input(x) cin >> x
#define endl cout << "\n"
#define db double
#define ll long long
void ShowInputandOutputInfile()
{
  system("cls");
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
}

void solve()
{
  int n;
  long long sum1 = 0, sum2 = 0;
  cin >> n;

  if((n / 2) % 2 != 0)
  {
    NO;
    return;
  }

  YES;

  long long j = 2;
  for(int i = 1; i <= (n / 2); i++)
  {
    sum1 += j;
    cout << j << " ";
    j += 2;
  }

  j = 1;
  for(int i = 1; i <= (n / 2) - 1; i++)
  {
    sum2 += j;
    cout << j << " ";
    j += 2;
  }

  cout << sum1 - sum2;

  endl;
}

int main()
{
  //ShowInputandOutputInfile();

  optimize();

  int test = 1;
  cin >> test;

  while (test--)
  {
    solve();
  }
}
