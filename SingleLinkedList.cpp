//Lita Amelia 1817051001
//Rahmayanti Kurniasih 1817051061
//Atika Indah 1857051009
//Sasya Salsabila Janerdi 1867051001

#include<iostream>
using namespace std;
struct node {
    int data;
	  node *next;
};
node *head, *tail;

int isEmpty() {
	if (head==NULL)
	return 1;
	else return 0;
}

void create() {
	node *baru=new node;
}

void InsFront(int nilai) {
	node *baru;
	baru =new node;
	baru->data=nilai;
	baru->next=NULL;
	if (isEmpty()==1) {
		head=baru;
		head->next=NULL;
	} else {
		baru->next=head;
		head=baru;
	}
	cout<<"\nData "<<nilai<<" dimasukan ke dalam list\n";
}

void InsBack(int nilai) {
	node *baru, *bantu;
	baru=new node;
	baru->data=nilai;
	baru->next=NULL;
	if(isEmpty()==1) {
		head=baru;
		head->next=NULL;
	} else {
		bantu=head;
		while(bantu->next!=NULL) {
			bantu=bantu->next;
		}
		bantu->next=baru;
	}
	cout<<"\nData "<<nilai<<" dimasukan ke dalam list\n";
}

void Display() {
	node *baru=new node;
	baru=head;
	if (isEmpty()==0){
		cout<<"Data yang ada di dalam list : ";
	while(baru!=NULL) {
		cout<<baru->data<<" ";
		baru=baru->next;
		}
	}
	cout<<endl;
	cout<<endl;
}

void DelFront() {
	node *baru=new node;
	baru=head;
	head=head->next;
	delete baru;
}

void DelBack() {
	node *after=new node;
	node *before=new node;
	after=head;
	while(after->next!=NULL)
	{
		before=after;
		after=after->next;
	}
	tail=before;
	before->next=NULL;
	delete after;
}

void InsertPos(int letak, int nilai) {
	node *before=new node;
	node *after=new node;
	node *baru=new node;
	after=head;
	for (int i=1; i<letak; i++) {
		before=after;
		after=after->next;
	}
	baru->data=nilai;
	before->next=baru;
	baru->next=after;
	
	cout<<"\n\nData "<<nilai<<" dimasukan ke dalam list \n";
}

int main() {
	int pil;
	int nilai, letak;
		cout<<"\t\t\t====================\n";
		cout<<"\t\t\tSingle Linked List\n";
		cout<<"\t\t\t===================\n\n";
	create();
	do {
		cout<<"Pilih menu :\n";
		cout<<"1. Menambahkan node depan\n";
		cout<<"2. Menambahkan node belakang\n";
		cout<<"3. Hapus node depan\n";
		cout<<"4. Hapus node belakang\n";
		cout<<"5. Menyisipkan node di letak tertentu\n";
		cout<<"6. Keluar program\n\n";
		cout<<"Masukan pilihan = ";
		cin>>pil;
		switch (pil) {
			case 1 : 	cout<<"Masukan data = ";cin>>nilai;
					 	InsFront(nilai);
					 	Display();
					 	break; 
						
			case 2 : 	cout<<"Masukan data = ";cin>>nilai;
					 	InsBack(nilai);
					 	Display();
					 	break; 
					 
			case 3 : 	DelFront();
					 	cout<<"\nNode depan telah di hapus.\n";
					 	Display();
					 	break;
					 
			case 4 : 	DelBack();
					 	cout<<"\nNode belakang telah di hapus.\n";
					 	Display();
					 	break;
					 
			case 5 : 	cout<<"Masukan letak ke Berapa : ";cin>>letak;
					 	cout<<"Masukan nilai : ";cin>>nilai;
					 	InsertPos(letak, nilai);
					 	Display();
					 	break;
					 
			case 6 : 	cout<<"\nTerima Kasih\n";
					 	exit (0);
					 	default : cout<<"Salah kode\n\n";
					 	break;
		} 
		
	} while(pil!=7);
	
	return 0;
}









