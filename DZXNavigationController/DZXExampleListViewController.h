//
//  DZXExampleListViewController.h
//  DZXNavigationController
//
//  Created by Kenway on 15/12/21.
//  Copyright © 2015年 Zahi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DZXViewController.h"
#import "FirstViewController.h"
#import "NavigationTranslucentViewController.h"
#import "NavigationTitleViewController.h"
#import "NavigationBarButtonItemViewController.h"
#import "NavigationTitleViewViewController.h"

@interface DZXExampleListViewController : DZXViewController <UITableViewDataSource, UITableViewDelegate>

@property (nonatomic, strong) IBOutlet UITableView *listTableView;

@property (nonatomic, copy) NSArray *arrayExampleList;

@end
