import serial

PORT = '/dev/ttyACM0'
baud = 9600

fd = serial.Serial(port=PORT, baudrate=baud)

def send_angle(angle):
  fd.write(angle)

