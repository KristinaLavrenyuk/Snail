
#include <iostream>
using namespace std;

int main()
{
    int n, i = 1;
    cin >> n;

    for (int y = 1; y <= n; y++) 
    {
        for (int x = 1; x <= n; x++) 
        {
            int i = 1, yy = 1, xx = 1, switcher = 0, circle = 0, c = 1;

            while (i <= n * n) 
            {
                if (yy == y && xx == x) 
                {
                    cout << i;
                    break;
                }

                if (switcher == 0) xx++;
                if (switcher == 1) yy++;
                if (switcher == 2) xx--;
                if (switcher == 3) yy--;

                if (xx == n - circle && yy == 1 + circle) switcher = 1;
                if (xx == n - circle && yy == n - circle) switcher = 2;
                if (xx == 1 + circle && yy == n - circle) switcher = 3;

                i++;
                c++;

                if (c == (n - circle * 2) * 4 - 4) 
                {
                    c = 0;
                    circle++;
                    switcher = 0;
                }
            }
        }
        cout << endl;
    }
    system("pause");
}