//
//  DetailViewController.h
//  CDRecommend
//
//  Created by DongChen on 2017/4/20.
//  Copyright © 2017年 DongChen. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) NSDate *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

