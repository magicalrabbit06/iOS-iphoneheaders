/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:17:39 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class UIWindow;

@interface _UIModalItemAppViewController : UIViewController {

	UIWindow* _rotationDelegate;

}

@property (nonatomic,retain) UIWindow * rotationDelegate;              //@synthesize rotationDelegate=_rotationDelegate - In the implementation block
-(void)dealloc;
-(char)shouldAutorotate;
-(unsigned)supportedInterfaceOrientations;
-(char)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(int)preferredInterfaceOrientationForPresentation;
-(UIWindow *)rotationDelegate;
-(void)setRotationDelegate:(UIWindow *)arg1 ;
@end
