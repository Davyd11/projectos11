cat /etc/passwd | grep -v "#" | cut -d : -f 1 | sed -n $FT_LINE1,$FT_LINE2\p | awk 'NR % 2 == 0' | rev | sort -r | sed -e ':a' -e 'N' -e '$!ba' -e 's/\n/, /g' | tr '\n' '.'
