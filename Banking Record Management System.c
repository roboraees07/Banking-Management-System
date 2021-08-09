#include<stdio.h>
#include<conio.h>

void main()
{
	int x,i,acc_1D1, acc_ID[10],new_id,new_pin;
	int current_balance[10]={0,0,0,0,0,0,0,0,0,0,0};
	int withdraw[10]={0,0,0,0,0,0,0,0,0,0,0}; 
	int deposit_amount[10],PIN[10],PIN2;
	char acc_name[10],new_acc;
	char y,y1,z;
	do
	{
		printf("Select Your Option:");
		printf("\n1. New Account\n");
		printf("2. Show Data\n");
		printf("3. update data\n");
		printf("4. Search Data\n");
		printf("5. Delete\n");
		printf("6. Deposit Money\n");
		printf("7. withdraw Money\n");
		scanf("%d",&x);
		switch(x)
		{
			case 1:
				for(i=0; i<=9; i++)
				{
					printf("\nEnter Your Account Name:");
					scanf("%s",&acc_name[i]);
					printf("\nEnter Account Number:");
					scanf("%d",&acc_ID[i]);
					printf("\nEnter 4 digit PIN:");
					scanf("%d",&PIN[i]);
					printf("\nDo You want to Deposit any amount?(Y/N)");
					scanf("%c",&z);
					if(z=='y' || z=='Y')
					{
						printf("\nEnter the amount you want to deposit:");
						scanf("%d",&deposit_amount[i]);
						current_balance[i]=current_balance[i]+deposit_amount[i];
					}
					else if(z=='n' || z=='N')
					{
						printf("\nYour current balance is:%d", current_balance[i]);
					}
					else
					{
					    printf("\nWrong Option selected");
					}
					
				}
				break;
				
			case 2:
				printf("\nEnter Account ID:");
				scanf("%d",&PIN2);
				printf("\nEnter Account Number:");
				scanf("%d",&acc_ID1);
				
				for(i=0;i<=9;i++)
				{
					if(PIN[i]==PIN2 && acc_ID1==acc_ID[i] )
					{
						printf("\nYour Account Name is %s ",acc_name[i]);
						printf("\nYour Account Number is %d ",acc_ID[i]);
						printf("\nYour Current Balance is %d",current_balance[i]);
						printf("\nYour last deposit amount was %d",deposit_amount[i]);
						printf("\nYour last withdraw amount was %d",withdraw[i]);	
					}
					else
					{
						printf("\nWRONG PIN OR Account Number");	
					}
				}
				
				break;
			case 3:
			    printf("\nEnter PIN:");
			    scanf("%d",&PIN2);
			    printf("\nEnter Account Number:");
			    scanf("%d",&acc_ID1);
			    for(i=0;i<=9;i++)
				{
					if(PIN[i]==PIN2 && acc_ID1==acc_ID[i] )
					{
						printf("\nYour Account Name is %s ",acc_name[i]);
						printf("\nYour Account Number is %d ",acc_ID[i]);
						printf("\nYour Current Balance is %d",current_balance[i]);
						printf("\nYour last deposit amount was %d",deposit_amount[i]);
						printf("\nYour last withdraw amount was %d",withdraw[i]);
						printf("\n WHAT DO YOU WANT TO UPDATE..?");
						printf("\n1. For Account Name\n2. For account number\n3. For PIN ");
						scanf("%d",&choice);
						switch(choice)
						{
						    case 1: 
						        printf("\nEnter New Account name:");
						        scanf("%s",&new_acc);
						        acc_name[i]=new_acc;
						        printf("\nYour Account name is changed successfully..!!\nNew account name is %s",acc_name[i]);
						        break;
						    
						    case 2:
						        printf("\nEnter your new account Number:");
						        scanf("%d",&new_id);
						        acc_ID[i]=new_id;
						        printf("\nYour Account number updated successfully..!!\nNew account number is %d",acc_ID[i]);
						        break;
						    case 3:
						        printf("\nEnter New PIN:");
						        scanf("%d",&new_pin);
						        PIN[i]=new_pin;
						        printf("\nYour PIN updated successfully..!!\nNew PIN is %d",PIN[i]);
						        break;
						    default:
						        printf("\nWRONG OPTION SELECTED..!!");
						        break;
			
						}
					}
					else
					{
						printf("\nWRONG PIN OR Account Number");	
					}
					break;
				}
				
				break;
			case 4:
			    printf("\nEnter Account ID:");
				scanf("%d",&PIN2);
				printf("\nEnter Account Number:");
				scanf("%d",&acc_ID1);
				
				for(i=0;i<=9;i++)
				{
					if(PIN[i]==PIN2 && acc_ID1==acc_ID[i] )
					{
						printf("\nYour Account Name is %s ",acc_name[i]);
						printf("\nYour Account Number is %d ",acc_ID[i]);
						printf("\nYour Current Balance is %d",current_balance[i]);
						printf("\nYour last deposit amount was %d",deposit_amount[i]);
						printf("\nYour last withdraw amount was %d",withdraw[i]);
						break;
					}
				}
				
				break;
			case 5:
			     printf("\nEnter Account ID:");
				scanf("%d",&PIN2);
				printf("\nEnter Account Number:");
				scanf("%d",&acc_ID1);
				
				for(i=0;i<=9;i++)
				{
					if(PIN[i]==PIN2 && acc_ID1==acc_ID[i] )
					{
					    printf("\nDo you want to delete this account?(y/n)");
					    scanf("%c",y1);
					    if(y1=='y' || y1=='Y')
					    {
					        PIN[i]=0;
					        acc_ID[i]=0;
					        acc_name[i]="unknown";
					        current_balance[i]=0;
					        deposit_amount[i]=0;
					        withdraw[i]=0;
					        printf("\nYour Account is deleted Successfully..!!");
					        printf("\nYour PIN is %d",PIN[i]);
					        printf("\nYour account ID is %d",acc_ID[i]);
					        printf("\nYour account name is %s",acc_name[i]);
					        printf("\nYour current balance is %d",current_balance[i]);
					    }
					    else
					    {
					        printf("\nYour account is not deleted...!!");
					    }
					    break;
					}
				}
				break;
			case 6:
			    printf("\nEnter Account ID:");
				scanf("%d",&PIN2);
				printf("\nEnter Account Number:");
				scanf("%d",&acc_ID1);
				
				for(i=0;i<=9;i++)
				{
					if(PIN[i]==PIN2 && acc_ID1==acc_ID[i] )
					{
			            printf("\nEnter amount You want to deposit:");
			            scanf("%d",deposit_amount[i]);
			            current_balance[i]=current_balance[i]+deposit_amount[i];
			            printf("\nYour current balance is %d",current_balance[i]);
			            break;
					}
				}
			    break;
			 case 7:
			    printf("\nEnter Account ID:");
				scanf("%d",&PIN2);
				printf("\nEnter Account Number:");
				scanf("%d",&acc_ID1);
				
				for(i=0;i<=9;i++)
				{
					if(PIN[i]==PIN2 && acc_ID1==acc_ID[i] )
					{
			            printf("\nEnter amount you want to withdraw in the multiple of 500:");
			            scanf("%d",&withdraw[i]);
			            if(withdraw[i]%500==0)
			            {
			                printf("\nYou successfully withdraw %d",withdraw[i]);
			                current_balance[i]=current_balance[i]-withdraw[i];
			                printf("\nyour current balance is %d",current_balance[i]);
			            }
			            else
			            {
			                printf("\nSorry your amount is not the multiple of 500\nKindly re-enter the correct amount");
			            }
			            break;
					}
		        }
	    printf("\nDo you want another transaction?(Y/N)");
	    scanf("%c",&y);
	}while(y=='Y' || y=='y');
	
	printf("\nTHANK YOU FOR USING OUR SERVICE");
	return(0);
	
}
