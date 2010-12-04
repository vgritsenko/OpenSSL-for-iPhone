//
//  OpenSSL_for_iPhoneAppDelegate.h
//  OpenSSL-for-iPhone
//
//  Created by Felix Schulze on 01.02.2010.
//  Copyright Felix Schulze 2010. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface OpenSSL_for_iPhoneAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
	
	IBOutlet UITextField *textField;
	IBOutlet UITextField *md5TextField;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UITextField *textField;
@property (nonatomic, retain) IBOutlet UITextField *md5TextField;


- (IBAction)showInfo;
- (IBAction)calculateMD5:(id)sender;
@end
