#include <stdio.h>
#include <string.h>

struct data{
	char location[101];
	char city[101];
	int price;
	int room;
	int bathroom;
	int carpark;
	char type[101];
	char furnish[101];
}temp[3941];

int count = 0;
int row;
int found = 0;
int pin = 0;

void header(){
	printf("Location\t\t  City\t\t  Price\t     Rooms\tBathroom      Carpark\t Type\t\tFurnish\n");
}

void readfile(){
	FILE *file = fopen("filedata.csv", "r");
	
	char karakter [3941];
	fscanf(file, "%[^\n]\n", karakter);
	if (file == NULL){
		printf("Error opening file.\n");
		return;
	}
	
	
	while (!feof(file)){
		fscanf (file, "%100[^,], %100[^,], %d, %d, %d, %d, %100[^,], %100[^\n]\n", temp[count].location, temp[count].city, &temp[count].price, 
		&temp[count].room, &temp[count].bathroom, &temp[count].carpark, temp[count].type, temp[count].furnish);
		
		count++;
	} fclose(file);
}

void displaydata(){
	int row;
	printf("Number of rows: ");
	scanf("%d", &row); getchar();
	
	header();
	for (int i = 0; i < row; i++){
		printf("%-25s %-15s %-10d %-10d %-13d %-10d %-14s %s\n", temp[i].location, temp[i].city, temp[i].price, temp[i].room, temp[i].bathroom, 
		temp[i].carpark, temp[i].type, temp[i].furnish);
	}
}

