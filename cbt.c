#include <stdio.h>
#include <string.h>
int i;
int score;
char option;
int exam_written = 0;
int e = 0, m = 0, p = 0, b = 0, g = 0, a = 0; 
int *eng_score, *maths_score, *bio_score, *phy_score, *govern_score, *account_score, x, id2, exam, field;
char current_name[50];
struct courses{
	char question[5][2000];
	char option1[5][2000];
	char option2[5][2000];
	char option3[5][2000];
	char option4[5][2000];
	char answers[5];
};
struct courses english = {
  		{"1. Which one of these is not a noun?", "2. Which one of these is not a verb?","3. You can have ice cream ______ you finish your dinner.","4. Which one of these is not a pronoun?","5. We studied the question ________"},
  		{"a. shaba","a. jumping","a. when","a. he", "a. scientific "},
  		{"b. jumping","b. sleeping","b. but","b. she","b. science"},
  		{"c. lagos","c. dancing","c. and","c. they","c. scientifically"},
  		{"d. david ","d. public ","d. in","d. sleeping","d. scientist"},
  		{'b','d','a','d','a'}
};
struct courses mathematics = {
  		{"1. Which of the following is the least?", "2. 313 – 225?","3. Which is the largest number?","4. Which is the longest distance?","5. How many sides does a pentagon have?"},
  		{"a. 0.105","a. 112","a. 402","a. 3500cm", "a. 4"},
  		{"b. 0.501","b. 115","b. 4600","b. 65.5m","b. 5"},
  		{"c. 0.015","c. 88","c. 4060","c. 75000mm","c. 7"},
  		{"d. 0.15 ","d. 1115","d. 4660","d. 0.1km","d. 6"},
  		{'c','c','d','d','b'}
};
struct courses biology = {
  		{"1. The functional unit of heredity is the _________", "2. A cell membrane is ________","3. How many chromosomes does an individual human person have?","4. One celled animals are of the phyla?","5. The bodies of all insects have _______ major divisions."},
  		{"a. gene","a. permeable","a. 23 ","a. Metazoa", "a. 2"},
  		{"b. chromosome","b. semipermeable","b. 46","b. Porifera", "b. 3"},
  		{"c. protein","c. nonpermeable","c. 64 ","c. Protozoa", "c. 4"},
  		{"d. nucleus","d. None of the above","d. 82","d. Mollusca", "d. 5"},
  		{'a','b','b','c','b'}
};
struct courses physics = {
  		{"1. The instrument that measures and records the relative humidity of air is?", "2. The shape of our milky way galaxy is?","3. Smog is a general pollutant where?","4. Instrument used to measure the force and velocity of the wind is?","5. while catching a ball, a player pulls down his hands to lower the?"},
  		{"a. Hydrometer","a. Circular","a. Temperature is high ","a. Ammeter", "a. Force"},
  		{"b. Hygrometer","b. Eliptical","b. Temperature is low","b. Anemometer", "b. Moment"},
  		{"c. Lactometer","c. Spiral","c. air contains excess ammonia","c. Altimeter", "c. Impulse"},
  		{"d. Barometer","d. weird","d. air contains excess SO","d. Audiometer", "d. Catching time"},
  		{'b','c','d','a','c'}
};

struct courses government = {
  		{"1. The judicial order requiring a detailed person to be brought before a judge is the writ of?", "2. Which is the following is not means through which political parties reach the populace?","3. Power is transformed into legal authority through?","4. A constitution that requires complicated procedure for its amendment is?","5. When an action of the executive is declared ultra vires, it is a control excercised by the?"},
  		{"a. Habeas corpus","a. Posters","a. Force","a. Rigid", "a. Public"},
  		{"b. Mandemus","b. Newspapers","b. Prayers","b. Flexible", "b. Minister"},
  		{"c. Prohibition","c. Schools","c. Influence","c. Written", "c. Judiciary"},
  		{"d. Certiorari","d. On the internet","d. Legitimacy","d. Unwritten", "d. Parliament"},
  		{'a','c','d','a','c'}
};

struct courses accounting = {
  		{"1. Asset accounts have what type of balance?", "2. Which account is not a liability account?","3. Which account increases equity?","4. A contra asset account has what type of balance?","5. Companies not disclosing an immanent bankruptcy would violate the:"},
  		{"a. Debit","a. Accounts payable ","a. Expenses","a. Debit", "a. Business entity concept"},
  		{"b. Credit","b. Accrued expenses","b. Withdrawls","b. Credit", "b. Going Concern Concept"},
  		{"c. Contra","c. Cash","c. Influence","c. Treasury stock", "c. Monetary Unit Assumption"},
  		{"d. None of the above","d. Notes payable","d. Revenues","d. All of the above", "d. Periodicity Assumption"},
  		{'a','c','d','b','b'}
};

