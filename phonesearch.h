int phoneSearch(char* ptSearch){
    Record currentRecord;
    int i =0;
    FILE* fptr;
    fptr=fopen("data.txt","r");
    if(fptr == NULL){
        return -1;
    } 
    
    while(!feof(fptr)){
        fscanf(fptr,"%s%s%s",currentRecord.name,currentRecord.lastname,currentRecord.phone);
        if(strcmp(ptSearch,currentRecord.name)){
        fprintf("%s\t\t\t",currentRecord.name);
        fprintf("%s\t\t\t",currentRecord.lastname);
        fprintf("%s\n",currentRecord.phone);
        i++;
    }
    }
    fclose(fptr);
    return i;
}
