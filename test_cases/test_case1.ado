# test_case1.ado

noun main[
    discrete verb main[
        real variableA = 1.1
        real variableB = 1.1
        real finalResultA = 0

        # Arithmetic summation
        arithmeticSummation = arithmeticSummation()

        finalResultA = arithmeticSummation.arithmeticSummation(variableA, variableB)
        print(finalResultA)

        return 1
    ]
]

noun arithmeticSummation[
    real verb arithmeticSummation real inputA real inputB[
        real returnValue = inputA + inputB

        return returnValue
    ]
]
