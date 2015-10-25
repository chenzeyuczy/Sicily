class NumCal {
    int *p;    // 数组首地址
    int size; // 数组size
public:
    int sum(); // 计算数组元素和
    NumCal(); // 构造函数
    NumCal(int *new_p, int new_size); // 构造函数
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
