# Write your MySQL query statement below
select sample_id , dna_sequence , species , 
if(dna_sequence like 'atg%',1,0) as  has_start , 
if(dna_sequence like '%taa'  or dna_sequence like '%tag'  or dna_sequence like '%tga', 1,0) as has_stop , 
if(dna_sequence like '%atat%',1,0) as has_atat,
if(dna_sequence like '%ggg%',1,0) as has_ggg
from Samples order by sample_id asc;