void Searchdata(){
	char column[101];
	printf("Choose column: ");
	scanf("%s", column); getchar();
	
	if (strcmp(column, "Location")==0){
		char search[101];
		printf("What data do you want to find? ");
		scanf("%s", search); getchar();
		
		for(int i = 0; i < count; i++){
			if(strcmp(temp[i].location, search) == 0){
				pin++;
			}
		}
		
		if(pin != 0){
			header();
			for (int i = 0; i < count; i++){
				if (strcmp(temp[i].location,search) == 0){
					printf("%-25s %-15s %-10d %-10d %-13d %-10d %-14s %s\n", temp[i].location, temp[i].city, &temp[i].price, temp[i].room, 
					temp[i].bathroom, temp[i].carpark, temp[i].type, temp[i].furnish);
					found++;
					temp[found] = temp[i];
				}
			}		
		}
		if(found == 0){
			printf("Data not found\n");
		}
		
	} 
	else if (strcmp(column, "City") == 0){
 		char search[101];
		printf("What data do you want to find? ");
		scanf("%s", search); getchar();
		
		for(int i = 0; i < count; i++){
			if(strcmp(temp[i].city, search) == 0){
				pin++;
			}
		}
		
		if(pin != 0){
			header();
			for (int i = 0; i < count; i++){
				if (strcmp(temp[i].location,search) == 0){
					printf("%-25s %-15s %-10d %-10d %-13d %-10d %-14s %s\n", temp[i].location, temp[i].city, &temp[i].price, temp[i].room, 
					temp[i].bathroom, temp[i].carpark, temp[i].type, temp[i].furnish);
					found++;
					temp[found] = temp[i];
				}
			}		
		}
		if(found == 0){
			printf("Data not found\n");
		}
	}
	else if (strcmp(column, "Price") == 0){
		int search;
		printf("What data do you want to find? ");
		scanf("%d", &search); getchar();
		
		for(int i = 0; i < count; i++){
			if(search == temp[i].price){
				pin++;
			}
		}
		
		if(pin != 0){
			header();
			for (int i = 0; i < count; i++){
				if (search == temp[i].price){
					printf("%-25s %-15s %-10d %-10d %-13d %-10d %-14s %s\n", temp[i].location, temp[i].city, temp[i].price, temp[i].room, 
					temp[i].bathroom, temp[i].carpark, temp[i].type, temp[i].furnish);
				
					found++;
				}
			}
		}
		
		if(found == 0){
			printf("Data not found\n");
		}
	}
	else if (strcmp(column, "Room") == 0){
		int search;
		printf("What data do you want to find? ");
		scanf("%d", &search); getchar();
		
		for(int i = 0; i < count; i++){
			if(search == temp[i].room){
				pin++;
			}
		}
		
		if(pin != 0){
			header();
			for (int i = 0; i < count; i++){
				if (search == temp[i].room){
					printf("%-25s %-15s %-10d %-10d %-13d %-10d %-14s %s\n", temp[i].location, temp[i].city, temp[i].price, temp[i].room, 
					temp[i].bathroom, temp[i].carpark, temp[i].type, temp[i].furnish);
				
					found++;
				}
			}
		}
		
		if(found == 0){
			printf("Data not found\n");
		}
	}
	else if (strcmp(column, "Bathroom") == 0){
		int search;
		printf("What data do you want to find? ");
		scanf("%d", &search); getchar();
		
		for(int i = 0; i < count; i++){
			if(search == temp[i].bathroom){
				pin++;
			}
		}
		
		if(pin != 0){
			header();
			for (int i = 0; i < count; i++){
				if (search == temp[i].bathroom){
					printf("%-25s %-15s %-10d %-10d %-13d %-10d %-14s %s\n", temp[i].location, temp[i].city, temp[i].price, temp[i].room, 
					temp[i].bathroom, temp[i].carpark, temp[i].type, temp[i].furnish);
				
					found++;
				}
			}
		}
		
		if(found == 0){
			printf("Data not found\n");
		}
	}
	else if (strcmp(column, "Carpark") == 0){
		int search;
		printf("What data do you want to find? ");
		scanf("%d", &search); getchar();
		
		for(int i = 0; i < count; i++){
			if(search == temp[i].carpark){
				pin++;
			}
		}
		
		if(pin != 0){
			header();
			for (int i = 0; i < count; i++){
				if (search == temp[i].carpark){
					printf("%-25s %-15s %-10d %-10d %-13d %-10d %-14s %s\n", temp[i].location, temp[i].city, temp[i].price, temp[i].room, 
					temp[i].bathroom, temp[i].carpark, temp[i].type, temp[i].furnish);
				
					found++;
				}
			}
		}
		
		if(found == 0){
			printf("Data not found\n");
		}
	}
	else if (strcmp(column, "Type") == 0){
		char search[101];
		printf("What data do you want to find? ");
		scanf("%s", search); getchar();
		
		for(int i = 0; i < count; i++){
			if(strcmp(temp[i].location, search) == 0){
				pin++;
			}
		}
		
		if(pin != 0){
			header();
			for (int i = 0; i < count; i++){
				if (strcmp(temp[i].location,search) == 0){
					printf("%-25s %-15s %-10d %-10d %-13d %-10d %-14s %s\n", temp[i].location, temp[i].city, &temp[i].price, temp[i].room, 
					temp[i].bathroom, temp[i].carpark, temp[i].type, temp[i].furnish);
					found++;
					temp[found] = temp[i];
				}
			}		
		}
		if(found == 0){
			printf("Data not found\n");
		}
	}
	else if (strcmp(column, "Furnish") == 0){
		char search[101];
		printf("What data do you want to find? ");
		scanf("%s", search); getchar();
		
		for(int i = 0; i < count; i++){
			if(strcmp(temp[i].furnish, search) == 0){
				pin++;
			}
		}
		
		if(pin != 0){
			header();
			for (int i = 0; i < count; i++){
				if (strcmp(temp[i].furnish,search) == 0){
					printf("%-25s %-15s %-10d %-10d %-13d %-10d %-14s %s\n", temp[i].location, temp[i].city, &temp[i].price, temp[i].room, 
					temp[i].bathroom, temp[i].carpark, temp[i].type, temp[i].furnish);
					found++;
					temp[found] = temp[i];
				}
			}		
		}
		if(found == 0){
			printf("Data not found\n");
		}
	}
	
}

void outputsort(int row, struct data temp[]){
	header();
	for (int i=0; i<row; i++){
		printf("%-25s %-15s %-10d %-10d %-13d %-10d %-14s %s\n", temp[i].location, temp[i].city, temp[i].price, 
		temp[i].room, temp[i].bathroom, temp[i].carpark, temp[i].type, temp[i].furnish);
	}
}

