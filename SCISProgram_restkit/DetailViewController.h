//
//  DetailViewController.h
//  SCISProgram_restkit
//
//  Created by Phuong Nguyen on 3/27/15.
//  Copyright (c) 2015 msse. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

