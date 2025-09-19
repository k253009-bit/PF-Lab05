#include <stdio.h>

int main(){
    int type;
    int code;

    printf("Tech Support Diagnostic System");
    printf("Enter device type:\n1. Laptop\n2. Smartphone\n3. Router\n");
    scanf("%d", &type);

    switch (type){
        case 1:
            printf("Enter Your Problem Code: \nWon't run (10)\nOverheating (11)\nSlow Perfomance (12)\n");
            scanf("%d", &code);
            if (code == 10){
                printf("Check power adapter and battery connections. Try a different power outlet. Remove battery and hold power button for 30 seconds.");
            } else if(code == 11 ){
                printf("Clean fans and ensure proper ventilation. Check for dust accumulation. Use a cooling pad. Monitor CPU usage.");
            } else if(code == 12){
                printf("Run system diagnostics and check resource usage. Scan for malware. Upgrade RAM if necessary. Defragment hard drive.");
            }
        break;

        case 2:
            printf("Enter Your Problem Code: \nBattery drains fast (20)\nNo signal (21)\nTouch screen unresponsive (22)\n");
            scanf("%d", &code);
            if (code == 20){
                printf("Run battery calibration tool and check for background apps. Reduce screen brightness. Disable unnecessary connectivity features.");
            } else if(code == 21){
                printf("Check SIM card and network settings. Toggle airplane mode. Update carrier settings. Check for network outages.");
            } else if(code == 22){
                printf("Perform screen calibration test. Clean screen surface. Restart device. Check for software updates.");
            }
        break;

        case 3:
            printf("Enter Your Problem Code: \nNo internet connection (30)\nWi-fi signal weak (31)\nDevice can't connect (32)\n");
            scanf("%d", &code);
            if (code == 30){
                printf("Check ISP status and router cables. Restart modem and router. Check WAN connection settings. Verify internet subscription.");
            } else if(code == 31){
                printf("Reposition router and check antenna connections. Reduce interference from other devices. Change Wi-Fi channel. Consider range extender.");
            } else if(code == 32){
                printf("Check MAC filtering and DHCP settings. Verify Wi-Fi password. Restart connecting device. Check for IP conflicts.");
            }
        break;
         default:
            printf("Invalid device type. Please try again.\n"); 
            break;
    }
    return 0;
}
