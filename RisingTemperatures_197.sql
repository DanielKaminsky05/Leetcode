
Select Weather.id from Weather join Weather as Weather2 on DATEDIFF(Weather.recordDate,Weather2.recordDate) = 1 where Weather.temperature>Weather2.temperature