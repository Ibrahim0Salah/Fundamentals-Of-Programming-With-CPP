//لديك العملية الحسابية التالية
//ممنوع تغيير الأرقام ولا ال Operators نهائيا
//ممنوع التعديل في أماكن المتغيرات
//المطلوب أن تكون النتيجة رقم 10000
//التحدي يحتاج للتفكير وكيفية إستخدام الأقواس لتجعل الأرقام مع بعضها لتتم العملية الحسابية
//شاهد المثال بالأسفل ليوضح لك ماذا يمكن أن تفعل بالأقواس

#include <iostream>
using namespace std;

int main()
{
  int a = 10;
  int b = 20;

  cout << ((a + b) * (a + b) + (a * a)) * a << "\n";       // 10000

  // Hint For Help
  //cout << 10 + 5 * 20 << "\n";   // 5 * 20 = 100 + 10 = 110
  //cout << (10 + 5) * 20 << "\n"; // 10 + 5 = 15 * 20 = 300

  return 0;

}