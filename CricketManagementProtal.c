#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Country{
	char country_name[100];
	char country_played[100];
	int country_firstclassplayed;
	char country_leagueplayed[100];
	char country_contract[100];
};
struct Status {
	char condition[100];
	int debut_date;
	int debut_month;
	int debut_year;
	int start_date;
	int start_month;
	int start_year;
	struct Country country;
};
struct Milstone {
	int no_of_fifties;
	int no_of_hundred;
	int no_of_doublehundred;
	int no_of_fivewickethaul;
	int no_of_matches;
	double strike_rate;
	int highest_score;
};
struct Player {
	int player_number;
	char player_firstname[100];
	char player_lastname[100];
	char player_type[100];
	struct Country country;
	struct Status status;
	struct Milstone milstone;
};
struct Player player[200];
int number_of_players = 0;

void AddPlayerDetail(){
	int i;
	int temp_player_number;
	printf("\nEnter the Code of Player: ");
	scanf("%d",&temp_player_number);
	
	for (i=0;i<number_of_players;i++){
		if (player[i].player_number==temp_player_number){
			printf("\nThis Player Number already exists.");
			return;
		}
	}
	int w;
	player[number_of_players].player_number = temp_player_number;
	printf("\n1. India\n2. England\n3. Australia\n4. Sri Lanka\n5. South Africa\n6. New Zeland\n7. Others");
	printf("\nEnter the Country Code: ");
	scanf("%d",&w);
	switch (w){
		case 1: strcpy(player[number_of_players].country.country_name,"India");break;
		case 2: strcpy(player[number_of_players].country.country_name,"England");break;
		case 3: strcpy(player[number_of_players].country.country_name,"Australia");break;
		case 4: strcpy(player[number_of_players].country.country_name,"Sri Lanka");break;
		case 5: strcpy(player[number_of_players].country.country_name,"South Africa");break;
		case 6: strcpy(player[number_of_players].country.country_name,"New Zeland");break;
		default: strcpy(player[number_of_players].country.country_name,"Others");break;
	}
	printf("\nEnter the First Name: ");
	scanf("%s",player[number_of_players].player_firstname);
	printf("\nEnter the Last Name: ");
	scanf("%s",player[number_of_players].player_lastname);
	int qw;
	printf("\nEnter the Type of Player(1. All Rounder\t 2. Bowler \t 3. Batter \t Any other Number. Wicketkeeper Batter): ");
	scanf("%d",&qw);
	switch (qw){
		case 1: strcpy(player[number_of_players].player_type,"All Rounder");break;
		case 2: strcpy(player[number_of_players].player_type,"Bowler");break;
		case 3: strcpy(player[number_of_players].player_type,"Batter");break;
		default: strcpy(player[number_of_players].player_type,"Wicketkeepter Batter");break;
	}
	player[number_of_players].country.country_firstclassplayed=1;
				int abcd;
				int asd;
				printf("\nPlayed %s Country League?(1. Yes \tAny Other Number. No): ",player[number_of_players].country.country_name);
				scanf("%d",&abcd);
				switch (abcd){
					case 1:
						strcpy(player[number_of_players].country.country_leagueplayed,"Yes");
						break;
					default:
						printf("Are you sure you have'nt played %s National League? (1. Yes \tAny Other Number. No ): ");
						scanf("%d",&asd);
						switch (asd){
							case 1: strcpy(player[number_of_players].country.country_leagueplayed,"No");break;
							default: strcpy(player[number_of_players].country.country_leagueplayed,"Yes");break;
						}
				}
	printf("\n1. Fit to play\n2. Injured\nAny Other Number. Retired");
	int omega;
	printf("\nEnter the Status of Player: ");
	scanf("%d",&omega);
	if (omega==1){
		int alpha;
		int z;
		strcpy(player[number_of_players].status.condition,"Fit & Active");
		printf("\nHas the Player Played for the Country(1=Yes; Any Other Number=No): ");
		scanf("%d", &alpha);
		switch (alpha){
			case 1:
				strcpy(player[number_of_players].country.country_played,"Yes");
				printf("\nEnter the Date of Debut: ");
				scanf("%d",&player[number_of_players].status.debut_date);
				printf("\nEnter the Month of Debut: ");
				scanf("%d",&player[number_of_players].status.debut_month);
				printf("\nEnter the Year of Debut: ");
				scanf("%d",&player[number_of_players].status.debut_year);
				printf("\n1. A\n2. B\n3. C\nAny Other Number. No Contract for Money");
				printf("\nEnter the Contract Number: ");
				scanf("%d", &z);
				switch (z) {
					case 1: strcpy(player[number_of_players].country.country_contract,"A");break;
					case 2: strcpy(player[number_of_players].country.country_contract,"B");break;
					case 3: strcpy(player[number_of_players].country.country_contract,"C");break;
					default: strcpy(player[number_of_players].country.country_contract,"NONE");
					break;
				}
			default:
				strcpy(player[number_of_players].country.country_played,"No");
				printf("\nEnter the Date of Start of Cricket: ");
				scanf("%d",&player[number_of_players].status.start_date);
				printf("\nEnter the Month of Start of Cricket: ");
				scanf("%d",&player[number_of_players].status.start_month);
				printf("\nEnter the Year of Start of Cricket: ");
				scanf("%d",&player[number_of_players].status.start_year);
				strcpy(player[number_of_players].country.country_contract,"D");
				player[number_of_players].country.country_firstclassplayed=1;
				break;
		}
	}
	else if (omega==2){
		int beta;
		int z;
		strcpy(player[number_of_players].status.condition,"Injured & Active");
		printf("\nHas the Player Played for the Country(1=Yes; Any Other Number=No): ");
		scanf("%d", &beta);
		switch (beta){
			case 1:
				strcpy(player[number_of_players].country.country_played,"Yes");
				printf("\nEnter the Date of Debut: ");
				scanf("%d",&player[number_of_players].status.debut_date);
				printf("\nEnter the Month of Debut: ");
				scanf("%d",&player[number_of_players].status.debut_month);
				printf("\nEnter the Year of Debut: ");
				scanf("%d",&player[number_of_players].status.debut_year);
				printf("\n1. A\n2. B\n3. C\nAny Other Number. No Contract for Money");
				printf("\nEnter the Contract Number: ");
				scanf("%d", &z);
				switch (z) {
					case 1: strcpy(player[number_of_players].country.country_contract,"A");break;
					case 2: strcpy(player[number_of_players].country.country_contract,"B");break;
					case 3: strcpy(player[number_of_players].country.country_contract,"C");break;
					default: strcpy(player[number_of_players].country.country_contract,"NONE");break;
				}
				
			default:
				strcpy(player[number_of_players].country.country_played,"No");
				printf("\nEnter the Date of Start of Cricket: ");
				scanf("%d",&player[number_of_players].status.start_date);
				printf("\nEnter the Month of Start of Cricket: ");
				scanf("%d",&player[number_of_players].status.start_month);
				printf("\nEnter the Year of Start of Cricket: ");
				scanf("%d",&player[number_of_players].status.start_year);
				strcpy(player[number_of_players].country.country_contract,"D");
				player[number_of_players].country.country_firstclassplayed=1;
				break;
		}
	}
	else {
		int gama;
		int z;
		strcpy(player[number_of_players].status.condition,"Retired");
		printf("\nHas the Player Played for the Country(1=Yes; Any Other Number=No): ");
		scanf("%d", &gama);
		switch (gama){
			case 1:
				strcpy(player[number_of_players].country.country_played,"Yes");
				printf("\nEnter the Date of Debut: ");
				scanf("%d",&player[number_of_players].status.debut_date);
				printf("\nEnter the Month of Debut: ");
				scanf("%d",&player[number_of_players].status.debut_month);
				printf("\nEnter the Year of Debut: ");
				scanf("%d",&player[number_of_players].status.debut_year);
				printf("\n1. A\n2. B\n3. C\nAny Other Number. No Contract for Money");
				printf("\nEnter the Contract Number: ");
				scanf("%d", &z);
				switch (z) {
					case 1: strcpy(player[number_of_players].country.country_contract,"A");break;
					case 2: strcpy(player[number_of_players].country.country_contract,"B");break;
					case 3: strcpy(player[number_of_players].country.country_contract,"C");break;
					default: strcpy(player[number_of_players].country.country_contract,"NONE");break;
				}
				break;
			default:
				strcpy(player[number_of_players].country.country_played,"No");
				printf("\nEnter the Date of Start of Cricket: ");
				scanf("%d",&player[number_of_players].status.start_date);
				printf("\nEnter the Month of Start of Cricket: ");
				scanf("%d",&player[number_of_players].status.start_month);
				printf("\nEnter the Year of Start of Cricket: ");
				strcpy(player[number_of_players].country.country_contract,"D");
				player[number_of_players].country.country_firstclassplayed=1;
				break;
		}
	}
	number_of_players++;
 printf("\nPlayer added successfully!\n");
}

