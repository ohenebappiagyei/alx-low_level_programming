-- This script lists the number of records with the same score in the table second_table
-- in the specified database, displaying the score and the number of records, sorted by the number of records in descending order

SELECT score, COUNT(*) AS number FROM second_table GROUP BY score ORDER BY number DESC
