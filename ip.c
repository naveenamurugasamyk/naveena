 #include<stdio.h> 
    #include<string.h> 
    int main()
    {
        char a[30]="1722038665";
        int l,k=0,i;
        l=strlen(a);
        for(i=0;i<l;) 
        if(k<=2)
        { 
            printf("%c",a[i]);
            k++; i++; 
            
        } 
        else
        { 
            printf(".");
            k=0;
        } 
    return 0; 
        
    }