void MilestoneUpdate(){
	int i,j;
 int play, choice, found = 0;
 printf("\nEnter Player Number to add Milstone: ");
 scanf("%d", &play);
 for (i=0;i<number_of_players;i++){
 	if (player[i].player_number==play){
 		found=1;
			printf("\n\t\t\t\t\t\tUpdate all Statistics of the Player\n");
			printf("\t\t\t\t\t\t-------------------------------------");
			
			printf("\nEnter the Number of Matches played by %s %s: ",player[i].player_firstname,player[i].player_lastname);
			scanf("%d",&player[i].milstone.no_of_matches);
			printf("Enter the Number of Fifties hit by %s %s: ",player[i].player_firstname,player[i].player_lastname);
			scanf("%d",&player[i].milstone.no_of_fifties);
			printf("Enter the Number of Hundreds hit by %s %s: ",player[i].player_firstname,player[i].player_lastname);
			scanf("%d",&player[i].milstone.no_of_hundred);
			printf("Enter the Number of Double Hundreds hit by %s %s: ",player[i].player_firstname,player[i].player_lastname);
			scanf("%d",&player[i].milstone.no_of_doublehundred);
			printf("Enter the Career Strike Rate of %s %s: ",player[i].player_firstname,player[i].player_lastname);
			scanf("%lf",&player[i].milstone.strike_rate);
			printf("Enter the Number of 5 Wicket Haul taken by %s %s: ",player[i].player_firstname,player[i].player_lastname);
			scanf("%d",&player[i].milstone.no_of_fivewickethaul);
			printf("Enter the Highest Score hit by %s %s: ",player[i].player_firstname,player[i].player_lastname);
			scanf("%d",&player[i].milstone.highest_score);
		}
		else if(!found) {
			printf("\nPlayer Not Found!\n");
		}
 }
}

