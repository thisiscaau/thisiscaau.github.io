---
title : Một số bài toán quy hoạch động mình struggle - trường kỳ
published : true
date : 2021-11-01 19:42:30
tags : dp , algorithm , notes
description : Notes on dp
image :
---
## Lời nói đầu
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

