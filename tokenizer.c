#include<stdio.h>

int main(){
	
	char metin[100];
	int i;
	
	printf("METNI GIRINIZ:\n\n");
	gets(metin);
	
	printf("\n\n\n\nGIRILEN METNIN KARAKTERIZE EDILMIS HALI:   {");
	
	for(i=0; metin[i]!='\0'; i++){
		printf("%c",metin[i]);
		printf(",");
	}
	printf("}\n");
	
	
	printf("\n\n\n\nKARAKTERIZE EDILMIS METNIN KELIMELESTIRILMIS HALI:{");
	i=0;
	while(metin[i]!='\0')
    {
        if(((metin[i]>='a' && metin[i]<='z') || (metin[i]>='A' && metin[i]<='Z')) && (metin[i+1]>='0' && metin[i+1]<='9') )
        {
            printf("%c ",metin[i]);
            printf(",");
            
        }
        else if(((metin[i]>='a' && metin[i]<='z') || (metin[i]>='A' && metin[i]<='Z')) && (metin[i+1]>='!' && metin[i+1]<='/') || (metin[i+1] >= ':' && metin[i+1] <= '?') || (metin[i+1] >= '[' && metin[i+1] <= '_'))
        {
        	printf("%c ",metin[i]);
        	printf(",");
            
        }
        else if( (metin[i]>='0' && metin[i]<='9')  && ((metin[i+1]>='a' && metin[i+1]<='z') || (metin[i+1]>='A' && metin[i+1]<='Z')) )
        {
        	printf("%c ",metin[i]);
            printf(",");
            
        }
        else if((metin[i]>='0' && metin[i]<='9') && ((metin[i+1]>='!' && metin[i+1]<='/') || (metin[i+1] >= ':' && metin[i+1] <= '?') || (metin[i+1] >= '[' && metin[i+1] <= '_')) )
		{
			printf("%c ",metin[i]);
        	printf(",");
        	
		}
		else if( (metin[i]>='!' && metin[i]<='/' || (metin[i] >= ':' && metin[i] <= '?') || (metin[i] >= '[' && metin[i] <= '_')) && ((metin[i+1]>='a' && metin[i+1]<='z') || (metin[i+1]>='A' && metin[i+1]<='Z')) )
		{
			printf("%c ",metin[i]);
			printf(",");
			
		}
		else if( (metin[i]>='!' && metin[i]<='/' || (metin[i] >= ':' && metin[i] <= '?') || (metin[i] >= '[' && metin[i] <= '_')) && (metin[i+1]>='0' && metin[i+1]<='9') )
		{
			printf("%c ",metin[i]);
			printf(",");
			
		}
		else if( metin[i]=='\0')
		{
			break;
		}
		else
		{
			printf("%c ",metin[i]);
			
		}
		
        i++;
    }
    printf("}\n\n");
	
	
	
	
	return 0;
}
