# Arduino Remote Control Car Program Documentation

මෙම ලේඛනය Arduino භාවිතයෙන් Bluetooth දුරස්ථ පාලක මෝටර් රථයක් එකලස් කිරීම සහ programming කිරීම සඳහා පියවරෙන් පියවර මාර්ගෝපදේශයක් සපයයි. ව්‍යාපෘතිය සඳහා අවශ්‍ය සංරචක ලැයිස්තුවක්, එකලස් කිරීමේ උපදෙස් සහ Bluetooth හරහා මෝටර් රථය පාලනය කිරීම සඳහා සාම්පල Arduino කේතය ඇතුළත් වේ.
මෙම Arduino වැඩසටහන නිර්මාණය කර ඇත්තේ serial communication භාවිතයෙන් දුරස්ථ පාලක මෝටර් රථයක් පාලනය කිරීමටයි. මෙම වැඩසටහන serial communication හරහා ලැබෙන නිශ්චිත අක්ෂර අර්ථකථනය කරන අතර ඉදිරියට යාම, පසුපසට, වමට හැරීම, දකුණට හැරීම, නැවැත්වීම සහ බසරයක් සක්‍රිය කිරීම/අක්‍රිය කිරීම වැනි අනුරූප ක්‍රියා සිදු කරයි.

## Step-by-Step Guide to Building a Bluetooth Remote Control Car:
1.	Gather Components: 
* 	Arduino UNO R3 v1 Original Board
* 	USB Cable
* 	Quality mini breadboard (400 tie points)
* 	Smart Robot Car Chassis Kit 2WD
* 	Motor Driver L298N Module
* 	Ultrasonic Sensor HC-SR04
* 	Servo Motor SG90 9G
* 	Jumper wires (M-F and M-M)
* 	HC-06 Bluetooth RF Transceiver Module
* 	LEDs (Red, Green, Blue)
(මිලදීගැනීමට පිවිසෙන්න. https://devino.lk/product/devino_stater_kit_with_car_kit/)
2.	Assemble the Chassis: (https://devino.lk/video)
* 	මෝටර් රථයේ චැසිය එකලස් කිරීමට Smart Robot Car Chassis Kit සමඟ සපයා ඇති උපදෙස් අනුගමනය කරන්න.
* 	මෝටර් සහ රෝද ආරක්ෂිතව චැසිය මත සවි කරන්න.
3.	Connect Components to Arduino:
* 	Connect the motor driver module to the Arduino according to its datasheet.
* 	Connect the Ultrasonic Sensor HC-SR04 to the Arduino using jumper wires (VCC, GND, Trig, Echo).
* 	Connect the Servo Motor SG90 to the Arduino (VCC, GND, Signal).
4.	Wire the Bluetooth Module:
* 	ජම්පර් වයර් (VCC, GND, TX, RX) භාවිතයෙන් HC-06 බ්ලූටූත් මොඩියුලය Arduino වෙත සම්බන්ධ කරන්න.
* 	Bluetooth මොඩියුලයේ TX Arduino හි RX වෙත සම්බන්ධ කර ඇති බවත්, Bluetooth මොඩියුලයේ RX Arduino හි TX වෙත සම්බන්ධ කර ඇති බවත් සහතික කර ගන්න.
5.	Upload Arduino Code:
* 	Bluetooth දුරස්ථ පාලක මෝටර් රථය සඳහා සපයා ඇති Arduino කේතය Arduino පුවරුවට උඩුගත කරන්න. කේතය කිසිදු දෝෂයකින් තොරව සාර්ථකව උඩුගත කර ඇති බවට වග බලා ගන්න.

