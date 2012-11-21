//
//  OWLoginViewController.h
//  OpenWatch
//
//  Created by Christopher Ballinger on 11/12/12.
//  Copyright (c) 2012 OpenWatch FPC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OWAccount.h"

@interface OWLoginViewController : UIViewController <UITextFieldDelegate, UITableViewDataSource, UITableViewDelegate>

@property (nonatomic, strong) UIScrollView *scrollView;

@property (nonatomic, strong) OWAccount *account;

@property (nonatomic, strong) UIImageView *headerImageView;

@property (nonatomic, strong) UITextField *emailTextField;
@property (nonatomic, strong) UITextField *passwordTextField;

@property (nonatomic, strong) UIBarButtonItem *loginButton;
@property (nonatomic, strong) UIBarButtonItem *logoutButton;

@property (nonatomic, strong) UILabel *helpLabel;

@property (nonatomic, strong) NSMutableArray * tableViewArray;

@property (nonatomic, strong) UITableView *loginViewTableView;

@property (nonatomic, strong) UISegmentedControl *loginOrSignupSegmentedControl;

@end