void NumberofPlayers(){
	if (number_of_players==0){
		printf("First Enter Player Details.");
		}
	else {
		printf("The Number of Players added are counted to be %d",number_of_players);
		}
}
void ChangeStatus() {
    int i, play, choice, confirm;
    int found = 0;

    printf("\nEnter Player Number to update status: ");
    scanf("%d", &play);

    for (i = 0; i < number_of_players; i++) {
        if (player[i].player_number == play) {
            found = 1;

            printf("\nWhat do you want the selected player status to be?: \n");
            printf("1. Retire\n2. Injured & Active\n3. Fit & Active");
            printf("\nChoose your Option (1-3): ");
            scanf("%d", &choice);

            printf("Are you sure you want to continue with choice %d? (1: Yes; Any Other Number: No): ", choice);
            scanf("%d", &confirm);

            if (confirm != 1) {
                printf("Operation cancelled.\n");
                return;
            }

            switch (choice) {
                case 1:
                    strcpy(player[i].status.condition, "Retired");
                    printf("Status updated to Retired.\n");
                    break;

                case 2:
                    strcpy(player[i].status.condition, "Injured & Active");
                    printf("Status updated to Injured & Active.\n");
                    break;

                case 3:
                    strcpy(player[i].status.condition, "Fit & Active");
                    printf("Status updated to Fit & Active.\n");
                    break;

                default:
                    printf("Invalid choice.\n");
                    break;
            }
            break;
        }
    }

    if (!found)
        printf("\nPlayer not found.\n");
}
void UpdateContract() {
    int i, play, choice, confirm, found = 0;

    printf("\nEnter Player Number to update contract: ");
    scanf("%d", &play);

    for (i = 0; i < number_of_players; i++) {
        if (player[i].player_number == play) {
            found = 1;
            printf("\nSelect new contract:\n1. A\n2. B\n3. C\nChoice: ");
            scanf("%d", &choice);
            printf("Confirm choice %d? (1: Yes): ", choice);
            scanf("%d", &confirm);
            if (confirm != 1) { printf("Cancelled.\n"); return; }

            if (choice == 1) strcpy(player[i].country.country_contract, "A");
            else if (choice == 2) strcpy(player[i].country.country_contract, "B");
            else if (choice == 3) strcpy(player[i].country.country_contract, "C");
            else { printf("Invalid input.\n"); return; }

            printf("Contract updated!\n");
            return;
        }
    }

    if (!found) printf("Player not found.\n");
}

