#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int nota = 0;

    cout << "Ingrese la nota que obtuvo: ";
    cin >> nota;

    if (nota >= 99 && nota <= 100) {
        cout << "Obtuvistes una A++";
    } else {
        if (nota >= 95 && nota <= 99) {
            cout << "Obtuvistes una A+";
        } else {
            if (nota >= 90 && nota <= 94) {
                cout << "Obtuvistes una A";
            } else {
                if (nota >= 85 && nota <= 89) {
                    cout << "Obtuvistes una A-";
                } else {
                    if (nota >= 80 && nota <= 84) {
                        cout << "Obtuvistes una B+";
                    } else { 
                        if (nota >= 75 && nota <= 79) {
                            cout << "Obtuvistes una B";
                        } else {
                            if (nota >= 70 && nota <= 74) {
                                cout << "Obtuvistes una B-";
                            } else {
                                if (nota >= 65 && nota <= 69) {
                                    cout << "Obtuvistes una C+";
                                } else {
                                    if (nota >= 60 && nota <= 64) {
                                        cout << "Obtuvistes una C";
                                    } else {
                                        if (nota >= 55 && nota <= 59) {
                                            cout << "Obtuvistes una C-";
                                        } else {
                                            if (nota >= 50 && nota <= 54) {
                                                cout << "Obtuvistes una D+";
                                            } else {
                                                if (nota >= 45 && nota <= 49) {
                                                    cout << "Obtuvistes una D";
                                                } else {                                 
                                                    if (nota >= 40 && nota <= 44) {
                                                        cout << "Obtuvistes una D-";
                                                    } else {
                                                        if (nota >= 35 && nota <= 39) {
                                                            cout << "Obtuvistes una E+";
                                                        } else {
                                                            if (nota >= 30 && nota <= 34) {
                                                                cout << "Obtuvistes una E";
                                                            } else {
                                                                if (nota >= 25 && nota <= 29) {
                                                                    cout << "Obtuvistes una E-";
                                                                } else {
                                                                     if (nota >= 20 && nota <= 24) {
                                                                        cout << "Obtuvistes una F+";    
                                                                    } else {
                                                                        if (nota >= 15 && nota <= 19) {
                                                                            cout << "Obtuvistes una F";    
                                                                        } else {
                                                                            if (nota >= 10 && nota <= 14) {
                                                                                cout << "Obtuvistes una F";    
                                                                            } else {
                                                                                if (nota >= 5 && nota <= 9) {
                                                                                    cout << "Obtuvistes una F-";    
                                                                                } else {
                                                                                    if (nota >= 0 && nota <= 4) {
                                                                                        cout << "Obtuvistes una F--";    
                                                                                    } else { 
                                                                                        if (nota >= 0 && nota < 60) {
                                                                                            cout << "Obtuvistes una F";
                                                                                        } else {
                                                                                         cout << "Ingrese una nota entre 0 - 100";
                                                                                    }
                                                                                }                  
                                                                            }                  
                                                                        }                   
                                                                    }    
                                                                }
                                                            }                  
                                                        }                  
                                                    }                   
                                                }    
                                            }
                                        }                  
                                    }                  
                                }                   
                            }    
                        }
                    }                  
                }                  
            }                   
        }                                          
    }             
}
    return 0;
}
