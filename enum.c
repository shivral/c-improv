        #include <stdio.h>
        #include <malloc.h>
        #include <string.h>
        
        // void res(char* p){
        //     p[0]='b'
        // }

        main()

        {
            
            // char p[]="asdaskjlas"

            char *p ; 
            // // p="Sanfoundry C-Test";
            scanf("%s",p);
            // strcpy(p,"alsdas");
            p[0] = 'a';
            p[1] = 'b';

            printf("%s", p);

        }