void ViewingOptions(){
 int choice,i,found=0,num_input;
 char str_input[100];
 if(number_of_players==0){printf("No players added yet.\n");return;}
 printf("==== View Player by Filter ====\n");
 printf("1. Player Number\n2. First Name\n3. Last Name\n4. Contract Type\n5. Player Type\n6. Player Condition\nChoose Option: ");
 scanf("%d",&choice);
 switch(choice){
  case 1:
   printf("Enter Player Number: ");scanf("%d",&num_input);
   for(i=0;i<number_of_players;i++)
    if(player[i].player_number==num_input){
     found=1;
     printf("\n#%d: %s %s | Type: %s | Country: %s | Contract: %s | Status: %s\n",
     player[i].player_number,player[i].player_firstname,player[i].player_lastname,
     player[i].player_type,player[i].country.country_name,
     player[i].country.country_contract,player[i].status.condition);}
   break;
  case 2:
   printf("Enter First Name: ");scanf("%s",str_input);
   for(i=0;i<number_of_players;i++)
    if(strcmp(player[i].player_firstname,str_input)==0){
     found=1;
     printf("\n#%d: %s %s | Type: %s | Country: %s | Contract: %s | Status: %s\n",
     player[i].player_number,player[i].player_firstname,player[i].player_lastname,
     player[i].player_type,player[i].country.country_name,
     player[i].country.country_contract,player[i].status.condition);}
   break;
  case 3:
   printf("Enter Last Name: ");scanf("%s",str_input);
   for(i=0;i<number_of_players;i++)
    if(strcmp(player[i].player_lastname,str_input)==0){
     found=1;
     printf("\n#%d: %s %s | Type: %s | Country: %s | Contract: %s | Status: %s\n",
     player[i].player_number,player[i].player_firstname,player[i].player_lastname,
     player[i].player_type,player[i].country.country_name,
     player[i].country.country_contract,player[i].status.condition);}
   break;
  case 4:
   printf("Enter Contract Type (A/B/C/D/NONE): ");scanf("%s",str_input);
   for(i=0;i<number_of_players;i++)
    if(strcmp(player[i].country.country_contract,str_input)==0){
     found=1;
     printf("\n#%d: %s %s | Type: %s | Country: %s | Contract: %s | Status: %s\n",
     player[i].player_number,player[i].player_firstname,player[i].player_lastname,
     player[i].player_type,player[i].country.country_name,
     player[i].country.country_contract,player[i].status.condition);}
   break;
  case 5:
   printf("Enter Player Type: ");scanf(" %[^\n]s",str_input);
   for(i=0;i<number_of_players;i++)
    if(strcmp(player[i].player_type,str_input)==0){
     found=1;
     printf("\n#%d: %s %s | Type: %s | Country: %s | Contract: %s | Status: %s\n",
     player[i].player_number,player[i].player_firstname,player[i].player_lastname,
     player[i].player_type,player[i].country.country_name,
     player[i].country.country_contract,player[i].status.condition);}
   break;
  case 6:
   printf("Enter Player Condition: ");scanf(" %[^\n]s",str_input);
   for(i=0;i<number_of_players;i++)
    if(strcmp(player[i].status.condition,str_input)==0){
     found=1;
     printf("\n#%d: %s %s | Type: %s | Country: %s | Contract: %s | Status: %s\n",
     player[i].player_number,player[i].player_firstname,player[i].player_lastname,
     player[i].player_type,player[i].country.country_name,
     player[i].country.country_contract,player[i].status.condition);}
   break;
  default: printf("Invalid Option.\n");return;
 }
 if(!found) printf("No player matched your filter.\n");
}

