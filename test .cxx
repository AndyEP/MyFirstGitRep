#include<stdio.h>
#include<string.h>

typedef struct
{
	enum en_Sextual (m_Boy, m_Girl)，
	int i_Age = 23，
	float f_Prize = 0.0F
}WHO;

typedef union
{
	char sz_Admin[20] = "I'm administrator"，
	char szWho[30] = {0}
}STR;

void fun_ExportStruct(WHO* construct);
void fun_ExportUnion(STR* integral);

int main(void)
{
	WHO* structpoint_Alice;
	structpoint_Alice->en_Sextual = m_Boy;
	STR* unionpoint_Words;
	strcat(unionpoint_Words->szWho,"Hello, I'm a human who you created");
	
	fun_ExportStruct(structpoint_Alice);
	fun_ExportUnion(unionpoint_Words);
	
	system("pause");
	return 0;
}

void fun_ExportStruct(WHO* construct)
{
	printf("Here is the info stored in construct:\n");
	printf("I'm a %s\n", *(construct->en_Sextual)? "Girl":"Boy");
	printf("My age is %d\n", *(construct->i_Age));
	printf("Please evaluate a prize regarding me:"); scanf("%f", construct->f_Prize);
	getchar();
	printf("\nSo, I'm now worth $%5.5f\nThanks, Bye!");
	
	return;
}

void fun_ExportUnion(STR* integral)
{
	printf("Now, please follow the word instruction to continue:\n");
	printf("%s", integral->szWho)；
	
	return;
}

