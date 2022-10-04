#include <stdio.h>
int main()
{
    struct player
    {
        char name[100];
        int level;
        int score;
    };
    struct player p[5], *ptr;
    for (int i = 0; i < 5; i++)
    {
        scanf("%s", p[i].name);
        scanf("%d", &p[i].level);
        scanf("%d", &p[i].score);
    }
    FILE *fp;
    fp = fopen("testfile.txt", "w");
    ptr = p;
    for (int j = 0; j < 5; j++)
    {
        fprintf(fp, "%s %d %d\n", ptr->name, ptr->level, ptr->score);
        ptr++;
    }
    fclose(fp);
    return 0;
}