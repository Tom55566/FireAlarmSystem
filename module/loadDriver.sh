sudo insmod ./DHT11/dht11.ko 
echo 'Load DHT11!'

sudo insmod ./MQ7/MQ7.ko 
echo 'Load MQ7!'

sudo insmod ./HW_508/HW_508.ko 
echo 'Load HW_508!'

# sudo insmod ./SR04/sensor_driver.ko
# echo 'Load SR04!'

# sudo insmod ./SR04/red_yellow_green.ko
# echo 'Load Traffic light!'

sudo insmod ./White_LED/whiteled.ko 
echo 'Load White LED!'

sudo ../system/main &
sudo ../system/camera 
echo 'done!'
