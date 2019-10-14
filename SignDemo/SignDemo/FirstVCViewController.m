//
//  FirstVCViewController.m
//  SignDemo
//
//  Created by 毕战路 on 2019/7/31.
//  Copyright © 2019 feiyu.com. All rights reserved.
//

#import "FirstVCViewController.h"
#import "ViewController.h"

@interface FirstVCViewController ()

@end

@implementation FirstVCViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
}

- (IBAction)push:(id)sender {
    
    [self.navigationController pushViewController:[ViewController new] animated:YES];
    
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
