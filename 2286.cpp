template<class T>
struct node {
    T val;
    node *next;
};

template<class T>
class Stack {
private:
    node<T> *head;
    int count;

public:
    Stack() {
        count = 0;
        head = NULL;
    }

    bool empty() const {
        return count == 0;
    }

    int size() {
        return count;
    }

    void push(const T& item) {
        node<T> *tem = new node<T>;
        tem->val = item;
        tem->next = head;
        head = tem;
        count++;
    }

    void pop() {
        if (!empty()) {
            node<T> *tem = head;
            head = head->next;
            delete tem;
            count--;
        }
    }

    T& top() const {
        if (!empty())
            return head->val;
    }

    ~Stack() {
        while (!empty())
            pop();
    }

    void operator=(const Stack<T> &other) {
        while (!empty())
            pop();
        Stack<T> temp;
        for (node<T> *tem = other.head; tem != NULL; tem = tem->next)
            temp.push(tem->val);
        while (!temp.empty()) {
            push(temp.top());
            temp.pop();
        }
    }

    Stack(const Stack& other) {
        head = NULL;
        count = 0;
        Stack<T> temp;
        for (node<T> *tem = other.head; tem != NULL; tem = tem->next)
            temp.push(tem->val);
        while (!temp.empty()) {
            push(temp.top());
            temp.pop();
        }
    }
};

typedef Stack<int> MyStack;
