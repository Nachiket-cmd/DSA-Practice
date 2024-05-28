//STL- Standard Template library
//Algorithms


// Containers

//Pair
pair<int,int>p = {1,3};
cout<<p.first; //1
cout<<p.second; //3
//we can also store an array of pairs.
pair<int,int>arr[3>]= { {1,2},{3,4},{5,6}};

//vector
vector<int>vec;
//we can add or remove elements from a vector in a go. It is dynamic.
vec.size(); //will return the size of the vector.
vec.push_back{1};
vec.pop_back(); //will pop the top element.
vec.swap(vec2); //we can swap one vector with another
vec.emplace_back(2,3);  //emplace back will store element as a pair as default.
vector<int>c1(5,290) //this will declare a vecotr with the name c1 with 5 elements as 290 each.

//iterators
//iterator basically points to the memory of the element you have referenced to. 
vector<int>::iterator it = vec.begin();
cout<<*(it); //this will print the element at v[0];
cout<<it; //this will print the address of the memory address where the element v[0] is stored.
it++; //this will take our iterator to the next element memory address i.e v[1].
vec.end(); //this will point out to the memory address right after the memory of the last element of the vector vec.
vec.back();  //points out to the memory address of the last element.
vec.erase(); //you need to put in the address of the memory address you want to delete. 


//List
//Same as vectors. The only benefit is it provides with front operations as well.
//insert operations is cheaper is a list as it is implemented as doubly linked list. Whereas the vector is implemented as a single linked list.
list<int>ls;
ls.push_back(2);
ls.push_front(4);

//Deque
//similar to vector
deque<int>dq;
dp.push_back(2);
//all the operations are similar to list and vector.

//Stack (LIFO) O(1) for all the operations.
stack<datatype>a;
a.push(2);
a.push(4);
a.push(5);
a.push(6);
a.pop(); //6 will be popped out as it is the last element inserted.
cout<<a.top; //5 will be printed as it the element currently at top.
a.empty(); //Output will be false

//queue (FIFO)
q.push(4);
q.push(1);
q.push(2);
q.back(); //this will give 2. as it follows FIFO.
q.front(); //will print 4 as it is the first element in.
q.pop(); //will pop 4 

//priority queue
//in this the largest element will stay at the top.
//data is stored in a tree not linear.
//syntax is same as queue.
priority_queue<int>pq; //declaration for priority queue normal (elements will be in descending order by dafault)
priority_queue<int, vector<int>, greater<int>>pq;  //min heap. This will store the elements in ascending order.

//Set
//Everything is SORTED and UNIQUE.
//In this a tree is maintained as well. which means that they it is a linear container.
st.find(3); //this will return an iterator which will point to the address where 3 is stored. 

//multiset
//similar to set. the only main difference is it also stores duplicates.


//unordered set 
//it is similar to set in all the operations except lowerbound and upperbound operations dont work in this.
//the next thing to keep in mind is that, it does not stores elements as sorted by default.
unordered_set<int>us;


//Map
// it will store values are value,key pair.
//key can be stored in any datatype
map<char,int>mp; //here the char is the key datatype and int is the value datatype.
mp['A']=2;
mp.find(); //you can know about where the memory address of a particular key with this.

//multimap
// similar to map, the onlt difference is that is can also store duplicate key values as well.

//unordered map
//wont be sorted and wont store duplicate keys.

// Functions
sort(a+n,a+m); //this will sort the elements will be sorted in ascending order.
sort(v.begin(),v.end()); //for vector.
sort(a,a+n,greater<int>); //this will sort the array/vector into descending order.
//now if you want to sort your own way which can contain ascneding and descending both at the same time. So, basically to have a way to sort element some unique way.
sort(a,a+n,comp); //here comp is the comparator which is basically a boolean function. the function will compare two entities. If the occurence of the both the numbers are in correct order, the comparator will return true.
//Whereas if it is wrong, it will return false.
int s=__builtin_popcount(x); //this will return the number of 1,s which will be present in the number x if we convert the number into binary.
int s= next_permutation(x); // this will return all the possible number of permutations which are possible with the given number.
 