struct science{
		int id;
		char name[50];
		int eng_marks;
		int math_marks;
		int biology_marks;
		int physics_marks;
};
struct art{
		int id;
		char name[50];
		int eng_marks;
		int math_marks;
		int government_marks;
		int accounting_marks;
};
struct science walid = {001,"ABDULLAHI ABUBAKAR",0,0,0,0};
struct science muhammed = {002,"MUHAMMED KABIR",0,0,0,0};
struct art rahma = {003,"RAHMA GADANYA",0,0,0,0};
struct science salim = {004,"SALIM ALHUSSAIN BURJI",0,0,0,0};
struct art danny = {005,"DANIEL DICKSON",0,0,0,0};

main(){
	printf("\t\t\tDECEMBER 2020 EXAMINATION\n\n");
begin:   
	printf("enter your Student id\n");
	scanf("%d",&id2);

if(id2 == walid.id){
		printf("WELCOME %s\n", walid.name);
		eng_score = &walid.eng_marks;
		maths_score = &walid.math_marks;	
		bio_score = &walid.biology_marks;
		phy_score = &walid.physics_marks;
		strcpy(current_name,walid.name);
} else if(id2 == muhammed.id){
		printf("WELCOME %s\n", muhammed.name);
		eng_score = &muhammed.eng_marks;
		maths_score = &muhammed.math_marks;
		bio_score = &muhammed.biology_marks;
		phy_score = &muhammed.biology_marks;	
		strcpy(current_name,muhammed.name);
} else if(id2 == rahma.id){
		printf("WELCOME %s\n", rahma.name);
		eng_score = &rahma.eng_marks;
		maths_score = &rahma.math_marks;	
		govern_score = &rahma.government_marks;
		account_score = &rahma.accounting_marks;
		strcpy(current_name,rahma.name);
}else if(id2 == danny.id){
		printf("WELCOME %s\n", danny.name);
		eng_score = &danny.eng_marks;
		maths_score = &danny.math_marks;
		govern_score = &danny.government_marks;
		account_score = &danny.accounting_marks;	
		strcpy(current_name,danny.name);
} else if(id2 == salim.id){
		printf("WELCOME %s\n", salim.name);
		eng_score = &salim.eng_marks;
		maths_score = &salim.math_marks;
		bio_score = &salim.biology_marks;
		phy_score = &salim.biology_marks;	
		strcpy(current_name,salim.name);
} else {
	x++;
	if(x<3){
	printf("\t wrong pin\n");
	goto begin;
	} else {
	printf("\tid is incorrect\n");
	goto end;
	}
}
	
	task:
	printf("\n\n\t\tChoose your field\n \t1. Science \n\t2. art\n");
	printf("*please choose your appropriate field, as failure to do so will result in failure\n\n\n");
	scanf("%d",&field);
	if(field == 1){
		do{
		printf("\t\tchoose exams to write:\n\t1. English Language\n\t2. Mathematics\n\t3. Biology\n\t4. Physics\n");
		scanf("%d",&exam);
		if(exam == 1){
			if(e<1){
				eng_exam();
				exam_written++;
				e++;
			} else {
				printf("\n\t\tYou have already written this exam. Pick another subject\n\n");
			}
		} else if(exam == 2){
			if(m<1){
				math_exam();
				exam_written++;
				m++;
			} else {
				printf("\n\t\tYou have already written this exam. Pick another subject\n\n");
			}
		} else if(exam == 3){
			if(b<1){
				biology_exam();
				exam_written++;
				b++;
			} else {
				printf("\n\t\tYou have already written this exam. Pick another subject\n\n");
			}
		} else if(exam == 4){
			if(p<1){
				physics_exam();
				exam_written++;
				p++;
			} else {
				printf("\n\t\tYou have already written this exam. Pick another subject\n\n");
			}
		} else {
			printf("\t\tinvalid entry\n\n");
		}
     } while(exam_written < 4);
	}else if(field == 2){
		do{
		printf("\t\tchoose exams to write:\n\t1. English Language\n\t2. Mathematics\n\t3. Government\n\t4. Accounting\n");
		scanf("%d",&exam);
		if(exam == 1){
			if(e<1){
				eng_exam();
				exam_written++;
				e++;
			} else {
				printf("\n\t\tYou have already written this exam. Pick another subject\n\n");
			}
		} else if(exam == 2){
			if(m<1){
				math_exam();
				exam_written++;
				m++;
			} else {
				printf("\n\t\tYou have already written this exam. Pick another subject\n\n");
			}
		} else if(exam == 3){
			if(g<1){
				government_exam();
				exam_written++;
				g++;
			} else {
				printf("\n\t\tYou have already written this exam. Pick another subject\n\n");
			}
		} else if(exam == 4){
			if(a<1){
				accounting_exam();
				exam_written++;
				a++;
			} else {
				printf("\n\t\tYou have already written this exam. Pick another subject\n\n");
			}
		} else {
			printf("invalid entry");
		}
     } while(exam_written < 4);
	} else {
		printf("\t\tinvalid entry\n\n");
		goto task;
	}
	
summary:
printf("\t\tAll Exams have been written. Here are Your results\n\n");
printf("\t\t%s\n\n", current_name);
if(field == 1){
	printf("\tENGLISH: %d out of 50 marks\n\n", *eng_score);
	printf("\tMATHEMATICS: %d out of 50 marks\n\n", *maths_score);
	printf("\tBIOLOGY: %d out of 50 marks\n\n", *bio_score);
	printf("\tPHYSICS: %d out of 50 marks\n\n", *phy_score);
	
} else if(field == 2){
	printf("\tENGLISH: %d out of 50 marks\n\n", *eng_score);
	printf("\tMATHEMATICS: %d out of 50 marks\n\n", *maths_score);
	printf("\tGOVERNMENT: %d out of 50 marks\n\n", *govern_score);
	printf("\tACCOUNTING: %d out of 50 marks\n\n", *account_score);
}


end:
printf("this is over");	
}
eng_exam(){
	printf("\t\tENGLISH LANGUAGE\n\n");
		for(i=0;i<5;i++){
		printf("\n%s \n%s \n%s \n%s \n%s\n\n\n", english.question[i], english.option1[i], english.option2[i],english.option3[i], english.option4[i]);
		getchar();
		option = getchar();
		if(option == english.answers[i]){
			*eng_score = *eng_score + 10;
		} else {
			*eng_score = *eng_score + 0;
		}
		}
}
math_exam(){
	printf("\t\tMATHEMATICS\n\n");
		for(i=0;i<5;i++){
		printf("\n\n%s \n%s \n%s \n%s \n%s\n\n\n", mathematics.question[i], mathematics.option1[i], mathematics.option2[i],mathematics.option3[i], mathematics.option4[i]);
		getchar();
		option = getchar();
		if(option == english.answers[i]){
			*maths_score = *maths_score + 10;
		} else {
			*maths_score = *maths_score + 0;
		}
		}
}
biology_exam(){
	printf("\t\tBIOLOGY\n\n");
		for(i=0;i<5;i++){
		printf("\n\n%s \n%s \n%s \n%s \n%s\n\n\n", biology.question[i], biology.option1[i], biology.option2[i],biology.option3[i], biology.option4[i]);
		getchar();
		option = getchar();
		if(option == biology.answers[i]){
			*bio_score = *bio_score + 10;
		} else {
			*bio_score = *bio_score + 0;
		}
		}
}
physics_exam(){
	printf("\t\tPHYSICS\n\n");
		for(i=0;i<5;i++){
		printf("\n%s \n%s \n%s \n%s \n%s\n\n\n", physics.question[i], physics.option1[i], physics.option2[i],physics.option3[i],physics.option4[i]);
		getchar();
		option = getchar();
		if(option == biology.answers[i]){
			*phy_score = *phy_score + 10;
		} else {
			*phy_score = *phy_score + 0;
		}
		}
}
government_exam(){
	printf("\t\tGOVERNMENT\n\n");
		for(i=0;i<5;i++){
		printf("\n%s \n%s \n%s \n%s \n%s\n\n\n", government.question[i], government.option1[i], government.option2[i], government.option3[i], government.option4[i]);
		getchar();
		option = getchar();
		if(option == government.answers[i]){
			*govern_score = *govern_score + 10;
		} else {
			*govern_score = *govern_score + 0;
		}
		}
}
accounting_exam(){
	printf("\t\tACCOUNTING\n\n");
		for(i=0;i<5;i++){
		printf("\n%s \n%s \n%s \n%s \n%s\n\n\n", accounting.question[i], accounting.option1[i], accounting.option2[i], accounting.option3[i], accounting.option4[i]);
		getchar();
		option = getchar();
		if(option == accounting.answers[i]){
			*account_score = *account_score + 10;
		} else {
			*account_score = *account_score + 0;
		}
		}
}

