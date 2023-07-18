
:: driver display
python ..\SR-Libraries\StateCan\dbctocpp\dbctocpp.py DBCs\CAN1.dbc Embedded\DD\CAN\CAN1.hpp
python ..\SR-Libraries\StateCan\dbctocpp\dbctocpp.py DBCs\CAN2.dbc Embedded\DD\CAN\CAN2.hpp


:: PDM
python ..\SR-Libraries\StateCan\dbctocpp\dbctocpp.py DBCs\CAN1.dbc Embedded\PDM\CAN\CAN1.hpp
python ..\SR-Libraries\StateCan\dbctocpp\dbctocpp.py DBCs\CAN2.dbc Embedded\PDM\CAN\CAN2.hpp


:: ATCC
python ..\SR-Libraries\StateCan\dbctocpp\dbctocpp.py DBCs\CAN1.dbc Embedded\ATCC\CAN\CAN1.hpp
python ..\SR-Libraries\StateCan\dbctocpp\dbctocpp.py DBCs\CAN2.dbc Embedded\ATCC\CAN\CAN2.hpp

pause