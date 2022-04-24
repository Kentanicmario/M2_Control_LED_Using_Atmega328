# TEST PLAN
## HIGH LEVEL TEST PLAN

| TEST ID |         DESCRIPTION               |                   EXP I/P                          | EXP O/P   |  ACTUAL OUT | TYPE OF TEST |
| :---    |     :---:                         |                                     ---:           |  ---:     |         --: |          --: |    
| H_01    | Tested input of threshold value   | Threshold value as number                          | Success   | Success     | Technical    |   
| H_02    | Tested ultrasonic sensor          | Input to sensor                                    | Success   | Success     | Technical    |  
| H_03    | Tested on LED as output           | Output of sensor are digital which shows as in LED | Success   | Success     | Technical    |     


## LOW LEVEL TEST PLAN

| TEST ID |   HLT       |                   DESCRIPTION                                                             |                EXP I/P                   |  EXP O/P    | ACTUAL OUT | TYPE OF TEST |
|    :--- |     :---:   |                                                 :---:                                      |        :---:                             |         --: |        --: |          --: |  
| L_01    |  H_01       | Tested on function where threshold value given as input to find distance of the object    |Threshold value as number                      |    Success  | Success    |   Technical  |
| L_02    |  H_02, H_03 | Tested on function where sensor read the input of threshold value and gives output in LED |Sensor read threshold value as input |    Success  | Success    |   Technical  |
 



