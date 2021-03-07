#include <iostream>
#include <string>

using namespace std;


int keywordCount = 0, constantCount = 0, operatorCount = 0, identifierCount = 0, attribValue = 0;

string keywordCheck(string str)
{
    string keywordList[32] = {"auto",
                              "break",
                              "case",
                              "char",
                              "const",
                              "continue",
                              "default",
                              "do",
                              "double",
                              "else",
                              "enum",
                              "extern",
                              "float",
                              "for",
                              "goto",
                              "if",
                              "int",
                              "long",
                              "register",
                              "return",
                              "short",
                              "signed",
                              "sizeof",
                              "static",
                              "struct",
                              "switch",
                              "typedef",
                              "union",
                              "unsigned",
                              "void",
                              "volatile",
                              "while"};

    int isKeyword = 1;

    for (int i = 0; i < 32; i++)
    {

        isKeyword = str.compare(keywordList[i]);

        if (isKeyword == 0)
        {
            keywordCount++;
            break;
        }
    }

    return to_string(isKeyword);
}


string constantDigit(string input)
{
    char digits[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

    int digt = 1;

    int p = input.length();

    char inputArry[p];

    for (int k = 0; k < sizeof(inputArry); k++)
    {
        inputArry[k] = input[k];
    }

    for (int i = 0; i < sizeof(inputArry); i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (inputArry[i] != ' ')
            {
                if (inputArry[i] == digits[j])
                {
                    digt = 0;
                    break;
                }
                else if (inputArry[i] != digits[j])
                {
                    digt = 1;
                }
            }
        }
    }

    if (digt == 0)
    {
        constantCount++;
    }

    return to_string(digt);
}


string operatorCheck(string input)
{
    string operators[5] = {
        "=",
        "+",
        "-",
        "/",
        "*",
    };

    int optr = 1;

    for (int i = 0; i < 5; i++)
    {
        optr = input.compare(operators[i]);

        if (optr == 0)
        {
            operatorCount++;
            break;
        }
    }

    return to_string(optr);
}

int main()
{
    string stringInput, str, lexicalConvs;
    cout << "\nEnter a string: ";
    getline(cin, stringInput);

    stringInput += ' ';

    for (auto part : stringInput)
    {
        if (part == ' ')
        {
            string k = keywordCheck(str);
            string c = constantDigit(str);
            string o = operatorCheck(str);

            if (k == "0" || c == "0" || o == "0")
            {
                lexicalConvs += "<" + str + ">";
            }
            else if (k != "0" && c != "0" && o != "0")
            {
                identifierCount++;
                attribValue++;
                lexicalConvs += "<id," + to_string(attribValue) + ">";
            }
            str = "";
        }
        else
        {
            str += part;
        }
    }

    cout << "\n HERE : " <<endl<< keywordCount << " keyword, " <<endl<< identifierCount << " variable, " <<endl<< operatorCount << " operator and " <<endl<< constantCount << " constant. " << endl;
    cout << "Analysis Result: " << lexicalConvs << "\n"
         << endl;
}
