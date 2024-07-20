int phoneAdd(){
    Record newRecord;
    FILE* fptr;
    fptr=fopen("data.txt","a");
    if(fptr == NULL){
        return -1;
    } 
    printf("\n\n");
    printf("Enter name(max 20 character): ");
    scanf("%s",newRecord.name);
    printf("Enter lastname(max 20 character): ");
    scanf("%s",newRecord.lastname);
    printf("Enter telephone number(max 11 character): ");
    scanf("%s",newRecord.phone);
    fprintf(fptr,"\n%s %s %s",newRecord.name, newRecord.lastname, newRecord.phone);
    fclose(fptr);
    return 0;
}
