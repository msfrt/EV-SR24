import csv

def main():
    v_list = []
    tp_list = []
    
    v = 5/100       # (total voltage) / (total amount of steps)
    tp = 100/80      # (total throttle percentage) / (list length - 1) 
    
    # v_list.append(0)
    tp_list.append(0)

    v_list.append(0.5)
    tp_list.append(tp)

    curr_v = v
    curr_tp = tp

    i = 0

    for i in range(100 - 1):
        
        curr_v += v
        
        if (curr_v >= 0.5) and (curr_v <= 4.5):
            
            v_list.append(round(curr_v, 2))
    
        i += 1
    
    for i in range(80 - 1):
        
        curr_tp += tp

        tp_list.append(round(curr_tp, 2))

        i += 1

    
    print(len(v_list))
    print(len(tp_list))
    
    with open("throttleStep_v.csv", 'w', newline='') as file:
        writer = csv.writer(file)
        writer.writerow(v_list)
        file.close()
    
    with open("throttleStep_pct.csv", 'w', newline='') as file1:
        writer1 = csv.writer(file1)
        writer1.writerow(tp_list)
        file1.close()

if __name__ == "__main__":
    main()