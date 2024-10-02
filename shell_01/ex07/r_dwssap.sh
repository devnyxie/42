cat /etc/passwd |
sed -n 'n;p' |
cut -d':' -f1 |
rev |
sort -r |
awk "NR>=$FT_LINE1 && NR<=$FT_LINE2" |
sed ':a;N;$!ba;s/\n/_, /g' | sed 's/$/./'
