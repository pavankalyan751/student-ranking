struct student{
       char name[30];
       int rollno;
       int marks[5];
       int total;
       };
       int main(){
           printf("=========\n");
           printf("|| student ranking system ||\n");
           printf("=========\n");
           int size ,i,j;
           printf("enter the number of students;");
           scanf("%d",&size);
           struct student s[size];
           for(i<0;i<size;i++){
            s[i].total=0;
            printf("enter  student %d name:",i=1);
            scanf("%[\n]s",s[j].name);
            printf("enter rollno:");
            scanf("%d",&s[i].rollno);
            printf("enter the subject marks:");
            for (j=0;j<5;i++){
                scanf("%d",&s[j].marks[j]);
                s[i].total+=s[i].marks[j];
                }
                }
                for(i=0;i<size;i++){
                  for(j=1+i;j<size;j++){
                     if (s[i].total<s[j].total){
                        int temp=s[i].total;
                        s[i].total=s[i].total;
                        s[j].total=temp;
                        }
                        }
                        }
                        printf("\n rank\+ roolno\+name\+total\n");
                        printf("==========\n");
                        for(i=0;i<size;i++){
                          printf("%d\t%d\t%-15s\t%d\n",i+1,s[i].rollno,s[i].name,s[i].total);       
                          }              
                          }                                                                      
