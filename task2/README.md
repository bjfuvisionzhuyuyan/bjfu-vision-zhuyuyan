# 用 g++ 在终端编译运行 Hello World

<img width="323" height="119" alt="image" src="https://github.com/user-attachments/assets/a2f37586-2ddc-4542-b249-ec6883aa1011" />

<img width="366" height="77" alt="image" src="https://github.com/user-attachments/assets/10ac7b48-5695-4623-9fe2-b8cc32529b24" />

# 成绩统计程序
<img width="2545" height="1541" alt="391a79c871ed84b64f8bc5102455783c" src="https://github.com/user-attachments/assets/071fb09d-b371-433e-a0f6-fd080aab915c" />
1.预处理：g++ -E score.cpp -o score.i（把头文件展开）                     
2.汇编，生成汇编文件：g++ -S score.i -o score.s(比c++更低级的语言）                         
3.把汇编文件转化为机器码文件（二进制格式）：g++ -c score.s -o score.o                  
4.链接：g++ score.o -o score                    
5.输入路径,终端中执行：./score

# 三个swap函数
1. 传值：交换的是副本，原变量不受影响（将实参拷贝出来交换，交换后副本自动销毁，所以传值交换不了）
2. 传指针：通过地址间接修改原变量
3. 传引用：a、b 就是原变量的别名，直接修改
<img width="2545" height="1541" alt="4aa2d1a6dc0e7b632781c33ba85440b9" src="https://github.com/user-attachments/assets/b5b1e229-7007-4e99-afce-a770d1cd652b" />
