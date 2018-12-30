//
//  DetailViewController.h
//  MasterDetail
//
//  Created by 鈴木俊裕 on 2018/12/30.
//  Copyright © 2018 Toshihiro Suzuki. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) NSDate *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

