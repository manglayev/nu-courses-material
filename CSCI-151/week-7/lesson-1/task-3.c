#include <stdio.h>

int main()
{
	struct book
	{
		char title[50];
		char author[50];
		int publishedYear;
		int edition;
		char publisher[50];
	};
	
	struct book learningBook = {"Programming in C", "Kochan G. Stephen", 2014, 4, "Addison-Wesley"};

	printf("book title:%s\n", learningBook.title);
	printf("book author:%s\n", learningBook.author);
	printf("book published year:%d\n", learningBook.publishedYear);
	printf("book edition:%d\n", learningBook.edition);
	printf("book publisher:%s\n", learningBook.publisher);
	return 0;
}
