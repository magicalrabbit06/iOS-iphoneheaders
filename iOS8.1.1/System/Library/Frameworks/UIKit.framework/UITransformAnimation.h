/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:09 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIAnimation.h>

@interface UITransformAnimation : UIAnimation {

	CGAffineTransform _startTransform;
	CGAffineTransform _endTransform;

}
-(void)setProgress:(float)arg1 ;
-(CGAffineTransform)_transformWithMultiplier:(float)arg1 ;
-(void)setStartTransform:(CGAffineTransform)arg1 ;
-(void)setEndTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)transformForFraction:(float)arg1 ;
@end
