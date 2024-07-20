int phoneList(){
    Record currentRecord;
    FILE* fptr;
    fptr=fopen("data.txt","r");
    if(fptr == NULL){
        return -1;
    } 
    printf("\n\nName\t\t\tLast Name\t\t\tTelephone\n");
    printf("----\t\t\t---------\t\t\tTelephone\n\n");
    while(!feof(fptr)){
        fscanf(fptr,"%s%s%s",currentRecord.name,currentRecord.lastname,currentRecord.phone);
        fprintf("%s\t\t\t",currentRecord.name);
        fprintf("%s\t\t\t",currentRecord.lastname);
        fprintf("%s\n",currentRecord.phone);
        
    }
    fclose(fptr);   
}
