# 🔊 Dự án cảm biến âm thanh KY-037 với Arduino

Dự án này sử dụng cảm biến âm thanh **KY-037** để phát hiện tiếng động thông qua tín hiệu **analog** và **digital**. Khi âm thanh vượt ngưỡng, một đèn LED trên Arduino sẽ được bật và giá trị tín hiệu được in ra **Serial Monitor**.

---

## 🎯 Mục tiêu

- Làm quen với cảm biến âm thanh KY-037
- Đọc và xử lý tín hiệu **analog** và **digital**
- Bật LED khi phát hiện tiếng động lớn
- Hiển thị dữ liệu trên Serial Monitor

---



## 🔌 Sơ đồ kết nối phần cứng

| KY-037         | Arduino        |
|----------------|----------------|
| VCC            | 5V             |
| GND            | GND            |
| A0             | A0             |
| D0             | D7             |

---

## 🧠 Nguyên lý hoạt động

- **Tín hiệu analog (A0)** cho biết cường độ âm thanh. 
- **Tín hiệu digital (D0)** ở mức **HIGH** khi âm thanh vượt ngưỡng đặt trước (trên trimmer).
- Nếu **analogValue > 600** hoặc **digitalValue == HIGH**, LED được bật.
- Dữ liệu được gửi về **Serial Monitor** để theo dõi trực quan.

---
## Link video
https://youtu.be/3HOJTmxoiCk
