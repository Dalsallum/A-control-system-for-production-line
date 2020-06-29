# A-control-system-for-production-line
Designing a control system for production line with three different dimension boxes.

the boxes have the following dimensions : (10x10x10) , (20x20x20) , (30x30x30) all in cm
the production line has 3 sensors in top of each other with a distance of 10cm between each sensor. opposite to them is a 3 light sources each one pointing to a sensor.
if all three sensors are not detect any light that mean a 30x30x30 box is passing since it's height can cover all 3 light sources.
the servo motor will select a path for this box which in our code is a 45 degree (the middle path).
when the top sensors is detecting light while the other two sensors not detecting any light that mean a 20x20x20 box is passing and the servo motor angle will change ( in the code to 135 degree).
when the top and middle sensors are detecting light and the bottom detecting none that mean a 10x10x10 box is passing the the servo motor angle will change ( in the code to 45 )
when no boxes is passing it means all sensors detect light then the servo will stay in the middle path ( the same as 30x30x30 path)


you can view the simulation here :

https://www.tinkercad.com/things/l1G6ZfY9Rm4-control-system-for-a-production-line/editel?sharecode=ur6Sf7AjNX09K_unJb-TDmnKR85g2VbYSnQRviN0zmk
