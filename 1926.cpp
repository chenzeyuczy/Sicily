class NumCal {
    int *p;    // �����׵�ַ
    int size; // ����size
public:
    int sum(); // ��������Ԫ�غ�
    NumCal(); // ���캯��
    NumCal(int *new_p, int new_size); // ���캯��
};

int NumCal::sum(){
    int s=0;
    for(int i=0;i<size;i++)s+=p[i];
    return s;
}
NumCal::NumCal(){
    size=1;
    p=new int[size];
}
NumCal::NumCal(int *new_p, int new_size){
    size=new_size;
    p=new int[size];
    for(int i=0;i<size;i++)p[i]=new_p[i];
}
