#include<stdio.h>
int main(){
    printf("hello world");
    return 0;
}
<!DOCTYPE html>
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
    <title></title>
</head>
<body>
   <div style="border:solid 2px gray;width:400px">
       <div style="padding-left:10px">
           <table>
               <tr>
                   <td>Username:</td>
                   <td><input type="text" placeholder="Nhập tài khoản" /></td>
               </tr>
               <tr>
                   <td>Password:</td>
                   <td><input type="password" placeholder="Nhập mật khẩu" /></td>
               </tr>
           </table>
           <button>
               ĐĂNG NHẬP
           </button>
       </div>
       <div style="padding-left:10px;border-top:solid 2px gray;border-bottom:solid 2px gray;margin-left:10px;margin-top:8px">
           <table >
               <tr>
                   <td>Hobby:</td>
                   <td><input type="checkbox" />Music</td>
               </tr>
           </table>
           <div style="padding-left:55px"><input type="checkbox" />Film</div>
           <div style="padding-left:55px"><input type="checkbox" />Sport</div>
       </div>
       <div style="padding-left:10px;">
           <table>
               <tr>
                   <td>User for:</td>
                   <td><input type="radio" />Home</td>
               </tr>
           </table>
           <div style="padding-left:64px"><input type="radio" />Business</div>
           <div style="padding-left:64px"><input type="radio" />Government</div>
           <div style="padding-left:64px"><input type="radio" />Education Institution</div>
           <div style="padding-left:64px"><input type="radio" />Other</div>
       </div>
       <div style="padding-left: 5px; border-top: solid 2px gray; border-bottom: solid 2px gray; margin-left: 10px; margin-top: 8px">
          <div style="margin-top:8px;margin-bottom:8px"><button>Chuỗi reset</button></div>
       </div>
       <div style="padding-left:10px;margin-top:10px"><button>OK</button></div>
       <div style="border-top:solid 2px gray;border-bottom:solid 2px gray;color:white;margin-bottom:5px;margin-left:10px;font-size:10px;margin-top:8px">khoản trắng</div>
   </div>
</body>
</html>
