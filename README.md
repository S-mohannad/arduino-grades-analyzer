# 📊 Student Grades Analyzer

> **Arduino Project #18** — توليد درجات عشوائية لـ 18 طالب وإيجاد الأعلى والأدنى عبر Serial Monitor

[![Arduino](https://img.shields.io/badge/Arduino-00979D?style=for-the-badge&logo=arduino&logoColor=white)](https://www.arduino.cc/)
[![Language](https://img.shields.io/badge/Language-C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](https://isocpp.org/)
[![Level](https://img.shields.io/badge/Level-Beginner-green?style=for-the-badge)](https://github.com/S-mohannad)

---

## 📋 Description

مشروع يحاكي تحليل درجات طلاب باستخدام المصفوفات:

- يولد **18 درجة عشوائية** بين 70 و100
- يطبع جميع الدرجات في Serial Monitor
- يحسب ويطبع **أعلى درجة** باستخدام `max()`
- يحسب ويطبع **أدنى درجة** باستخدام `min()`
- كل العمليات تتم مرة واحدة في `setup()`

---

## 🔌 Circuit

لا يحتاج مكونات خارجية — يعمل بـ Arduino وحده عبر USB.

---

## 💡 Concepts Used

- `int x[18]` — مصفوفة لتخزين 18 درجة
- `random(70, 101)` — توليد أرقام عشوائية بين 70 و100 (101 غير مشمول)
- `for loop` — لملء المصفوفة وطباعتها والمقارنة
- `max()` و `min()` — دوال مدمجة لإيجاد أعلى وأدنى قيمة
- تنفيذ كل العمليات في `setup()` لأنها تحتاج تشغيل مرة واحدة

---

## 📊 Behavior

| المرحلة | الحدث |
|---------|-------|
| البداية | يطبع "start" |
| الملء | يولد 18 رقماً عشوائياً بين 70 و100 |
| الطباعة | يطبع الـ 18 درجة واحدة تلو الأخرى |
| التحليل | يطبع أعلى درجة ثم أدنى درجة |

---

## 🔗 Code

```cpp
int x[18], max = 0, min = 0;

void setup() {
  Serial.begin(9600);
  Serial.println("start");

  for (int i = 0; i < 18; i++) { x[i] = random(70, 101); }
  for (int i = 0; i < 18; i++) { Serial.println(x[i]); }

  for (int i = 0; i < 18; i++) { max = max(max, x[i]); }
  Serial.print("max:");
  Serial.println(max);

  for (int i = 0; i < 18; i++) { min = min(min, x[i]); }
  Serial.print("min:");
  Serial.println(min);
}

void loop() {
}
```

---

## 🔧 How to Run

1. افتح **Arduino IDE**
2. وصّل Arduino بالكمبيوتر عبر USB
3. انسخ الكود والصقه في المحرر
4. اختر **Board:** Arduino UNO
5. اختر **Port** الصحيح
6. اضغط ⬆️ **Upload**
7. افتح **Serial Monitor** (9600 baud)
8. شاهد الدرجات تُطبع ثم أعلى وأدنى درجة

---

## 👨‍💻 Author

**S-mohannad** — [@S-mohannad](https://github.com/S-mohannad)
