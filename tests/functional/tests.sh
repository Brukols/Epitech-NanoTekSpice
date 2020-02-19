#!/bin/bash

test_passed=0
test_crashed=0
test_failed=0
nb_test=0

bold=$(tput bold)
normal=$(tput sgr0)
RED='\033[0;31m'
CYAN='\033[0;36m'
GREEN='\033[0;32m'
NC='\033[0m'

# arg1 = command to execute, arg2 = file to open, arg3 = description
exec_test()
{
    # Display the test and numero
    echo -ne "${CYAN}${bold}Test n°$nb_test${NC} ${bold}($3)${NC} : "

    # Get file information
    expect=""
    command=""
    expected=0
    while IFS= read -r line; do
        if [[ "${line:0:1}" == "#" ]]
        then
            continue
        fi
        if [[ "$line" == "expected:" ]]
        then
            expected=1
            continue
        fi
        if [[ $line == "command:" ]]
        then
            expected=0
            continue
        fi
        if [[ expected -eq 1 ]]
        then
            expect+="$line\n"
        fi
        if [[ expected -eq 0 ]]
        then
            command+="$line\n"
        fi
    done < "tests/functional/$2"

    # Execute binary file
    result=`echo -ne "$command" | $1`
    
    # Parse results
    prompt=0
    got=""
    for (( i=0; i < ${#result}; i++ )); do
        if [[ "$prompt" == "1" ]]
        then
            if [[ "${result:$i:1}" == " " ]]
            then
                prompt=0
                continue
            fi
        fi
        if [[ "${result:$i:1}" == ">" ]]
        then
            prompt=1
            continue
        fi
        got+="${result:$i:1}"
    done

    got=`echo -ne "$got"`
    expect=`echo -ne "$expect"`

    if [[ "$got" == "$expect" ]]
    then
        echo -ne "${GREEN}${bold}OK${NC}\n"
        ((test_passed++))
    else
        echo -ne "${RED}${bold}KO${NC}\n"
        ((test_failed++))
    fi
    ((nb_test++))
}

exec_test "./nanotekspice ressources/basics/or_gate.nts a=0 b=1" "test00" "or_gate"
exec_test "./nanotekspice ressources/basics/and.nts a=0 b=0 a2=0 b2=0 a3=0 b3=0 a4=0 b4=0" "test01" "and"
exec_test "./nanotekspice ressources/basics/adder.nts a=0 b=0 a2=0 b2=0 a3=0 b3=0 a4=0 b4=0 cin=0" "test02" "adder"
exec_test "./nanotekspice ressources/basics/counter.nts clock=0 reset=1" "test03" "counter"
exec_test "./nanotekspice ressources/basics/d_latch.nts clock=0 data=0 set=0 reset=0" "test04" "d_latch"
exec_test "./nanotekspice ressources/basics/decoder.nts strobe=1 inhibit=1 a0=0 a1=0 a2=0 a3=0" "test05" "decoder"
exec_test "./nanotekspice ressources/basics/nand.nts a=1 b=1 a2=0 b2=0 a3=1 b3=0 a4=0 b4=1" "test06" "nand"
exec_test "./nanotekspice ressources/basics/nor.nts a=1 b=1 a2=0 b2=0 a3=1 b3=0 a4=0 b4=1" "test07" "nor"
exec_test "./nanotekspice ressources/basics/not.nts i0=0 i1=0 i2=0 i3=0 i4=0 i5=0" "test08" "not"
exec_test "./nanotekspice ressources/basics/or.nts a=1 b=1 a2=0 b2=0 a3=1 b3=0 a4=0 b4=1" "test09" "or"
exec_test "./nanotekspice ressources/basics/xor.nts a=0 b=0 a2=0 b2=0 a3=0 b3=0 a4=0 b4=0" "test10" "xor"
exec_test "./nanotekspice ressources/primitives/5input_nand.nts a=0 b=0 c=0 d=0 e=0" "test14" "5input_nand"
exec_test "./nanotekspice ressources/primitives/5input_and.nts a=0 b=0 c=0 d=0 e=0" "test11" "5input_and"
exec_test "./nanotekspice ressources/primitives/5input_or.nts a=0 b=0 c=0 d=0 e=0" "test12" "5input_or"
exec_test "./nanotekspice ressources/primitives/mandion.nts a=0 b=1 c=1" "test13" "mandion"

exit 0