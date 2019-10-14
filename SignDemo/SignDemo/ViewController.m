//
//  ViewController.m
//  SignDemo
//
//  Created by 飞鱼2100 on 2018/10/15.
//  Copyright © 2018年 feiyu.com. All rights reserved.
//

#import "ViewController.h"
#import <Toast/Toast.h>
#import "HRSaving.h"
#import <HRSigningContract/HRSigningContractInterface.h>
@interface ViewController (){
    UITextField *textFile;
    UITextField *textFile1;
}

@end

@implementation ViewController
- (void)viewDidLoad {
    [super viewDidLoad];
    
    NSLog(@"version================%@",[HRSigningContractInterface getSdkVersion]);
    
    self.view.backgroundColor = [UIColor whiteColor];
    self.edgesForExtendedLayout =  UIRectEdgeLeft | UIRectEdgeBottom | UIRectEdgeRight;
    
    UIButton *sumbitBtn = [[UIButton alloc] initWithFrame:CGRectMake(10, 200, self.view.frame.size.width - 20, 44)];
    [sumbitBtn setTitle:@"电子签约" forState:UIControlStateNormal];
    [sumbitBtn addTarget:self action:@selector(sumbitAction:) forControlEvents:UIControlEventTouchUpInside];
    sumbitBtn.backgroundColor = [UIColor blackColor];
    [self.view addSubview:sumbitBtn];
    textFile = [[UITextField alloc] initWithFrame:CGRectMake(10, 100, self.view.frame.size.width  - 20, 44)];
    textFile.layer.borderColor = [UIColor blackColor].CGColor;
    textFile.layer.borderWidth = 1;
    textFile.placeholder = @"车贷云测试环境的订单号";
    [self.view addSubview:textFile];
    textFile1 = [[UITextField alloc] initWithFrame:CGRectMake(10, 50, self.view.frame.size.width  - 20, 44)];
    textFile1.layer.borderColor = [UIColor blackColor].CGColor;
    textFile1.layer.borderWidth = 1;
    textFile1.placeholder = @"车贷云测试环境的assurerNo";
    [self.view addSubview:textFile1];
    
    //BPA5311903000164
    //    D20103300
    // vxdb014020190104103003819  D36024344 vxdb000220190626154445546（合同）  vxdb000220190626104539897
    
//    分期
//    D20103300
//    BPA2101907000044
    
//    征信阶段S04026363
//    vxdb000220190715162552170
    
//    textFile.text= @"vxdb000220190627141803585";
//        textFile1.text = @"S04026363";
//
//    String assurerNo = "D20103300";
    //    String orderNo = "BPA2101906001212";  //分期
//    String orderNo = "BPA2101907000122";  //分期
    
//    textFile.text= @"vxdb000220190715162552170";
//    textFile1.text = @"S04026363";
    
//    
    textFile.text= @"BPA2101907000044";
    textFile1.text = @"D20103300";
//    
//    textFile.text= @"9238631085885440";
//    textFile1.text = @"S36024460";
    
//    textFile.text= @"zhsd20193818911a96";
//    textFile1.text = @"S10011930";
    
//
//    textFile.text= @"vxdb000220190730160431328";
//    textFile1.text = @"S04026363";
//
//        textFile.text= @"vxdb000220190628150224447";
//        textFile1.text = @"S04026363";
    
//    textFile.text= @"BPA2101907000020";
//    textFile1.text = @"D20103300";
    
//    textFile.text= @"SO190606100003";
//    textFile1.text = @"D18047561";
//  
}



- (void)sumbitAction:(UIButton *)btn{
   

    if (textFile.text.length > 0) {
    
    [[HRSigningContractInterface sharedUtil] signingContractOrderNo:textFile.text assurerNo:textFile1.text domainNameSystem:@"3" successAlert:^(NSDictionary *successAlertDic) {
        NSLog(@"%@", successAlertDic);
        [self.view hideToastActivity];
    } bankCardCertificationResult:^(NSDictionary *bankCardCertificationResultDic) {
        NSLog(@"%@", bankCardCertificationResultDic);
        [self.view hideToastActivity];

    } signComplete:^(NSDictionary *signCompleteDic) {
        NSLog(@"%@", signCompleteDic);
        [self.view hideToastActivity];
       
    } error:^(NSDictionary *errorDic) {
        NSLog(@"%@", errorDic);
        [self.view hideToastActivity];

    }];
    
    }
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
