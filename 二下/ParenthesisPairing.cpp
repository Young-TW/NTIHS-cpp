#include <bits/stdc++.h>
int main()
{
    char in[210], ch[9]="([{<)]}>";
    int S[210], top; // stack
    while (scanf("%s",in)!=EOF)  //輸入括符字串
    {
        top=-1; // clear stack
        int len=strlen(in); //字串長度
        assert(len<=150);
        bool error=false;
        for (int i=0; i<len; i++)
        {
            int k=strchr(ch,in[i])-ch;  //搜索字符串中第一次出現的字符
            //or using: for (k=0; k<6 && ch[k]!=in[i]; k++);
            assert(k<8); // no invalid char
            if (k<4) // left
                S[++top]=k; // push
            else
            {
                if (top<0 || k!=S[top]+4)   //mismatch
                {
                    error=true;
                    break;
                }
                top--; // pop
            }
        }
        if (top>=0) error=true;
        printf((error)?"no\n":"yes\n");
    }
    return 0;
}