import csv

def main():
    nm_list = []
    tp_list = []
    
    nm = 120/80       # (total voltage) / (total amount of steps)
    tp = 100/80      # (total throttle percentage) / (list length - 1) 
    
    nm_list.append(0)
    tp_list.append(0)

    nm_list.append(nm)
    tp_list.append(tp)

    curr_nm = nm
    curr_tp = tp

    i = 0
    
    for i in range(80 - 1):
        
        curr_nm += nm
        curr_tp += tp

        tp_list.append(round(curr_tp, 2))
        nm_list.append(round(curr_nm, 2))

        i += 1
    
    print(len(nm_list))
    print(len(tp_list))
    
    with open("trqCmdStep_Nm.csv", 'w', newline='') as file:
        writer = csv.writer(file)
        writer.writerow(nm_list)
        file.close()
    with open("trqCmdStep_pct.csv", 'w', newline='') as file1:
        writer = csv.writer(file1)
        writer.writerow(tp_list)
        file1.close()

if __name__ == "__main__":
    main()