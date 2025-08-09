#include <string.h>
#include <stdio.h>

void build_index_url(const char *domain, char *index_url);

int main(void)
{
	const char domain[] = "knking.com";
	char index_url[50];

	build_index_url(domain, index_url);

	puts(index_url);
}

void build_index_url(const char *domain, char *index_url)
{
	const char prefix[] = "http://www.", post_fix[] = "/index.html";

	strcpy(index_url, prefix);

	strcat(index_url, domain);

	strcat(index_url, post_fix);
}