void ascending(char column[], struct data temp[], int count){
	if(strcmp(column, "Location") == 0){
		for (int j = count-1; j > 0; j--){
			for(int k = 0; k < j; k++){
				if(strcmp(temp[k].location, temp[k+1].location) > 0){
					data swap1 = temp[k];
					temp[k] = temp [k+1];
					temp[k+1] = swap1;
				}
			}
		}
		outputsort(5, temp);
	}
	else if(strcmp(column, "City") == 0){
		for (int j = count-1; j > 0; j--){
			for(int k = 0; k < j; k++){
				if(strcmp(temp[k].city, temp[k+1].city) > 0){
					data swap1 = temp[k];
					temp[k] = temp [k+1];
					temp[k+1] = swap1;
				}
			}
		}
		outputsort(5, temp);
	}
	else if(strcmp(column, "Price") == 0){
		for (int j = count-1; j > 0; j--){
			for(int k = 0; k < j; k++){
				if(temp[k].price > temp[k+1].price){
					data swap1 = temp[k];
					temp[k] = temp [k+1];
					temp[k+1] = swap1;
				}
			}
		}
		outputsort(5, temp);
	}
	else if(strcmp(column, "Rooms") == 0){
		for (int j = count-1; j > 0; j--){
			for(int k = 0; k < j; k++){
				if(temp[k].room > temp[k+1].room){
					data swap1 = temp[k];
					temp[k] = temp [k+1];
					temp[k+1] = swap1;
				}
			}
		}
		outputsort(5, temp);
	}
	else if(strcmp(column, "Bathroom") == 0){
		for (int j = count-1; j > 0; j--){
			for(int k = 0; k < j; k++){
				if(temp[k].bathroom > temp[k+1].bathroom){
					data swap1 = temp[k];
					temp[k] = temp [k+1];
					temp[k+1] = swap1;
				}
			}
		}
		outputsort(5, temp);
	}
	else if(strcmp(column, "Carpark") == 0){
		for (int j = count-1; j > 0; j--){
			for(int k = 0; k < j; k++){
				if(temp[k].carpark > temp[k+1].carpark){
					data swap1 = temp[k];
					temp[k] = temp [k+1];
					temp[k+1] = swap1;
				}
			}
		}
		outputsort(5, temp);
	}
	else if(strcmp(column, "Type") == 0){
		for (int j = count-1; j > 0; j--){
			for(int k = 0; k < j; k++){
				if(strcmp(temp[k].type, temp[k+1].type) > 0){
					data swap1 = temp[k];
					temp[k] = temp [k+1];
					temp[k+1] = swap1;
				}
			}
		}
		outputsort(5, temp);
	}
	else if(strcmp(column, "Furnish") == 0){
		for (int j = count-1; j > 0; j--){
			for(int k = 0; k < j; k++){
				if(strcmp(temp[k].furnish, temp[k+1].furnish) > 0){
					data swap1 = temp[k];
					temp[k] = temp [k+1];
					temp[k+1] = swap1;
				}
			}
		}
		outputsort(5, temp);
	}
}

