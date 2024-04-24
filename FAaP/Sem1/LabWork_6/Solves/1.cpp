#include <iostream>

int main() {
    std::string s1 = "iTKzMEaEpASUifYiIOifhnjAaUUzotejUekzTfAEUUYIvoNabuFHMrVbouIfUKRozpEyEByIdEBafhIiksueZUgpkBuiaMYjuEkIYgEIrIkUyeUBsEbuiOIu"
                     "iGHunJUGEfMFpimHkUPsUIItKIUifYksIUbksIIksgbvuInyukuPyeUAoUiUuukGVfnfAMoIinuUZViEIPSFAIsjImYIfuYKyvBdiAviezuiViurisZUumgm"
                     "eTypZuYNoiZSUUGoaUidIIuUvFmfuiZaiVyiEksIkvUVIsBUOmAjaMuuZYzugUUzTYYAAOFUNFeUUnUTYijUdjkZSYHuktSkjfYJNdrdFvUOhIaDIGeUEkvu"
                     "JkiEBUUhzuFoDoiIbUVIHjuvkvsfsaUuzDZGfvieUUruAiakvAMITAtUvuUvokuVUuIUZAzHzUYnOdUIsdOyEzvOJOnIGyAkiIvuPVjUAnyioNfYtutUIOiJ"
                     "ijapZioJYZUuOrzAYUjAhuyiduPEkfivtuAZkMBYIvUidksuuJDuIGKdGFUPZGeiYzUUksHfiiubkZfifukvuBGDIesYuigUvEASykRUHgezayYukviyEUuu"
                     "jSKsiFuuUksykSAzuTuuUTeOeAaOziiNAUriakdtIkoIzTiuUfbUAuobiUSZaksuymvOuTbkvrozrksyzvrYiVusifIIPuUAVEOAbsIIekfsypUUYUYiniuY"
                     "BfUIfugksujYIEIIOtpYuMivzPiU";
    std::string s2 = "iTKzMEaEpASUifYiIOifhnjAaUUzotejUekzTfAEUUYIvoNabuFHMrVbouIfUKRozpEyEByIdEBafhIiksueZUgpkBuiaMYjuEkIYgEIrIkUyeUBsEbuiOIuiGHunJUGEfMFpimHkUPsUIItKIUifYksIUbksIIksgbvuInyukuPyeUAoUiUuukGVfnfAMoIinuUZViEIPSFAIsjImYIfuYKyvBdiAviezuiViurisZUumgmeTypZuYNoiZSUUGoaUidIIuUvFmfuiZaiVyiEksIkvUVIsBUOmAjaMuuZYzugUUzTYYAAOFUNFeUUnUTYijUdjkZSYHuktSkjfYJNdrdFvUOhIaDIGeUEkvuJkiEBUUhzuFoDoiIbUVIHjuvkvsfsaUuzDZGfvieUUruAiakvAMITAtUvuUvokuVUuIUZAzHzUYnOdUIsdOyEzvOJOnIGyAkiIvuPVjUAnyioNfYtutUIOiJijapZioJYZUuOrzAYUjAhuyiduPEkfivtuAZkMBYIvUidksuuJDuIGKdGFUPZGeiYzUUksHfiiubkZfifukvuBGDIesYuigUvEASykRUHgezayYukviyEUuujSKsiFuuUksykSAzuTuuUTeOeAaOziiNAUriakdtIkoIzTiuUfbUAuobiUSZaksuymvOuTbkvrozrksyzvrYiVusifIIPuUAVEOAbsIIekfsypUUYUYiniuYBfUIfugksujYIEIIOtpYuMivzPiU";
    for (int i = 0; i < s1.size(); ++i) {
        if (s1[i] != s2[i] ) std::cout << i;
    }
    return 0;
}
