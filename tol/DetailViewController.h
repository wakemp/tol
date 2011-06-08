//
//  DetailViewController.h
//  tol
//
//  Created by Bill Kempthorne on 11-06-07.
//  Copyright 2011 Maxwest Technical Consulting Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@property (strong, nonatomic) IBOutlet UIToolbar *toolbar;

@end
