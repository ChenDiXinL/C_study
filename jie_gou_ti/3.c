#include<stdio.h>
#include<string.h>

//最大图书数
#define N 1000
//查找标识值
#define NOTFOYND 0
#define FOUND 1

struct BookInfo
{
    char bookname[101];
    char author[101];
    char pubHouse[101];
    int year;
    float price;
    int pages;
    char shelf[6];
    int nums;
};

void input(struct BookInfo* books, int n);
void showBook(struct BookInfo aBook);
void Findbook(char* bookname_search_x, struct BookInfo* books, int n);

int main()
{
    struct BookInfo books[N];
    int n, k, i;
    scanf("%d", &n);

    input(books, n);

    scanf("%d", &k);
    char bookname_search[101];
    for(i=0; i<k; i++){
        scanf("%s", bookname_search);
        Findbook(bookname_search, books, n);
    }
    return 0;
}

void input(struct BookInfo* books, int n)
{
    int i;
    for(i=0; i<n; i++){
        scanf("%s", books[i].bookname);
        scanf("%s", books[i].author);
        scanf("%s", books[i].pubHouse);
        scanf("%d", &books[i].year);
        scanf("%.2f", &books[i].price);
        scanf("%d", &books[i].pages);
        scanf("%s", books[i].shelf);
        scanf("%d", &books[i].nums);
    }
}

void showBook(struct BookInfo aBook)
{
    // printf("%s\t%s\t%s\t%d\t%f\t%d\t%s\t%d\n",
    //        aBook->bookname, 
    //        aBook->author, 
    //        aBook->pubHouse, 
    //        aBook->year, 
    //        aBook->price, 
    //        aBook->pages, 
    //        aBook->shelf, 
    //        aBook->nums);
    printf("图书名：%s\n", aBook.bookname);
    printf("作者：%s\n", aBook.author);
    printf("出版社：%s\n", aBook.pubHouse);
    printf("出版年份：%d\n", aBook.year);
    printf("价格：%.2f\n", aBook.price);
    printf("页数：%d\n", aBook.pages);
    printf("书架：%s\n", aBook.shelf);
    printf("馆藏：%d\n\n", aBook.nums);
}
void Findbook(char* bookname_search_x, struct BookInfo* books, int n){
    int flag = NOTFOYND;
    for(int i=0; i<n; i++){
        if(books[i].nums != 0 && 
            strcmp(bookname_search_x, books[i].bookname) == 0){
            showBook(books[i]);
            flag = FOUND;
            }
    }
    if(flag == NOTFOYND)
        printf("对不起，没有找到\n");
}

