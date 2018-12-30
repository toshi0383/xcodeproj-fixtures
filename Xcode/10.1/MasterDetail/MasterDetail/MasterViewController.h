//
//  MasterViewController.h
//  MasterDetail
//
//  Created by 鈴木俊裕 on 2018/12/30.
//  Copyright © 2018 Toshihiro Suzuki. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;


@end

