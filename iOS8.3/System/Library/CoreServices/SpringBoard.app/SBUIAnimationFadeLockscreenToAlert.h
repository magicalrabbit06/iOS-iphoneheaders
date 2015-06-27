/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:27 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@class SBLockScreenViewController, SBAlertManager, SBUIFullscreenAlertAdapter;

@interface SBUIAnimationFadeLockscreenToAlert : SBUIMainScreenAnimationController {

	SBLockScreenViewController* _lockScreenViewController;
	SBAlertManager* _alertManager;
	SBUIFullscreenAlertAdapter* _toAlert;
	char _alertViewIsAnimatingItself;
	char _alertIsTransparent;
	char _finishedPrimaryFadeAnimation;
	char _needsLockScreenAlphaRestoredOnCompletion;

}
-(void)_prepareAnimation;
-(void)_cleanupAnimation;
-(void)_animationFinished;
-(void)_evaluateTotalAnimationCompletion;
-(void)_alertViewFinishedAnimatingItself;
-(void)_fadeAnimationFinished;
-(id)initWithLockScreenController:(id)arg1 toAlert:(id)arg2 alertManager:(id)arg3 ;
-(void)_startAnimation;
-(void)dealloc;
-(double)animationDuration;
@end
