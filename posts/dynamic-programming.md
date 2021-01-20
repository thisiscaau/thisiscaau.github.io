---
title : Một số bài toán quy hoạch động mình struggle - Trường kỳ
published : true
date : 2017-01-04 16:43:23
tags : dp , algorithm , notes
description : Notes on dp.
image :
---
Lời nói đầu
Thực lòng mà nói thì các bài toán quy hoạch động vẫn vậy loanh quanh quẩn lại vẫn chỉ có 
một vài kỹ thuật nhất định để làm nhưng cái hay và cái khó ở nó chính là bạn tiếp cận nó,
"tham" như thế nào và vận dụng các kỹ thuật đã được học như thế nào nhưng đến bây giờ
mình phải thừa nhận là có những bài mà mình phải cực kỳ struggle mới làm được và vì thế mà
cái note này cũng ra đời . Về nguồn thì các bài toán này mình cóp nhặt được từ Codeforces,
Atcoder , .. và cũng có thể là đề OI các nước . Song cái note này vốn được tạo ra chỉ để 
mình tự học và cũng chẳng hẹn ngày được public nên việc sai sót về kiến thức cũng như văn phong
khó có thể mà tránh khỏi, mong bạn đọc thông cảm !

## DP Digit
Đây là một dạng dp mà thường liên quan đến việc đếm số lượng số t/m điều kiện gì đấy trong
range [L,R] mà cách for trâu sẽ khó lòng mà xử lý nổi. Ví dụ , tính số lượng số trong khoảng L,R
mà chia hết cho chính các chữ số của nó.

Đại khái là dạng dp này mình sẽ xem xét thêm các chữ số vào sao cho nó fit các states của
mình.

### Problem 1 : Codeforces 58E
Thực sự đây là một bài toán quy hoạch động rất hay mà đến tận ngày nay có rất ít bài viết nói về 
nó chung quy lại mình google thì chỉ thấy được 2-3 post tiếng trung và hầu hết các submissions ở
trên codeforces ac bài này đều là code từ post đó :)) nên có thể nói đây là một bài khá là khoai sọ
đến nay đã hơn 10 năm từ khi bài này xuất hiện và editorial của nó vẫn chưa hẹn ngày publish.
Statement các bạn có thể đọc thêm ở trên Codeforces.

Tóm tắt : Cho biểu thức a+b = c biểu thức này có khả năng là sai , bạn hãy tìm cách thêm các chữ số
vào a,b,c sao cho biểu thức này đúng g/s thu được x+y=z . Hãy tìm giải pháp để độ dài x+y=z đạt giá
trị nhỏ nhất

Solution : 
Đầu tiên mình gọi hàm dp[i][j][k][l] trong đó i,j,k lần lượt là index mà mình đang xét tới trong các số
a,b,c và l = 0 nếu a % 10 + b % 10 không >= 10 mà = 1 nếu ngược lại hay nói cách khác nó chính là "nhớ" khi tính toán
cộng trừ mà hồi tiểu học mình đã được học.
Khi đó mình sẽ xét từ vị trí cuối cùng của các số đến vị trí bắt đầu hay nói cách khác mình sẽ làm theo hướng
top-down dp.
Khi đó đáp án của mình sẽ được tính khi mà mình đã tính được dp[0][0][0][0].
Để truy vết lại đáp án mình lập hai mảng sa[i][j][k][l] , sb[i][j][k][l] mình sẽ thực hiện các transitions
chủ yếu trên này còn dp[i][j][k][l] mình sẽ dùng để compare từ đó tìm ra optimal solution.
Thì làm thế quái nào mà mình lại nghĩ ra được cái sol này thì đầu tiên chúng ta nhận thấy rằng khi mà chúng ta cộng
"chay" thì sẽ làm theo hướng từ phải sang trái từ đó nó gợi ra ý tưởng cho mình là dp digit trên những chữ số
thì với ba số a,b,c độc lập mình có thể thêm 1 digit mới toanh tại một idx bất kỳ nên mình sẽ phải có 3 chiều để lưu lại
thông tin này . Thêm vào đó, chúng là cần thêm một chiều lưu trữ lại thông tin liệu chúng ta có còn "nợ" gì từ bước trước hay
không. Giờ thì bài toán đã dần hiện ra các bạn có thể tạm dừng đọc tại đây và dành chút thời gian suy nghĩ.

Thôi không lòng vòng nữa, mình đi thẳng vào ngay vấn đề chính. 

