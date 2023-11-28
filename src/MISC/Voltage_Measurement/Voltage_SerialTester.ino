double linearInterpolate(const double x[], const double y[], int size, double yInput) {
    if (yInput < y[size - 1] || yInput > y[0]) {
        return -999;
    }

    for (int i = 0; i < size - 1; ++i) {
        if ((yInput >= y[i + 1] && yInput <= y[i]) || (yInput <= y[i + 1] && yInput >= y[i])) {
            double slope = (x[i + 1] - x[i]) / (y[i + 1] - y[i]);
            return x[i] + slope * (yInput - y[i]);
        }
    }

    return -999;
}

const double temperature[] = {-40, -35, -30, -25, -20, -15, -10, -5, 0, 5, 10, 15, 20, 25, 30, 35, 40, 45, 50, 55, 60, 65, 70, 75, 80, 85, 90, 95, 100, 105, 110, 115, 120};
const double Vout[] = {2.44, 2.42, 2.4, 2.38, 2.35, 2.32, 2.27, 2.23, 2.17, 2.11, 2.05, 1.99, 1.92, 1.86, 1.8, 1.74, 1.68, 1.63, 1.59, 1.55, 1.51, 1.48, 1.45, 1.43, 1.4, 1.38, 1.37, 1.35, 1.34, 1.33, 1.32, 1.31, 1.3};
const int size = sizeof(temperature) / sizeof(temperature[0]);


void setup() {
    Serial.begin(9600);
   
  
}

void loop() {
    if (Serial.available() > 0) {
        double voltage = Serial.parseFloat();
        Serial.flush();
        
        long int t1 = millis()/1000;

        double temp = linearInterpolate(temperature, Vout, size, voltage);

        if (temp != -999) {
            Serial.print(voltage);
            Serial.print(", ");
            Serial.print(temp);
            Serial.print(", ");
            Serial.print(t1);
            Serial.println();
        } else {
            Serial.print("0");
            Serial.print(", ");
            Serial.print("0");
            Serial.print(", ");
            Serial.print(t1);
          	Serial.println();

          

        }

        while (Serial.available() > 0) {
            Serial.read();
        }
    }
    delay(500);
}
