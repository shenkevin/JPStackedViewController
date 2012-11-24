//
//  JPStackedViewController.h
//  Stacked
//
//  Created by Joseph Pintozzi on 11/23/12.
//  Copyright (c) 2012 TinyDragon Apps. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JPStackedViewController : UIViewController<UIGestureRecognizerDelegate>{
    NSMutableArray *stackedViews;
    CGFloat firstX;
    bool panGestureStarted;
    NSDate *swipeGestureEndedTime;
    UISwipeGestureRecognizerDirection swipeDirection;
}

- (id)initWithViewControllers:(NSArray*)viewControllers;

@end
