//+------------------------------------------------------------------+
//|                  EA31337 - multi-strategy advanced trading robot |
//|                       Copyright 2016-2020, 31337 Investments Ltd |
//|                                       https://github.com/EA31337 |
//+------------------------------------------------------------------+

// Defines strategy's parameter values for the given pair symbol and timeframe.
struct Stg_MACD_EURUSD_H4_Params : Stg_MACD_Params {
  Stg_MACD_EURUSD_H4_Params() {
    symbol = "EURUSD";
    tf = PERIOD_H4;
    MACD_Period_Fast = 12;
    MACD_Period_Slow = 26;
    MACD_Period_Signal = 9;
    MACD_Applied_Price = 3;
    MACD_Shift = 0;
    MACD_SignalOpenMethod = 0;
    MACD_SignalOpenLevel = 36;
    MACD_SignalCloseMethod = 1;
    MACD_SignalCloseLevel = 36;
    MACD_PriceLimitMethod = 0;
    MACD_PriceLimitLevel = 0;
    MACD_MaxSpread = 10;
  }
} stg_macd_h4;