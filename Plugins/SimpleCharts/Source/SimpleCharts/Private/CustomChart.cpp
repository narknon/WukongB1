#include "CustomChart.h"

UCustomChart::UCustomChart() {
    this->useDirtyRect = true;
    this->Theme = ChartTheme::azul;
    this->Option = TEXT("{\"xAxis\": {\"data\" : [\"Mon\", \"Tue\", \"Wed\", \"Thu\", \"Fri\",\"Sat\", \"Sun\"]},\"yAxis\" : {\"type\": \"value\"},\"series\" : [{\"data\": [820, 932, 901, 934, 1290, 1330, 1320],\"type\" : \"line\"}]}");
}

void UCustomChart::SetTheme(ChartTheme ChartTheme) {
}

void UCustomChart::SetOption(const FString& InOption, const FString& OtherCode) {
}


