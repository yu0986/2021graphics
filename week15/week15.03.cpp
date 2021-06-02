#include <stdio.h> ///printf(),fprintf()
int main(int argc,char**argv)
{
///    FILE * fout = NULL;///檔案的指標 fout output用
///    fout = fopen("檔名.txt","w+");///開黨,使用w+模式
///     printf(     "Hello World");
///    fprintf(fout,"Hello World");
    FILE * fin = NULL; ///fin input 用
    fin = fopen("檔案.txt","r");
/// scanf("%d",&n);  配 int n;
/// scanf("%f",&f);     float f;
/// scanf("%c",&c);     char c;
/// scanf("%s",line);   char line[100];
    char line[100];
    fscanf(fin, "%s", line);
    printf("你讀到了字串: %s\n",line);
    fscanf(fin ,"%s",line);
    printf("你讀到了字串: %s\n",line);
}
