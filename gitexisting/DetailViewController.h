//
//  DetailViewController.h
//  gitexisting
//
//  Created by Priyank on 26/10/2015.
//  Copyright (c) 2015 Priyank. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

