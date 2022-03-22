#include<stdio.h>
int main(){
    printf("hello world");
    return 0;
}
<!DOCTYPE html>

<html lang="en" xmlns="http://www.w3.org/1999/xhtml">
<head>
    <meta charset="utf-8" />
    <title></title>
</head>
<body>
    <div>
                <table style="border:solid 1px;border-collapse:collapse">
                    <tr>
                        <td colspan="3" style="border-bottom:solid 1px;text-align:center;background-color:#66ffff;padding-top:10px;padding-bottom:10px"><strong>THÊM SINH VIÊN</strong>  </td>
                    </tr>
                    <tr>
                        <td style="border:solid 1px;padding-left:50px">Mã sinh viên</td>
                        <td style=" border: solid 1px;"><input style="height: 30px;" type="text" /></td>
                        <td style=" border: solid 1px;"><input style="height: 30px; " type="text" /></td>
                    </tr>
                    <tr>
                        <td style="border: solid 1px; padding-left: 75px">Họ Tên</td>
                        <td style=" border: solid 1px;"><input style="height: 30px;" type="text" /></td>
                        <td style=" border: solid 1px;"><input style="height: 30px; " type="text" /></td>
                    </tr>
                    <tr>
                        <td style="border: solid 1px; padding-left: 60px">Ngày sinh</td>
                        <td  style="border:solid 1px;width:20px">mm/dd/yyyy</td>
                        <td style=" border: solid 1px;"><input style="height: 30px; outline:none " type="text" /></td>
                    </tr>
                    <tr>
                        <td style="border: solid 1px; padding-left: 90px">
                            Hình
                        </td>
                        <td colspan="2"  style="border-bottom:solid 1px;padding-bottom:20px;"><button>Browse</button>No file selected.</td>
                    </tr>
                    <tr>
                        <td style="color:white;">KT</td>
                        <td colspan="2"><button style="padding:10px;">ADD</button><button style="padding:10px;margin-left:10px;margin-right:10px">UPDATE</button><button style="padding:10px">SAVE</button></td>
                        
                    </tr>
                </table>
                <table style="border:solid 1px;width:497px;border-collapse:collapse">
                    <tr>
                        <td colspan="5" style="text-align:center;background-color:#3366cc ;padding-top:10px;padding-bottom:10px;color:white"><strong>DANH SÁCH SINH VIÊN</strong></td>
                    </tr>
                    <tr>
                        <td style="border:solid 1px;padding:10px;text-align:center;background-color:#66ccff"><strong>STT</strong></td>
                        <td style="border: solid 1px; text-align: center; background-color: #66ccff; "><strong>MÃ SV</strong></td>
                        <td style="border: solid 1px; text-align: center; background-color: #66ccff; "><strong>Họ Tên</strong></td>
                        <td style="border: solid 1px; text-align: center; background-color: #66ccff; "><strong>Ngày sinh</strong></td>
                        <td style="border: solid 1px; text-align: center; background-color: #66ccff; "><strong>Hình</strong</td>
                    </tr>
                    <tr>
                        <td style="border: solid 1px; padding: 10px">1</td>
                        <td style="border:solid 1px">01001009</td>
                        <td style="border:solid 1px">Nguyên Hương Lan</td>
                        <td style="border:solid 1px">01/01/2000</td>
                        <td style="border:solid 1px">h1.jpg</td>
                    </tr>
                    <tr>
                        <td style="border: solid 1px; padding: 10px">2</td>
                        <td style="border:solid 1px">01001010</td>
                        <td style="border:solid 1px">Nguyễn Thành Nhan</td>
                        <td style="border:solid 1px">21/12/2000</td>
                        <td style="border:solid 1px">h2.jpg</td>
                    </tr>
                </table>
    </div>
</body>
</html>