void AllPlayerInfo() {
  int i;
  if (number_of_players == 0) {
    printf("No players added yet.\n");
    return;
  }

  for (i = 0; i < number_of_players; i++) {
    printf("\nPlayer Number: %d\n", player[i].player_number);
    printf("Name: %s %s\n", player[i].player_firstname, player[i].player_lastname);
    printf("Player Type: %s\n", player[i].player_type);

    printf("Country: %s\n", player[i].country.country_name);
    printf("Played for Country: %s\n", player[i].country.country_played);
    printf("First Class Played: %d\n", player[i].country.country_firstclassplayed);
    printf("Country League Played: %s\n", player[i].country.country_leagueplayed);
    printf("Country Contract: %s\n", player[i].country.country_contract);

    printf("Status Condition: %s\n", player[i].status.condition);

    if (strcmp(player[i].country.country_played, "Yes") == 0) {
      printf("Debut Date: %02d-%02d-%d\n", player[i].status.debut_date, player[i].status.debut_month, player[i].status.debut_year);
    }
    if (strcmp(player[i].country.country_played, "No") == 0) {
      printf("Start Date: %02d-%02d-%d\n", player[i].status.start_date, player[i].status.start_month, player[i].status.start_year);
    }

    printf("\t\t\t\t\t\tCareer Statistics of %s %s\n",player[i].player_firstname,player[i].player_lastname);
    printf("\t\t\t\t\t\t----------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t\t\t\t____________________________________________________________");
    printf("\n\t\t\t\t\t\t| Matches: %d                                                |",player[i].milstone.no_of_matches);
    printf("\n\t\t\t\t\t\t| Fifties: %d                                                |",player[i].milstone.no_of_fifties);
    printf("\n\t\t\t\t\t\t| Hundreds: %d                                               |",player[i].milstone.no_of_hundred);
    printf("\n\t\t\t\t\t\t| Double Hundreds: %d                                        |",player[i].milstone.no_of_doublehundred);
    printf("\n\t\t\t\t\t\t| Strike Rate: %.2lf                                         |",player[i].milstone.strike_rate);
    printf("\n\t\t\t\t\t\t| Five Wicket Haul: %d                                       |",player[i].milstone.no_of_fivewickethaul);
    printf("\n\t\t\t\t\t\t| Highest Score: %d                                          |",player[i].milstone.highest_score);
    printf("\n\t\t\t\t\t\t--------------------------------------------");
  }
}

int main() {
 char username[100] = "admin";
 char password[100] = "password";
 char user[100];
 char pass[100];
 char name[35];
 int j, choice,o;

 for (j = 1; j <= 3; j++) {
  printf("Enter username: ");
  scanf("%s", user);

  printf("Enter password: ");
  scanf("%s", pass);

  if (strcmp(user, username) != 0 || strcmp(pass, password) != 0) {
      if (j != 3) {
          printf("\nWrong username or password. Try again.\n");
          printf("Tries left: %d\n", 3 - j);
      }

      else {
          printf("\nYou tried too many times. Access Denied.\n");
      }
  }

  else {
      printf("Enter your first name: ");
      scanf("%s", name);
      
      printf("\t\t\t\t\t\t____________________________________________________");
      printf("\n\t\t\t\t\t\t|Welcome, Mr. %s! Login successful.           |\n", name);
      printf("\t\t\t\t\t\t|You have entered the Cricket Management Portal!   |\n");
      printf("\t\t\t\t\t\t|__________________________________________________|");

      while (1) {
       printf("\n\t\t\t\t\t\t======= MENU =======\n");
       printf("\t\t\t\t\t\t1. Add Cricket Player\n");
       printf("\t\t\t\t\t\t2. Update Player's Statistics\n");
       printf("\t\t\t\t\t\t3. Change Player's Status\n");
       printf("\t\t\t\t\t\t4. View Players (with filters)\n");
       printf("\t\t\t\t\t\t5. Update Player's Contract\n");
       printf("\t\t\t\t\t\t6. Show Total Players\n");
       printf("\t\t\t\t\t\t7. Show All Player Details\n");
       printf("\t\t\t\t\t\tAny other number: Exit\n");
       printf("\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
       printf("\t\t\t\t\t\tEnter your choice: ");
       scanf("%d", &choice);
       printf("\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
       switch (choice) {
        case 1:printf("\nAdd Player Details: \n");printf("-------------------");AddPlayerDetail();break; //Done
        case 2:printf("\nUpdate :\n");printf("-----------------");MilestoneUpdate();break; //Done
        case 3:printf("\nChange Status:\n");printf("----------------");ChangeStatus();break; //Done
        case 4:printf("\nView Options:\n");printf("--------------");ViewingOptions();break; //Done
        case 5:printf("\nUpdate Contract:\n");printf("------------------");UpdateContract();break; //Done
        case 6:NumberofPlayers();break; //Done
        case 7:printf("\nAll Player Info:\n");AllPlayerInfo();printf("------------------");break; //Done
        default:
        	printf("Are you sure you want to exit(1:Yes;Any Number: No): ");
        	scanf("%d",&o);
        	switch (o){
        		case 1:
										 printf("\t\t\t\t\t\t____________________________________________________");
										 printf("\n\t\t\t\t\t\t|Thankss, Mr. %s! Exit successful.            |\n", name);
										 printf("\t\t\t\t\t\t|You have exited the Cricket Management Portal!    |\n");
										 printf("\t\t\t\t\t\t|__________________________________________________|");
									 	exit(0);
							 		 break;
        		default:
										 printf("You can reuse the program");
											continue;break;	
					}   	
    }
   }
  }
 }
 return 0;
}
