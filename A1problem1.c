//Will you answer the phone program
//Function main begins
int main() {
//make your variables characters and read in inputs
	char asleep, morning, mom;
	scanf(" %c", asleep);
        scanf("	%c", morning);
        scanf(" %c", mom);
//being your if statement and follow instructions
	if (asleep == 'y') {
		printf("Don't answer phone");
	}
	else if (morning == 'y' && mom == 'n'){
		printf("Don't answer phone")
	}
	else {
		printf("Answer phone");
	}
//return to finish your function
	return 0;
}