void descending(char column[], struct data temp[], int count){
	if(strcmp(column, "Location") == 0){
		for (int j = count-1; j > 0; j--){
			for(int k = 0; k < j; k++){
				if(strcmp(temp[k].location, temp[k+1].location) < 0){
					data swap1 = temp[k];
					temp[k] = temp [k+1];
					temp[k+1] = swap1;
				}
			}
		}
		outputsort(5, temp);
	}
	else if(strcmp(column, "City") == 0){
		for (int j = count-1; j > 0; j--){
			for(int k = 0; k < j; k++){
				if(strcmp(temp[k].city, temp[k+1].city) < 0){
					data swap1 = temp[k];
					temp[k] = temp [k+1];
					temp[k+1] = swap1;
				}
			}
		}
		outputsort(5, temp);
	}
	else if(strcmp(column, "Price") == 0){
		for (int j = count-1; j > 0; j--){
			for(int k = 0; k < j; k++){
				if(temp[k].price < temp[k+1].price){
					data swap1 = temp[k];
					temp[k] = temp [k+1];
					temp[k+1] = swap1;
				}
			}
		}
		outputsort(5, temp);
	}
	else if(strcmp(column, "Rooms") == 0){
		for (int j = count-1; j > 0; j--){
			for(int k = 0; k < j; k++){
				if(temp[k].room < temp[k+1].room){
					data swap1 = temp[k];
					temp[k] = temp [k+1];
					temp[k+1] = swap1;
				}
			}
		}
		outputsort(5, temp);
	}
	else if(strcmp(column, "Bathroom") == 0){
		for (int j = count-1; j > 0; j--){
			for(int k = 0; k < j; k++){
				if(temp[k].bathroom < temp[k+1].bathroom){
					data swap1 = temp[k];
					temp[k] = temp [k+1];
					temp[k+1] = swap1;
				}
			}
		}
		outputsort(5, temp);
	}
	else if(strcmp(column, "Carpark") == 0){
		for (int j = count-1; j > 0; j--){
			for(int k = 0; k < j; k++){
				if(temp[k].carpark < temp[k+1].carpark){
					data swap1 = temp[k];
					temp[k] = temp [k+1];
					temp[k+1] = swap1;
				}
			}
		}
		outputsort(5, temp);
	}
	else if(strcmp(column, "Type") == 0){
		for (int j = count-1; j > 0; j--){
			for(int k = 0; k < j; k++){
				if(strcmp(temp[k].type, temp[k+1].type) < 0){
					data swap1 = temp[k];
					temp[k] = temp [k+1];
					temp[k+1] = swap1;
				}
			}
		}
		outputsort(5, temp);
	}
	else if(strcmp(column, "Furnish") == 0){
		for (int j = count-1; j > 0; j--){
			for(int k = 0; k < j; k++){
				if(strcmp(temp[k].furnish, temp[k+1].furnish) < 0){
					data swap1 = temp[k];
					temp[k] = temp [k+1];
					temp[k+1] = swap1;
				}
			}
		}
		outputsort(5, temp);
	}
}

void sortdata(){
	char column[101];
	printf("Choose column: ");
	scanf("%s", column); getchar();
	char sort[15];
	printf("Sort ascending or descending? ");
	scanf("%s", sort);
	
		
	if(strcmp(sort, "asc") == 0 || strcmp(sort, "ascending") == 0){
		ascending(column, temp, count);
	}
	else if(strcmp(sort, "dsc") == 0 || strcmp(sort, "descending") == 0){
		descending(column, temp, count);
	}
}

void exportdata(){
	char filename[101];
    printf("File name: ");
    scanf("%s", filename); getchar();
    strcat(filename, ".csv");

    FILE *file = fopen(filename, "w");
    if (file == NULL){
        printf("Error creating file.\n");
        return;
    }

    fprintf(file, "Location 1,Location 2,Price,Rooms,Bathrooms,Carparks,Type,Furnish\n");
    for (int i = 0; i < count; i++) {
        fprintf(file, "%s,%s,%d,%d,%d,%d,%s,%s\n",
                temp[i].location, temp[i].city, temp[i].price, temp[i].room,
                temp[i].bathroom, temp[i].carpark, temp[i].type, temp[i].furnish);
    }

    fclose(file);
    printf("Data successfully written to file %s!\n", filename);
}

int main(){
	int choice;
	readfile();
	
	do {
		printf("What do you want to do?\n");
		printf("1. Display Data\n");
		printf("2. Search Data\n");
		printf("3. Sort Data\n");
		printf("4. Export Data\n");
		printf("5. Exit\n");
		printf("Your choice: ");
		scanf("%d", &choice);
		
		switch (choice){
			case 1: {
				displaydata();
				break;
			}
			case 2: {
				Searchdata();
				break;
			}
			case 3: {
				sortdata();
				break;
			}
			case 4: {
				exportdata();
				break;
			}
		}
	} 
	while (choice != 5);
	
	return 0;
}
