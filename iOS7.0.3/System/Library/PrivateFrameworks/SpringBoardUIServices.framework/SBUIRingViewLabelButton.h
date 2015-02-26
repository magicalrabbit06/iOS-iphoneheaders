/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:25 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKit/UIControl.h>

@class TPRevealingRingView, UILabel;

@interface SBUIRingViewLabelButton : UIControl {

	TPRevealingRingView* _ringView;
	UILabel* _label;

}

@property (nonatomic,readonly) TPRevealingRingView * backgroundRing;              //@synthesize ringView=_ringView - In the implementation block
@property (nonatomic,readonly) UILabel * label;                                   //@synthesize label=_label - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)label;
-(id)backgroundRing;
@end
