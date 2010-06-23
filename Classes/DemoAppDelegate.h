//
//  DemoAppDelegate.h
//  TouchXMLKit
//
//  Created by Jeffrey Sambells on 10-06-17.
//  Copyright We-Create Inc. 2010. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DemoViewController;

@interface DemoAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    DemoViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet DemoViewController *viewController;

@end

