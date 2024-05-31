#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;

    bool isValid = (number >= 100 && number <= 200) || number == 0;
    if (!isValid) //(isValid == false)
    {
        cout << "invalid";
    }
}
// ako promenlivata isValid = true oznachava che !true = false, i nqma da otpechatvame nishto
// no ako isValid = false tova oznachava che !false = true i shte otpechatame inValid
// zashtoto if else otpechatva samo ako rezultata e true, toest ako isValid e false i !isValid stane true, nie mojem da otpechatame cout


