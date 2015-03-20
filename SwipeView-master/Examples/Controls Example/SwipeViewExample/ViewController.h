//
//  ViewController.h
//  SwipeViewExample
//
//  Created by Nick Lockwood on 28/10/2011.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SwipeView.h"


@interface ViewController : UIViewController <SwipeViewDelegate, SwipeViewDataSource>

@property (nonatomic, strong) IBOutlet SwipeView *swipeView;
@property (nonatomic, strong) IBOutlet UILabel *label;

- (IBAction)pressedButton:(id)sender;
- (IBAction)toggledSwitch:(id)sender;
- (IBAction)changedSlider:(id)sender;

@end
