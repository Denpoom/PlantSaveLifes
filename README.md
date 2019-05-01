# Plant Save Life :seedling:
[![forthebadge](https://forthebadge.com/images/badges/made-with-c.svg)](https://forthebadge.com)

## ABSTRACT (บทคัดย่อ) :mag:
<br>&emsp;&emsp;ชีวิตเมืองในปัจจุบัน เวลา นั้นถือเป็นปัจจัยหลักในการกำหนดเเบบเเผนการดำเนินชีวิตของบุคคลในเเต่ละวัน
ทำให้เราจัดลำดับความสำคัญให้บางเรื่องมากกว่าเสมอ เช่น ภาระงาน การเรียน การออกกำลังกาย เเต่บางทีเรื่องที่สำคัญน้อยกว่า ที่หลายคนมองข้ามโดยเฉพาะ กลุ่มพวกเรานั้นคือ การรดน้ำต้นไม้ นั้นเป็นปัญหาอยู่เสมอจากการที่ กลุ่มกระผมพยายามหาต้นไม้ที่สามารถช่วยดูดซับฝุ่น PM2.5 ในห้องนอนได้ เพราะ เชื่อว่าการได้รับอากาศที่ดี เเละบริสุทธิ์ทำให้พักผ่อนได้เต็มที่เเละมีประสิทธิ์ภาพ เเต่เครื่องฟอกอากาศนั้นมีราคาสูงเเละขาดตลาดมากในสถานการณ์ปัจจุบัน การปลูกต้นไม้ที่สามารถดูดซับฝุ่น PM2.5 จึงเป็นทางเลือกที่ดีสำหรับนักศึกษา ที่ไม่ค่อยได้อยู่หอพักบ่อยๆ ทำให้ลืมที่จะดูเเลต้นไม้เหล่านี้ เช่น การรดน้ำ ทำให้ซื้อมากี่ครั้งมักจะตายไปในเวลาอันสั้น กลุ่มกระผมจึงมีความคิดที่จะสร้าง เป็นกระถางต้นไม้อัฉริยะ ที่สามารถควบคุมปริมาณความชื้นของดิน การรถน้ำ ที่เหมาะกับต้นไม้ที่ปลูกไว้ในพื้นที่จำกัดได้ เเละ ติดอุปกรณ์วัดคุณภาพ อากาศบริเวณต้นไม้อีกด้วยเพื่อเช็คความบริสุทธิ์ของอากาศ<br><br>
&emsp;&emsp;Nowadays, Urban lifestyle, Time is considered a major factor in determining the daily lifestyle of people.
They prioritize some issues, such as workload, studying, gym, Perhaps less important that many people overlook, especially our team that is watering the plant.there are always a problem to our team tries to find trees that can help absorb PM2.5 dust in bedroom
because our team believe that when getting purify air as air purifiers are very expensive and in short supply in the current situation. planting trees that can absorb PM2.5 instead.therefore, it is the choice for students, rarely stays in a dormitory and forgets to look at these trees, such as watering, causing no matter how much our team buy new plant, they will often die in a short time,So there is a idea to create a potted plant that can control the amount of soil moisture by watering automatically, which is suitable for trees grown in limited areas and equipped with quality measuring air purify in that area.<br><br>


## COMPONENTS AND SUPPLIES :pushpin:
| Arduino Uno R3 (บอร์ดอาดูโน่ อาร์ 3) |
| :---------: |
|  <img src="https://github.com/sahussawud/PlantSaveLifes/blob/master/picture/component/arduino_r3.jpg" width="700" height="500">  |

* ไมโครคอนโทรนเลอร์ > ATmega328 

* แหล่งจ่ายไฟ	5V

* ไฟเข้า(แนะนำ)	7-12V

* ไฟเข้า (จำกัดไว้ที่)	6-20V

* ขาดิจิตอล I/O	14 ขา 

* 6 ขารองรับเอาต์พุตแบบ PWM

* ขาอะนาล็อกอินพุต	6 ขา

* กระแสไฟฟ้า DC ต่อขา I/O 40 mA

* กระแสไฟฟ้าออก DC สำหรับขา 3.3V	50 mA

* Flash Memory	32 KB (ATmega328)

* SRAM	2 KB (ATmega328)

* EEPROM	1 KB (ATmega328)

* Clock Speed	16 MHz

| Water Container (กระบอกเก็บน้ำ)  |
| :---------: |
|  <img src="https://github.com/sahussawud/PlantSaveLifes/blob/master/picture/component/bottle_2.jpg" width="700" height="500">  |

* บรรจุน้ำสำหรับเตรียมการรดน้ำต้นไม้ 

| Rubber Tube 19mm (สายยาง 19 มม.) |
| :---------: |
|  <img src="https://github.com/sahussawud/PlantSaveLifes/blob/master/picture/component/rubber_tube.jpg" width="700" height="500">  |

* สายยางเส้นผ่านศูนย์กลางที่พอดีกับปั้มน้ำมอเตอร์ 2v-5v

| BreadBoard (โฟโตบอร์ด) |
| :---------: |
|  <img src="https://github.com/sahussawud/PlantSaveLifes/blob/master/picture/component/t-043-1_11.png" width="700" height="500">  |

| Wire (สายไฟ) |
| :---------: |
|  <img src="https://github.com/sahussawud/PlantSaveLifes/blob/master/picture/component/wire.jpg" width="700" height="500">  |

| Liquid Crystal Display I2C module (จอเเอลซีดี ไอทูซี โมดูล) |
| :---------: |
|  <img src="https://github.com/sahussawud/PlantSaveLifes/blob/master/picture/component/lcd_i2c.jpg" width="700" height="500">  |

This is a basic 16 character by 2 line display with a Blue backlight.

Utilizes the extremely common HD44780 parallel interface chipset .

Interface code is freely available. You will need 11 general I/O pins to interface to this LCD screen.

LCD Display Mode: STN, Positive, Transflective

Display Color: Yellow Green 

Viewing Angle: 6H

Driving Method : 1/16 duty, 1/5 bias

Back Light : blue LED backlight 

| Soil Moisture Measurement Sensor V1.2 (เซนเซอ์วัดความชื้นในดิน) |
| :---------: |
|  <img src="https://github.com/sahussawud/PlantSaveLifes/blob/master/picture/component/s-l640.jpg" width="700" height="500">  |

&emsp;&emsp;This analog capacitive soil moisture sensor measures soil moisture levels by capacitive sensing, rather than resistive sensing like other types of moisture sensor. 

&emsp;&emsp;It is made of a corrosion resistant material giving it a long service lifeInsert it into soil and impress your friends with the real-time soil moisture dataThis module includes an on-board voltage regulator which gives it an operating voltage range of 3.3 ~ 5.5V

&emsp;&emsp;This sensor is compatible with DFRobot 3-pin "Gravity" interface, which can be directly connected to the Gravity I/O expansion shield

| Relay 5V 1 Channel module (โมดูลรีเลย์5V 1 ช่อง ) |
| :---------: |
|  <img src="https://github.com/sahussawud/PlantSaveLifes/blob/master/picture/component/relay_1channel.jpg" width="700" height="500"> |

1 channel 30A high current relay supports high / low level trigger

Completely isolated with optocouplers, relay control terminal voltage can be powered independently

High quality 30A relay, normally open interfaces Maximum load: AC 250V / 30A, DC 30V / 30A

Using SMD optocoupler isolation, strong driving ability, stable performance; trigger current 5mA

Working voltage: 5V

Module can be set high or low triggered by jumper

Relay control terminal voltage and trigger terminal voltage jumpers can be powered completely isolated before and after class, to do 
after two different voltage requirements (such as a relay with 24V, trigger with 12V)

Fault-tolerant design, even if the control line is broken, the relay will not operate

Power indicator (green), relay status indicator (red)

User-friendly interface design, all interfaces can be connected directly via terminal wiring leads, very convenient

Module size: 50mm x 33mm x 24mm

Net weight : 36g

Static current: 5mA

Maximum current: 190mA

Trigger current: 2-4mA 

| GP2Y10 Sharp Dust Sensor PM2.5 module (เซนเซอร์วัดฝุ่นละอองในอากาศ) |
| :---------: |
|  <img src="https://github.com/sahussawud/PlantSaveLifes/blob/master/picture/component/dust_sensor.jpg" width="700" height="500">  |

เซนเซอร์วัดคุณภาพอากาศ PM2.5  [<img src="https://image.flaticon.com/icons/svg/25/25231.svg" width="40" height="40">](https://github.com/sharpsensoruser/sharp-sensor-demos/wiki/Application-Guide-for-Sharp-GP2Y1014AU0F-Dust-Sensor) 

| Volume VR 10 Kohm (15mm) Potentiometer Variable Resistor (ตัวต้านทานเเบบปรับค่าได้ขนาด 10K) |
| :---------: |
|  <img src="https://github.com/sahussawud/PlantSaveLifes/blob/master/picture/component/variable_resistor.jpg" width="700" height="500">  |

| Water Pump 2v-5v (ปั้มน้ำขนาด 2v-5v) |
| :---------: |
|  <img src="https://github.com/sahussawud/PlantSaveLifes/blob/master/picture/component/pump.jpg" width="700" height="500">  |


| PowerBank 10000mA Duo USB port (เเบตสำรองเเบบมีช่องจ่ายไฟ USB จำนวน 2 ช่อง) |
| :---------: |
|  <img src="https://github.com/sahussawud/PlantSaveLifes/blob/master/picture/component/powerbank.jpg" width="700" height="500">  |

# ☀ Member

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<a href=""><img src="picture/ter.png" width="100px"  height="100"></a> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<a href=""><img src="picture/best.png" width="100px"  height="100"></a> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<a href=""><img src="picture/pound.png" width="100px"  height="100"></a> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<a href=""><img src="picture/toei.png" width="100px"  height="100"></a>

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;61070060 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;61070203 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;61070238  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;61070245



&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;นายเด่นภูมิ ศรีเมือง&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;นายวรวรรษ คำนงค์&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;นายสหัสวรรษ ขันรักษา&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;นายสุกฤษฎิ์ ลีลากรกิจ




&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; [<img src="https://image.flaticon.com/icons/svg/25/25231.svg" width="40" height="40">](https://github.com/Denpoom)&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[<img src="https://image.flaticon.com/icons/svg/25/25231.svg" width="40" height="40">](https://github.com/Warrawat203)&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[<img src="https://image.flaticon.com/icons/svg/25/25231.svg" width="40" height="40">](https://github.com/sahussawud)&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[<img src="https://image.flaticon.com/icons/svg/25/25231.svg" width="40" height="40">](https://github.com/toeiisk)

-----
[![ForTheBadge built-with-love](http://ForTheBadge.com/images/badges/built-with-love.svg)](https://github.com/sahussawud/PlantSaveLifes)
