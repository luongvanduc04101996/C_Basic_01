Lương Văn Đức  
**Báo cáo LÔP**  
# **1.For**  
Cú pháp:*`for(bt1;bt2;bt3) S;`*  
**Trong đó**  
*bt1:Giá trị khởi tạo của biến    
*bt2:Điều kiện để có thực hiện vòng lập hay không    
*bt3:Thay đổi biến khởi tạo
*S:Là lệnh hay dãy lệnh  
**Ví dụ**  
```  
for(i=1;i<=5;i++) printf("%d",i);  
**Kết quả**  
in ra màn hình: 12345  
```  
#**2.While**  
Cú pháp:*`while(bt) S;`*  
**Trong đó**  
*bt:Là biểu thức logic
*S:Là lệnh hay dãy lệnh
**Ví dụ**  
```  
int i=1
while(i<=5) printf("%d",i); i++;  
**Kết quả**  
in ra màn hình: 12345  
```  
#**3.Do..While**  
Cú pháp:*`do S while(bt);`*  
**Trong đó**  
*bt:Là biểu thức logic
*S:Là lệnh hay dãy lệnh
**Chú ý:Lệnh S luôn được thực hiện ít nhất 1 lần trong câu lệnh*  
**Ví dụ**  
```  
int i=0;
do  
printf("12345");
while(i<0);  
**Kết quả**  
in ra màn hình: 12345  
```  
