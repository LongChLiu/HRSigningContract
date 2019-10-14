## HRSigningContract
## 惠瀜电子签约SDK
### 手动集成方式
下载项目，将依赖包放入项目中，引入libstdc++。
替换bundle中的授权文件。
### cocospods集成方式
#### podfile
```
platform :ios, '8.0'
use_frameworks!
target 'TargetName' do
pod 'HRSigningContract','~>1.3.0'
end

post_install do |installer|
installer.pods_project.targets.each do |target|
target.build_configurations.each do |config|
config.build_settings['ARCHS'] = "arm64 armv7"
config.build_settings['ENABLE_BITCODE'] = 'NO'
end
end
end
```
执行 `pod install`，将授权文件（lic）放入贵公司项目下即可。
#### 使用方式
直接在需要的类中 `#import <HRSigningContract/HRSigningContractInterface.h>`
使用`-（void）signingContractOrderNo:assurerNo:domainNameSystem:successAlert:bankCardCertificationResult:signComplete:error`
##### 参数说明：
* orderNo 订单号
* assurerNo 合作商户号
* hrdns sdk环境 1开发环境 2生产环境 3银行测试环境
* successAlert 调启征信页面成功
* bankCardCertificationResult 四要素认证结果返回
* signComplete 签署成功回调
* error 页面跳转失败，1.有些参数为nil 2.接口请求失败或者没有
##### 例子：
```
[[HRSigningContractInterface sharedUtil] signingContractOrderNo:@"BPA2101906001212" assurerNo:@"D20103300" domainNameSystem:@"3" successAlert:^(NSDictionary *successAlertDic) {
            NSLog(@"%@", successAlertDic);
        } bankCardCertificationResult:^(NSDictionary *bankCardCertificationResultDic) {
            NSLog(@"%@", bankCardCertificationResultDic);
        } signComplete:^(NSDictionary *signCompleteDic) {
            NSLog(@"%@", signCompleteDic);
        } error:^(NSDictionary *errorDic) {
            NSLog(@"%@", errorDic);
   
        }];
```
##### 返回的code说明（参考）
编 号|描 述
|:-----------:|:-------------|
-301|订单号为空
-302|合作商户号为空
1000|调用sdk页面成功了
1001|四要素认证失败
-200|接口数据错误
-300|网络异常或者服务器异常
1|接口调用成功
